#
# Copyright (C) 2006-2014 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=vsftpd-alt
PKG_VERSION:=3.0.3
PKG_RELEASE:=1

PKG_SOURCE:=vsftpd-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=https://security.appspot.com/downloads/
PKG_MD5SUM:=da119d084bd3f98664636ea05b5bb398
PKG_LICENSE:=GPLv2

BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
PKG_BUILD_DIR:=$(BUILD_DIR)/vsftpd-$(PKG_VERSION)

include $(INCLUDE_DIR)/package.mk

define Package/vsftpd-alt/Default
  SUBMENU:=File Transfer
  SECTION:=net
  CATEGORY:=Network
  TITLE:=A fast and secure FTP server (with aio support)
  URL:=http://vsftpd.beasts.org/
  MAINTAINER:=Cezary Jackiewicz <cezary@eko.one.pl>
  DEPENDS=+PACKAGE_libpam:libpam +libopenssl +libuci
endef

define Package/vsftpd-alt/conffiles
/etc/vsftpd.conf
endef

EXTRA_LDFLAGS:= -lcrypt -lcrypto -lssl

define Package/vsftpd-alt/config
config VSFTPD_USE_UCI_SCRIPTS
	bool "Uses UCI scripts"
	depends on PACKAGE_vsftpd-alt
	default n
#config VSFTPD_ENABLE_AIO
#	bool "Enable async I/O (Currently Buggy)"
#	depends on PACKAGE_vsftpd-alt
#	default n
endef

ifneq ($(CONFIG_USE_MUSL),)
  NLSSTRING:=-lcrypt
else
  NLSSTRING:=-lcrypt -lnsl
endif

ifdef CONFIG_PACKAGE_libpam
  EXTRA_LDFLAGS += -lpam
endif

#ifeq ($(CONFIG_VSFTPD_ENABLE_AIO),y)
#define Package/vsftpd-alt
#$(call Package/vsftpd-alt/Default)
#  DEPENDS=+PACKAGE_libpam:libpam +libopenssl +libuci +libaio
#endef
#  EXTRA_LDFLAGS += -laio
#  EXTRA_CFLAGS += -DVSFTPD_ASYNC_IO
#else
define Package/vsftpd-alt
$(call Package/vsftpd-alt/Default)
endef
#endif


define Build/Compile
	$(SED) 's/#undef VSF_BUILD_SSL/#define VSF_BUILD_SSL/' $(PKG_BUILD_DIR)/builddefs.h
	$(SED) 's/-lcrypt -lnsl/-lcrypt -lnsl -lssl -lcrypto/' $(PKG_BUILD_DIR)/Makefile
	$(SED) 's/-lcrypt -lnsl/$(NLSSTRING)/' $(PKG_BUILD_DIR)/Makefile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS)" \
		LDFLAGS="$(TARGET_LDFLAGS) $(EXTRA_LDFLAGS)" \
		vsftpd
endef

ifeq ($(CONFIG_VSFTPD_USE_UCI_SCRIPTS),y)
define Package/vsftpd-alt/install
$(call Package/vsftpd-alt/install/default, $(1))
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_DIR) $(1)/etc/pam.d
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/vsftpd $(1)/usr/sbin
	$(INSTALL_BIN) ./files/vsftpd-uci.init $(1)/etc/init.d/vsftpd
	$(INSTALL_BIN) ./files/vsftpd.uci $(1)/etc/config/vsftpd
	$(INSTALL_BIN) ./files/vsftpd_wrapper $(1)/usr/sbin
	$(INSTALL_BIN) ./files/vsftpd_prepare $(1)/usr/sbin
endef
else
define Package/vsftpd-alt/install
$(call Package/vsftpd-alt/install/default, $(1))
	$(INSTALL_DIR) $(1)/etc/init.d
	$(INSTALL_DIR) $(1)/usr/sbin
	$(INSTALL_CONF) ./files/vsftpd.conf $(1)/etc/vsftpd.conf
	$(INSTALL_BIN) ./files/vsftpd.init $(1)/etc/init.d/vsftpd
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/vsftpd $(1)/usr/sbin	
endef
endif

$(eval $(call BuildPackage,vsftpd-alt))
