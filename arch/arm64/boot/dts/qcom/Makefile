# SPDX-License-Identifier: GPL-2.0
dtb-$(CONFIG_ARCH_LAHAINA) += \
lahaina.dtb \
lahaina-v2.dtb \
lahaina-v2.1.dtb \
lahainap.dtb \
lahainap-v2.dtb \
lahainap-v2.1.dtb

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_LAHAINA) += \
lahaina-mtp-hsp-overlay.dtbo \
lahaina-qrd-hsp-overlay.dtbo \
lahaina-rumi-overlay.dtbo \
vili-sm8350-overlay.dtbo

vili-sm8350-overlay.dtbo-base := lahaina.dtb
lahaina-mtp-hsp-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahaina-qrd-hsp-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahaina-rumi-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
endif

always-y:= $(dtb-y) $(dtbo-y)
subdir-y:= $(dts-dirs)
clean-files:= *.dtb *.dtbo
