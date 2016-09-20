include $(TOPDIR)/rules.mk

PKG_NAME:=shadowsocks-libev-obfs
PKG_VERSION:=2.4.0
PKG_RELEASE=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_URL:=https://github.com/breakwa11/shadowsocks-libev.git
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)
PKG_SOURCE_VERSION:=f3a923ee38a1fed6b81336bb90b83e37412ee2bb
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_MAINTAINER:=breakwa11

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(BUILD_VARIANT)/$(PKG_NAME)-$(PKG_VERSION)

PKG_INSTALL:=1
PKG_FIXUP:=autoreconf
PKG_BUILD_PARALLEL:=1
PKG_USE_MIPS16:=0

include $(INCLUDE_DIR)/package.mk

define Package/shadowsocks-libev-obfs/Default
  SECTION:=net
  CATEGORY:=Network
  TITLE:=Lightweight Secured Socks5 Proxy
  URL:=https://github.com/breakwa11/shadowsocks-libev
endef

define Package/shadowsocks-libev-obfs
  $(call Package/shadowsocks-libev-obfs/Default)
  TITLE+= (OpenSSL)
  VARIANT:=openssl
  DEPENDS:=+libopenssl +zlib
endef

define Package/shadowsocks-libev-obfs-polarssl
  $(call Package/shadowsocks-libev-obfs/Default)
  TITLE+= (PolarSSL)
  VARIANT:=polarssl
  DEPENDS:=+libpolarssl +zlib
endef

define Package/shadowsocks-libev-obfs-server
  $(call Package/shadowsocks-libev-obfs/Default)
  TITLE+= (OpenSSL)
  VARIANT:=openssl
  DEPENDS:=+libopenssl +libpthread +zlib
endef

define Package/shadowsocks-libev-obfs-server-polarssl
  $(call Package/shadowsocks-libev-obfs/Default)
  TITLE+= (PolarSSL)
  VARIANT:=polarssl
  DEPENDS:=+libpolarssl +libpthread +zlib
endef

define Package/shadowsocks-libev/description
Shadowsocks-libev is a lightweight secured scoks5 proxy for embedded devices and low end boxes.(with obfs support)
endef

Package/shadowsocks-libev-obfs-polarssl/description=$(Package/shadowsocks-libev-obfs/description)

Package/shadowsocks-libev-obfs-server/description=$(Package/shadowsocks-libev-obfs/description)

Package/shadowsocks-libev-obfs-server-polarssl/description=$(Package/shadowsocks-libev-obfs/description)

define Package/shadowsocks-libev-obfs/conffiles
/etc/shadowsocks.json
endef

ifeq ($(BUILD_VARIANT),polarssl)
	CONFIGURE_ARGS += --with-crypto-library=polarssl
endif

TARGET_CFLAGS += \
	-fdata-sections \
	-ffunction-sections

TARGET_LDFLAGS += \
	-Wl,-gc-sections

MAKE_FLAGS += \
	CFLAGS="$(TARGET_CFLAGS)" \
	LDFLAGS="$(TARGET_LDFLAGS)"

define Package/shadowsocks-libev-obfs/install
	$(INSTALL_DIR) $(1)/etc/init.d $(1)/etc/config
	$(INSTALL_CONF) ./files/shadowsocks.json $(1)/etc
	$(INSTALL_BIN) ./files/shadowsocks.init $(1)/etc/init.d/shadowsocks-libev
	$(INSTALL_BIN) ./files/shadowsocks.config $(1)/etc/config/shadowsocks-libev
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/src/ss-{local,redir,tunnel} $(1)/usr/bin
endef

Package/shadowsocks-libev-obfs-polarssl/install=$(Package/shadowsocks-libev-obfs/install)

define Package/shadowsocks-libev-obfs-server/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/src/ss-server $(1)/usr/bin
endef

Package/shadowsocks-libev-obfs-server-polarssl/install=$(Package/shadowsocks-libev-obfs-server/install)

$(eval $(call BuildPackage,shadowsocks-libev-obfs))
$(eval $(call BuildPackage,shadowsocks-libev-obfs-polarssl))
$(eval $(call BuildPackage,shadowsocks-libev-obfs-server))
$(eval $(call BuildPackage,shadowsocks-libev-obfs-server-polarssl))
