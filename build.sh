#!/bin/bash
set -e

DEVICE=${1:-vili}
DEFCONFIG="${DEVICE}_defconfig"
OUT_DIR="out"

echo "=========================================="
echo " Building -NEXTGEN Kernel for: $DEVICE"
echo " Config: $DEFCONFIG (HyperOS 3/3.3/4 & A14-17)"
echo "=========================================="

export ARCH=arm64
export SUBARCH=arm64
export CCACHE_DIR="$HOME/.ccache"

# Use Clang 18 if installed in $HOME/clang or system /usr/bin
if [ -d "$HOME/clang/bin" ]; then
    export PATH="$HOME/clang/bin:$PATH"
fi

make O="$OUT_DIR" ARCH=arm64 "$DEFCONFIG"

./scripts/config --file "$OUT_DIR/.config" \
  --set-str LOCALVERSION "-NEXTGEN" \
  -d LOCALVERSION_AUTO \
  -e KSU \
  -e KSU_SUSFS \
  -e MACH_XIAOMI_VILI \
  -d MACH_XIAOMI_VENUS \
  -d BQ_FG_1S \
  -e QTI_BATTERY_CHARGER \
  -e SND_SOC_CS35L41 \
  -e SND_SOC_CS35L41_I2C \
  -d SENSORS_QTI_AMOLED_ECM \
  -d QCOM_FSA4480_I2C

make O="$OUT_DIR" ARCH=arm64 olddefconfig

make -j$(nproc --all) O="$OUT_DIR" ARCH=arm64 Image dtbs \
  CC="ccache clang" \
  CLANG_TRIPLE=aarch64-linux-gnu- \
  CROSS_COMPILE=aarch64-linux-gnu- \
  CROSS_COMPILE_ARM32=arm-linux-gnueabi- \
  LLVM=1 \
  LLVM_IAS=1

echo "=========================================="
echo " Build Complete! Output: $OUT_DIR/arch/arm64/boot/Image"
echo "=========================================="
