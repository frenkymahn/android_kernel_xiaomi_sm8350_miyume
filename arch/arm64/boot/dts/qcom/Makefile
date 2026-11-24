
DTC_INCLUDE += $(srctree)/arch/arm64/boot/dts/qcom $(srctree)/arch/arm64/boot/dts/qcom/display $(srctree)/techpack/display/msm
ifneq ($(CONFIG_ARCH_QTI_VM), y)
ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_LAHAINA) += lahaina-rumi-overlay.dtbo \
	lahaina-mtp-overlay.dtbo \
	vili-sm8350-overlay.dtbo \
	lahaina-mtp-hsp-overlay.dtbo \
	lahaina-cdp-overlay.dtbo \
	lahaina-qrd-overlay.dtbo \
	lahaina-atp-overlay.dtbo \
	lahaina-hdk-overlay.dtbo \
	lahaina-hhg-overlay.dtbo \
	lahainap-hhg-hsp-pro-overlay.dtbo \
	lahaina-qrd-hsp-overlay.dtbo \
	lahaina-qrd-module-overlay.dtbo \
	lahainap-mtp-overlay.dtbo \
	lahainap-cdp-overlay.dtbo \
	lahainap-atp-overlay.dtbo \
	lahainap-qrd-overlay.dtbo \
	lahaina-cdp-v2.2-overlay.dtbo \
	lahaina-mtp-v2-overlay.dtbo \
	lahaina-mtp-v2.1-overlay.dtbo \
	lahaina-mtp-hsp-pro-overlay.dtbo \
	lahaina-cdp-hsp-pro-overlay.dtbo \
	lahaina-qrd-hsp-pro-overlay.dtbo

lahaina-rumi-overlay.dtbo-base := lahaina.dtb
lahaina-mtp-hsp-overlay.dtbo-base := lahaina.dtb
vili-sm8350-overlay.dtbo-base := lahaina.dtb
lahaina-mtp-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahaina-cdp-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahaina-atp-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahaina-hdk-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahaina-hhg-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahainap-hhg-hsp-pro-overlay.dtbo-base := lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahaina-qrd-hsp-overlay.dtbo-base := lahaina.dtb
lahaina-qrd-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahaina-qrd-module-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb lahaina-v2.1.dtb
lahainap-mtp-overlay.dtbo-base := lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahainap-cdp-overlay.dtbo-base := lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahainap-atp-overlay.dtbo-base := lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahainap-qrd-overlay.dtbo-base := lahainap.dtb lahainap-v2.dtb lahainap-v2.1.dtb
lahaina-cdp-v2.2-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
lahaina-mtp-v2-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
lahaina-mtp-v2.1-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
lahaina-mtp-hsp-pro-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
lahaina-cdp-hsp-pro-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
lahaina-qrd-hsp-pro-overlay.dtbo-base := lahaina.dtb lahaina-v2.dtb \
					lahaina-v2.1.dtb
else
dtb-$(CONFIG_ARCH_LAHAINA) += lahaina-rumi.dtb \
	lahaina-mtp-hsp.dtb \
	lahaina-mtp.dtb \
	lahaina-cdp.dtb \
	lahaina-atp.dtb \
	lahaina-hdk.dtb \
	lahaina-qrd-hsp.dtb \
	lahaina-qrd.dtb \
	lahaina-qrd-module.dtb \
	lahainap-mtp.dtb \
	lahainap-cdp.dtb \
	lahainap-atp.dtb \
	lahainap-qrd.dtb \
	lahaina-v2-mtp.dtb \
	lahaina-v2-cdp.dtb \
	lahaina-v2-atp.dtb \
	lahaina-v2-hdk.dtb \
	lahaina-v2-qrd.dtb \
	lahaina-v2-qrd-module.dtb \
	lahainap-v2-mtp.dtb \
	lahainap-v2-cdp.dtb \
	lahainap-v2-atp.dtb \
	lahainap-v2-qrd.dtb \
	lahaina-cdp-v2.2.dtb \
	lahaina-v2.1-mtp.dtb \
	lahaina-v2.1-cdp.dtb \
	lahaina-v2.1-atp.dtb \
	lahaina-v2.1-hdk.dtb \
	lahaina-v2.1-hhg.dtb \
	lahainap-v2.1-hhg-hsp-pro.dtb \
	lahaina-v2.1-qrd.dtb \
	lahaina-v2.1-qrd-module.dtb \
	lahainap-v2.1-mtp.dtb \
	lahainap-v2.1-cdp.dtb \
	lahainap-v2.1-atp.dtb \
	lahainap-v2.1-qrd.dtb \
	lahaina-mtp-v2.dtb \
	lahaina-mtp-v2.1.dtb \
	lahaina-v2.1-mtp-hsp-pro.dts \
	lahaina-v2.1-cdp-hsp-pro.dts \
	lahaina-v2.1-qrd-hsp-pro.dts
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)


