EXTRA_CFLAGS += -include $(src)/fs_conf.h
EXTRA_CFLAGS += -DNDEBUG -g0
EXTRA_CFLAGS += -DUFSD_DEVICE=ufsd
EXTRA_CFLAGS += -Wno-unused-local-typedefs

MODULE_NAME := ufsd
MODULE_OBJECTS := ufsdvfs.o vfsdebug.o fool.o libufsd_$(ARCH).o

## obj-$(CONFIG_UFSD_FS) += $(MODULE_NAME).o

$(MODULE_NAME)-y := $(MODULE_OBJECTS)

obj-m := $(MODULE_NAME).o
