include $(TOPDIR)/rules.mk

LUCI_TOPDIR=..

PKG_NAME:=luci-extra-maz1
PKG_RELEASE:=1

PKG_BUILD_PARALLEL:=0

PKG_VERSION:=2014-09-04

PKG_BUILD_DEPENDS:=$(if $(STAGING_DIR_ROOT),lua/host)
PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)
PKG_INSTALL_DIR:=$(PKG_BUILD_DIR)/ipkg-install

LUA_TARGET:=source
LUCI_CFLAGS:=
LUCI_BUILD_PACKAGES:=
LUCI_SELECTED_MODULES:=

ifeq ($(BOARD),brcm-2.4)
  MAKE_FLAGS += CRAP="1"
endif


### Templates ###
define Package/luci/install/template
	$(CP) -a $(PKG_BUILD_DIR)/$(2)/dist/* $(1)/ -R
	$(CP) -a $(PKG_BUILD_DIR)/$(2)/ipkg/* $(1)/CONTROL/ 2>/dev/null || true
endef

### Applications ###
define application
  define Package/luci-app-$(1)
    SECTION:=luci
    CATEGORY:=LuCI
    TITLE:=LuCI - Lua Configuration Interface
    URL:=https://github.com/openwrt-stuff/openwrt-extra/
    MAINTAINER:=maz-1 <ohmygod19993@gmail.com>
    PKGARCH:=all
    SUBMENU:=3. Applications
    TITLE:=$(if $(2),$(2),LuCI $(1) application)
	DEPENDS:=$(3)
  endef

  define Package/luci-app-$(1)/install
	$(call Package/luci/install/template,$$(1),applications/luci-$(1))
  endef

  ifneq ($(CONFIG_PACKAGE_luci-app-$(1)),)
    LUCI_SELECTED_MODULES+=applications/luci-$(1)
  endif

  LUCI_BUILD_PACKAGES += luci-app-$(1)
endef

### Protocol ###
define protocol
  define Package/luci-proto-$(1)
    SECTION:=luci
    CATEGORY:=LuCI
    TITLE:=LuCI - Lua Configuration Interface
    URL:=https://github.com/openwrt-stuff/openwrt-extra/
    MAINTAINER:=maz-1 <ohmygod19993@gmail.com>
    PKGARCH:=all
    SUBMENU:=5. Protocols
    TITLE:=$(if $(2),$(2),LuCI $(1) protocol)
	DEPENDS:=$(3)
  endef

  define Package/luci-proto-$(1)/install
	$(call Package/luci/install/template,$$(1),protocol/luci-$(1))
  endef

  ifneq ($(CONFIG_PACKAGE_luci-proto-$(1)),)
    LUCI_SELECTED_MODULES+=protocol/luci-$(1)
  endif

  LUCI_BUILD_PACKAGES += luci-proto-$(1)
endef



define Package/luci-app-samba4/conffiles
/etc/config/samba4
endef

$(eval $(call application,samba4,LuCI Support for Samba4,\
	+PACKAGE_luci-app-samba4:samba44-server))


#define Package/luci-app-aria2/conffiles
#/etc/config/aria2
#endef

#$(eval $(call application,aria2,LuCI Support for Aria2,\
#	+PACKAGE_luci-app-aria2:aria2 \
#	+PACKAGE_luci-app-aria2:yaaw))


define Package/luci-app-ngrokc/conffiles
/etc/config/ngrokc
endef

$(eval $(call application,ngrokc,LuCI Support for Ngrokc,\
	+PACKAGE_luci-app-ngrokc:ngrokc))


define Package/luci-app-qos-guoguo/conffiles
/etc/config/qos_guoguo
endef

$(eval $(call application,qos-guoguo,LuCI Support for qos-guoguo,\
	+PACKAGE_luci-app-qos-guoguo:qos-guoguo))



define Package/luci-app-adkill/conffiles
/etc/config/adkill
endef

$(eval $(call application,adkill,LuCI Support for adkill,\
	+PACKAGE_luci-app-adkill:kmod-adkill))


define Package/luci-app-redsocks2-alt/conffiles
/etc/config/redsocks2
endef

$(eval $(call application,redsocks2-alt,LuCI Support for redsocks2-alt,\
	+PACKAGE_luci-app-redsocks2-alt:redsocks2-alt))


define Package/luci-app-chinadns/conffiles
/etc/config/chinadns
endef

$(eval $(call application,chinadns,LuCI Support for chinadns,\
	+PACKAGE_luci-app-chinadns:ChinaDNS))

define Package/luci-app-vlmcsd/conffiles
/etc/config/vlmcsd
endef

$(eval $(call application,vlmcsd,LuCI Support for vlmcsd,\
	+PACKAGE_luci-app-vlmcsd:vlmcsd))


define Package/luci-app-vsftpd/conffiles
/etc/config/vsftpd
endef

$(eval $(call application,vsftpd,LuCI Support for vsftpd,\
	+PACKAGE_luci-app-vsftpd:vsftpd-alt))


define Package/luci-app-w8021x/conffiles
/etc/config/w8021x
endef

$(eval $(call application,w8021x,LuCI Support for w8021x,\
	+PACKAGE_luci-app-w8021x:w8021x))


define Package/luci-app-epg-oscam/conffiles
/etc/config/epg
/etc/config/oscam
endef

$(eval $(call application,epg-oscam,LuCI Support for epg-oscam,\
	+PACKAGE_luci-app-epg-oscam:oscam))


define Package/luci-app-nfsd/conffiles
/etc/config/nfsd
endef

$(eval $(call application,nfsd,LuCI Support for nfsd,\
	+PACKAGE_luci-app-nfsd:nfs-kernel-server))


define Package/luci-app-n2n/conffiles
/etc/config/n2n
endef

$(eval $(call application,n2n,LuCI Support for n2n,\
	+PACKAGE_luci-app-n2n:n2n-edge \
	+PACKAGE_luci-app-n2n:n2n-supernode ))


define Package/luci-app-macvlan/conffiles
/etc/config/macvlan
endef

$(eval $(call application,macvlan,LuCI Support for macvlan,\
	+PACKAGE_luci-app-macvlan:luci \
	+PACKAGE_luci-app-macvlan:kmod-macvlan ))


$(eval $(call application,webshell,LuCI Support for webshell,\
	+PACKAGE_luci-app-webshell:luci))


define Package/luci-app-amule/conffiles
/etc/config/amule
/etc/amule/amule.conf.template
endef

$(eval $(call application,amule,LuCI Support for amule,\
	+PACKAGE_luci-app-amule:amule))



$(eval $(call protocol,openvpn,OpenVPN protocol configuration,\
	+PACKAGE_luci-proto-openvpn:openvpn-client-netifd \
	+PACKAGE_luci-proto-openvpn:luci-lib-nixio))

$(eval $(call protocol,n2n,N2N protocol configuration,\
	+PACKAGE_luci-proto-n2n:n2n-edge))

$(eval $(call protocol,shadowvpn,ShadowVPN protocol configuration,\
	+PACKAGE_luci-proto-shadowvpn:shadowvpn))


#define Package/luci-app-rtorrent/conffiles
#/etc/config/rtorrent
#endef

#$(eval $(call application,rtorrent,LuCI Support for rtorrent,\
#	+PACKAGE_luci-app-rtorrent:rtorrent-rpc \
#	+PACKAGE_luci-app-rtorrent:dtach ))



define Package/luci-app-shadowsocks-libev-obfs/conffiles
/etc/config/shadowsocks-libev
endef

$(eval $(call application,shadowsocks-libev-obfs,LuCI Support for Shadowsocks-libev-obfs,\
	+PACKAGE_luci-app-shadowsocks-libev-obfs:shadowsocks-libev-obfs-openssl ))


### Compile ###
PKG_CONFIG_DEPENDS=$(patsubst %,CONFIG_PACKAGE_%,$(LUCI_BUILD_PACKAGES))

include $(INCLUDE_DIR)/package.mk

define Build/Prepare
	@if [ ! -x $(LUCI_TOPDIR)/build/mkrevision.sh ]; then \
		echo "*** Repository layout changed!" >&2; \
		echo "*** Please change the LuCI url in feeds.conf to http://svn.luci.subsignal.org/luci/trunk and reinstall the feed with" >&2; \
		echo "*** ./scripts/feeds update luci; ./scripts/feeds install -a -p luci" >&2; \
		exit 1; \
	fi
	mkdir -p $(PKG_BUILD_DIR)
	$(TAR) c -C $(LUCI_TOPDIR) . \
		--exclude=.pc --exclude=.svn --exclude=.git \
		--exclude='boa-0*' --exclude='*.o' --exclude='*.so' \
		--exclude=dist | \
			tar x -C $(PKG_BUILD_DIR)/
endef

define Build/Configure
endef

MAKE_FLAGS += \
	MODULES="$(LUCI_SELECTED_MODULES)" \
	LUA_TARGET="$(LUA_TARGET)" \
	LUA_SHLIBS="-llua -lm -ldl -lcrypt" \
	CFLAGS="$(TARGET_CFLAGS) $(LUCI_CFLAGS) -I$(STAGING_DIR)/usr/include" \
	LDFLAGS="$(TARGET_LDFLAGS) -L$(STAGING_DIR)/usr/lib" \
	NIXIO_TLS="$(NIXIO_TLS)" OS="Linux"


$(foreach b,$(LUCI_BUILD_PACKAGES),$(eval $(call BuildPackage,$(b))))
