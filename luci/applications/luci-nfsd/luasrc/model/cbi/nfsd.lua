
m = Map("nfsd", translate("NFS server for UNIX-like systems"), translate("Probably the most secure and fastest NFS server for UNIX-like systems"))

s = m:section(TypedSection, "nfsd", translate("General"))
s.anonymous = true

switch = s:option(Flag, "enable", translate("enable"), translate("Enable NFS Sevice"))
switch.rmempty = false


s = m:section(TypedSection, "nfsshare", translate("NFS shares"))
s.template  = "cbi/tblsection"
s.anonymous = true
s.addremove = true

u = s:option(Flag, "enable", translate("Enable"))
u.rmempty = false
u.disabled = 0

s:option(Value, "name", translate("Name"))

i = s:option(Value, "iprange", translate("Allowed IPs"))
i.placeholder = "*"
i.rmempty = true

o = s:option(Value, "options", translate("Options"))
o.placeholder = "ro,all_squash,insecure,sync"
o.rmempty = false

upth = s:option(Value, "path", translate("Path"))
upth.rmempty = false
upth.datatype = "directory"
local upth_suggestions = nixio.fs.glob("/mnt/sd*")

if upth_suggestions then
	local node
	for node in upth_suggestions do
		upth:value(node)
	end
end

return m