else

endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)


else
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_SHIMA) +=    \
	renoir-sm7350-overlay.dtbo	\

else
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_YUPIK) +=    \
	yupikp-idp-overlay.dtbo \
	yupikp-atp-overlay.dtbo \
	yupikp-qrd-overlay.dtbo \
	yupikp-idps-digital-mics-overlay.dtbo \
	yupikp-idps-amoled-overlay.dtbo \
	yupikp-iot-idp-overlay.dtbo \
	yupikp-iot-qrd-overlay.dtbo \
	yupikp-iot-hsp-overlay.dtbo \
	yupikp-iot-idps-amoled-overlay.dtbo

yupikp-idp-overlay.dtbo-base := yupikp.dtb
yupikp-atp-overlay.dtbo-base := yupikp.dtb
yupikp-qrd-overlay.dtbo-base := yupikp.dtb
yupikp-idps-digital-mics-overlay.dtbo-base := yupikp.dtb
yupikp-idps-amoled-overlay.dtbo-base := yupikp.dtb
yupikp-iot-idp-overlay.dtbo-base := yupikp-iot.dtb
yupikp-iot-qrd-overlay.dtbo-base := yupikp-iot.dtb
yupikp-iot-hsp-overlay.dtbo-base := yupikp-iot.dtb
yupikp-iot-idps-amoled-overlay.dtbo-base := yupikp-iot.dtb
else
	yupikp-idp.dtb \
	yupikp-atp.dtb \
	yupikp-qrd.dtb \
	yupikp-idps-digital-mics.dtb \
	yupikp-idps-amoled.dtb \
	yupikp-iot-idp.dtb \
	yupikp-iot-qrd.dtb \
	yupikp-iot-hsp.dtb \
	yupikp-iot-idps-amoled.dtb
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_MONACO) +=    \


else
	monacop-idp-v1.dtb
endif

dtb-$(CONFIG_ARCH_SCUBA) += qrb2210-rb1.dtb

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
ifeq ($(CONFIG_AUTO_LXC_OVERLAY), y)
	dtbo-$(CONFIG_ARCH_SA8155) += \
		sa8155-v2-adp-air-lxc-overlay.dtbo \
		sa8155p-v2-adp-air-lxc-overlay.dtbo
else
	dtbo-$(CONFIG_ARCH_SA8155) += \
		sa8155-adp-star-overlay.dtbo \
		sa8155p-adp-star-overlay.dtbo \
		sa8155-v2-adp-air-overlay.dtbo \
		sa8155p-v2-adp-air-overlay.dtbo
endif

sa8155-adp-star-overlay.dtbo-base := sa8155.dtb sa8155-v2.dtb
sa8155p-adp-star-overlay.dtbo-base := sa8155p.dtb sa8155p-v2.dtb
sa8155-v2-adp-air-overlay.dtbo-base := sa8155.dtb sa8155-v2.dtb
sa8155p-v2-adp-air-overlay.dtbo-base := sa8155p.dtb sa8155p-v2.dtb
sa8155-v2-adp-air-lxc-overlay.dtbo-base := sa8155.dtb sa8155-v2.dtb
sa8155p-v2-adp-air-lxc-overlay.dtbo-base := sa8155p.dtb sa8155p-v2.dtb
else
dtb-$(CONFIG_ARCH_SA8155)       += sa8155-adp-star.dtb \
	sa8155p-adp-star.dtb \
	sa8155-v2-adp-star.dtb \
	sa8155p-v2-adp-star.dtb \
	sa8155-v2-adp-air.dtb \
	sa8155p-v2-adp-air.dtb
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
ifeq ($(CONFIG_AUTO_LXC_OVERLAY), y)
	dtbo-$(CONFIG_ARCH_SA6155) += \
		sa6155p-v2-adp-air-lxc-overlay.dtbo
else
	dtbo-$(CONFIG_ARCH_SA6155) += \
		sa6155-adp-star-overlay.dtbo \
		sa6155p-adp-star-overlay.dtbo \
		sa6155p-adp-star-lpass-overlay.dtbo \
		sa6155-adp-air-overlay.dtbo \
		sa6155p-adp-air-overlay.dtbo \
		sa6155p-v2-adp-star-overlay.dtbo \
		sa6155p-v2-adp-air-overlay.dtbo \
		sa6155p-v2-adp-air-lpass-overlay.dtbo
endif

