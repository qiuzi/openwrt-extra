--[[
LuCI - Lua Configuration Interface - amule support

Copyright 2016 maz-1 <ohmygod19993@gmail.com>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0
]]--

module("luci.controller.amule", package.seeall)

function index()
	if not nixio.fs.access("/etc/config/amule") then
		return
	end

	local page = entry({"admin", "services", "amule"}, cbi("amule"), _("aMule Settings"))
	page.dependent = true
	entry( {"admin", "services", "amule", "logview"}, call("logread") ).leaf = true
	entry( {"admin", "services", "amule", "status"}, call("get_pid") ).leaf = true
	entry( {"admin", "services", "amule", "startstop"}, post("startstop") ).leaf = true

end

-- called by XHR.get from detail_logview.htm
function logread()
	-- read application settings
	local uci     = luci.model.uci.cursor()
	local logdir  = uci:get("amule", "main", "config_dir") or "/var/run/amule"
	uci:unload("amule")

	local ldata=nixio.fs.readfile(logdir .. "/logfile")
	if not ldata or #ldata == 0 then
		ldata="_nodata_"
	end
	luci.http.write(ldata)
end

-- called by XHR.get from detail_startstop.htm
function startstop()
	local pid = get_pid(true)
	if pid > 0 then
		luci.sys.call("/etc/init.d/amule stop")
		nixio.nanosleep(1)		-- sleep a second
		if nixio.kill(pid, 0) then	-- still running
			nixio.kill(pid, 9)	-- send SIGKILL
		end
		pid = 0
	else
		luci.sys.call("/etc/init.d/amule start")
		nixio.nanosleep(1)		-- sleep a second
		pid = tonumber(luci.sys.exec("pidof amuled")) or 0 
		if pid > 0 and not nixio.kill(pid, 0) then
			pid = 0		-- process did not start
		end
	end
	luci.http.write(tostring(pid))	-- HTTP needs string not number
end

-- called by XHR.poll from detail_startstop.htm
-- and from lua (with parameter "true")
function get_pid(from_lua)
	local pid_amuled = tonumber(luci.sys.exec("pidof amuled")) or 0 
        local amuled_stat =false
	if pid_amuled > 0 and not nixio.kill(pid_amuled, 0) then
		pid_amuled = 0
	end
        
        if pid_amuled > 0 then
            amuled_stat =true
        else
            amuled_stat =false
        end
        
	local pid_amuleweb = tonumber(luci.sys.exec("pidof amuleweb")) or 0 
        local amuleweb_stat = false
	if pid_amuleweb > 0 and not nixio.kill(pid_amuleweb, 0) then
		pid_amuleweb = 0
	end
        
        if pid_amuleweb > 0 then
            amuleweb_stat =true
        else
            amuleweb_stat =false
        end
        
	local status = {
		amuled = amuled_stat,
		amuled_pid = pid_amuled,
		amuleweb = amuleweb_stat
	}
        
	if from_lua then
		return pid_amuled
	else
		luci.http.prepare_content("application/json")
		luci.http.write_json(status)	
	end
end
