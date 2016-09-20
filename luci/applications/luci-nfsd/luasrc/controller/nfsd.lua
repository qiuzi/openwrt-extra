--[[
 Nfsd Controller
]]--

module("luci.controller.nfsd", package.seeall)

function index()

	if not nixio.fs.access("/etc/config/nfsd") then
		return
	end
	entry({"admin", "services", "nfsd"}, cbi("nfsd"), _("NFS Service"), 49).dependent = true

end