sa6155-adp-star-overlay.dtbo-base := sa6155.dtb
sa6155p-adp-star-overlay.dtbo-base := sa6155p.dtb
sa6155p-adp-star-lpass-overlay.dtbo-base :=sa6155p.dtb
sa6155p-v2-adp-star-overlay.dtbo-base := sa6155p.dtb
sa6155-adp-air-overlay.dtbo-base := sa6155.dtb
sa6155p-adp-air-overlay.dtbo-base := sa6155p.dtb
sa6155p-v2-adp-air-overlay.dtbo-base := sa6155p.dtb
sa6155p-v2-adp-air-lpass-overlay.dtbo-base := sa6155p.dtb
sa6155p-v2-adp-air-lxc-overlay.dtbo-base := sa6155p.dtb
else
dtb-$(CONFIG_ARCH_SA6155)       += sa6155-adp-star.dtb \
	sa6155p-adp-star.dtb \
	sa6155p-adp-star-lpass.dtb \
	sa6155-adp-air.dtb \
	sa6155p-adp-air.dtb \
	sa6155p-v2-adp-star.dtb \
	sa6155p-v2-adp-air.dtb \
	sa6155p-v2-adp-air-lpass.dtb
endif

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
ifeq ($(CONFIG_AUTO_LXC_OVERLAY), y)
	dtbo-$(CONFIG_ARCH_SA8195) += \
		sa8195p-v2-adp-air-lxc-overlay.dtbo
else
	dtbo-$(CONFIG_ARCH_SA8195) += \
		sa8195p-adp-star-overlay.dtbo \
		sa8195p-v2-adp-air-overlay.dtbo
endif

sa8195p-adp-star-overlay.dtbo-base := sa8195p.dtb
sa8195p-v2-adp-air-overlay.dtbo-base := sa8195p.dtb
sa8195p-v2-adp-air-lxc-overlay.dtbo-base := sa8195p.dtb
else
dtb-$(CONFIG_ARCH_SA8195)	+= sa8195p-adp-star.dtb \
	sa8195p-v2-adp-air.dtb
endif
endif

ifeq ($(CONFIG_ARCH_LAHAINA), y)
ifeq ($(CONFIG_ARCH_QTI_VM), y)
dtb-$(CONFIG_ARCH_QTI_VM) += lahaina-vm-mtp.dtb \
	lahaina-vm-cdp.dtb \
	lahaina-vm-qrd.dtb \
	lahaina-vm-mtp-v2.dtb \
	lahaina-vm-mtp-v2.1.dtb
endif
endif



ifeq ($(CONFIG_ARCH_SHIMA), y)
ifeq ($(CONFIG_ARCH_QTI_VM), y)
endif
endif

dtb-$(CONFIG_ARCH_SDXNIGHTJAR) += sdxnightjar-mtp.dtb \
	sdxnightjar-cdp.dtb \
	sdxnightjar-qrd.dtb \
	sdxnightjar-dualwifi-mtp.dtb \
	sdxnightjar-512mb-mtp.dtb \
	sdxnightjar-dualwifi-512mb-mtp.dtb

ifeq ($(CONFIG_ARCH_YUPIK), y)
ifeq ($(CONFIG_ARCH_QTI_VM), y)
endif
endif

dtb-$(CONFIG_QTI_QUIN_GVM) += sa8155-vm-la.dtb \
	sa8155-vm-lv.dtb \
	sa8155-vm-la-mt.dtb \
	sa8155-vm-lv-mt.dtb \
	sa8195-vm-la.dtb \
	sa8195-vm-lv.dtb \
	sa8195-vm-la-mt.dtb \
	sa8195-vm-lv-mt.dtb \
	sa8195-vm-lv-lxc.dtb \
	sa6155p-vm-la.dtb \
	direwolf-vm-lv.dtb \
	direwolf-vm-la.dtb

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
	dtbo-$(CONFIG_ARCH_DIREWOLF) += direwolf-ivi-rumi-overlay.dtbo \
		direwolf-ivi-adp-star-overlay.dtbo \
		direwolf-adas-rumi-overlay.dtbo \
		direwolf-adas-adp-star-overlay.dtbo

direwolf-ivi-rumi-overlay.dtbo-base := direwolf-ivi.dtb
direwolf-ivi-adp-star-overlay.dtbo-base := direwolf-ivi.dtb
direwolf-adas-rumi-overlay.dtbo-base := direwolf-adas.dtb
direwolf-adas-adp-star-overlay.dtbo-base := direwolf-adas.dtb
else
dtb-$(CONFIG_ARCH_DIREWOLF) += direwolf-ivi-rumi.dtb \
	direwolf-ivi-adp-star.dtb \
	direwolf-adas-rumi.dtb \
	direwolf-adas-adp-star.dtb
endif

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb *.dtbo
