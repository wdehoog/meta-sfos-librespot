DEFAULTTUNE ?= "armv7hl"

require conf/machine/include/arm/arch-armv7a.inc

TUNEVALID[armv7hl] = "Enable armv7hl specific processor optimizations"
#TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'armv7hl', ' -mcpu=armv7-a', '', d)}"

AVAILTUNES += "armv7hl"
ARMPKGARCH_tune-armv7hl = "armv7hl"
TUNE_FEATURES_tune-armv7hl = "${TUNE_FEATURES_tune-armv7a} armv7hl neon callconvention-hard"
PACKAGE_EXTRA_ARCHS_tune-armv7hl = "${PACKAGE_EXTRA_ARCHS_tune-armv7a} armv7hl"
TUNE_PKGARCH = "armv7hl"

