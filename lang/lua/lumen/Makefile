#
# Copyright (C) 2009 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=lumen
PKG_REV=caeddec
PKG_VERSION:=1.0r$(PKG_REV)
PKG_RELEASE:=1

PKG_SOURCE_PROTO:=git
PKG_SOURCE_VERSION:=$(PKG_REV)
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION)-git-$(PKG_SOURCE_VERSION).tar.bz2
PKG_SOURCE_URL:=https://github.com/xopxe/Lumen.git
PKG_SOURCE_SUBDIR:=$(PKG_NAME)-$(PKG_VERSION)
PKG_BUILD_PARALLEL:=0

include $(INCLUDE_DIR)/package.mk

define Package/lumen
  SUBMENU:=Lua
  SECTION:=lang
  CATEGORY:=Languages
  TITLE:=Lua Multitasking Environment
  URL:=https://github.com/xopxe/Lumen
  DEPENDS:=+lua +luasocket +luci-lib-nixio
endef

define Package/lumen/description
  Lua Multitasking Environment
endef

define Build/Configure
endef

define Build/Compile
endef


define Package/lumen/install
	$(INSTALL_DIR) $(1)/usr/lib/lua/lumen
	$(CP) -r $(PKG_BUILD_DIR)/*.lua $(1)/usr/lib/lua/lumen
	$(CP) -r $(PKG_BUILD_DIR)/lib $(1)/usr/lib/lua/lumen
	$(CP) -r $(PKG_BUILD_DIR)/tasks $(1)/usr/lib/lua/lumen
	$(CP) -r $(PKG_BUILD_DIR)/tests $(1)/usr/lib/lua/lumen
	
endef

$(eval $(call BuildPackage,lumen))
