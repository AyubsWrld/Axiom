
#ifndef DETAIL_AXM_HEADER_PREPROC_ENDIAN
#	define DETAIL_AXM_HEADER_PREPROC_ENDIAN
#
#	define AXM_ENDIAN_BIG 0
#	define AXM_ENDIAN_LITTLE 0
#	define AXM_ENDIAN_BIG_WORD 0 // Honeywell 316
#	define AXM_ENDIAN_LITTLE_WORD 0 // PDP-11
#
#	include "arch.hpp"
#	include "../preproc/platform.hpp"
#
#	if __has_include(<endian.h>)
#		include <endian.h>
#	endif
#
#	if __has_include(<gulliver.h>)
#		include <gulliver.h>
#	endif
#
#	if __has_include(<libkern/OSByteOrder.h>)
#		include <libkern/OSByteOrder.h>
#	endif
#
#	if __has_include(<machine/endian.h>)
#		include <machine/endian.h>
#	endif
#
#	if __has_include(<sys/endian.h>)
#		include <sys/endian.h>
#	endif
#
#	if __has_include(<sys/isa_defs.h>)
#		include <sys/isa_defs.h>
#	endif
#
#	if __has_include(<sys/param.h>)
#		include <sys/param.h>
#	endif
#
#	if __has_include(<sys/types.h>)
#		include <sys/types.h>
#	endif
#
#	if __has_include(<sys/_endian.h>)
#		include <sys/_endian.h>
#	endif
#
#	if __has_include(<winsock2.h>)
#		include <winsock2.h>
#	endif
#
#	if (defined(BYTE_ORDER) && (BYTE_ORDER == BIG_ENDIAN)) \
		|| defined(_BIG_ENDIAN) \
		|| defined(_BIG_ENDIAN__) \
		|| defined(_MIPSEB) \
		|| defined(__AARCH64EB__) \
		|| defined(__ARC_LITTLE_ENDIAN__) \
		|| defined(__ARMEB__) \
		|| defined(__BIGENDIAN__) \
		|| defined(__BIG_ENDIAN__) \
		|| (defined(__BYTE_ORDER) && (__BYTE_ORDER == __BIG_ENDIAN)) \
		|| defined(__BYTE_ORDER_BIG_ENDIAN__) \
		|| (defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)) \
		|| (defined(__FLOAT_WORD_ORDER__) && (__FLOAT_WORD_ORDER__ == __ORDER_BIG_ENDIAN__)) \
		|| defined(__MICROBLAZEEB__) \
		|| defined(__MIPSEB) \
		|| defined(__MIPSEB__) \
		|| defined(__MOXIE_BIG_ENDIAN__) \
		|| defined(__RX_BIG_ENDIAN__) \
		|| defined(__THUMBEB__) \
		|| defined(__big_endian__) \
		|| defined(__nios2_big_endian__) \
		|| AXM_ARCH_AM29000 \
		|| AXM_ARCH_D10V \
		|| AXM_ARCH_D30V \
		|| AXM_ARCH_FUJITSU_FR_V \
		|| AXM_ARCH_FR30 \
		|| AXM_ARCH_IBM_SYSTEM_370 \
		|| AXM_ARCH_IBM_SYSTEM_390 \
		|| AXM_ARCH_IBM_Z \
		|| AXM_ARCH_IP2000 \
		|| AXM_ARCH_IQ2000 \
		|| AXM_ARCH_LATTICEMICO32 \
		|| AXM_ARCH_M32R \
		|| AXM_ARCH_MMIX \
		|| AXM_ARCH_MOTOROLA_68000 \
		|| AXM_ARCH_MOTOROLA_88000 \
		|| AXM_ARCH_MOTOROLA_HC11 \
		|| AXM_ARCH_MOTOROLA_M_CORE \
		|| AXM_ARCH_OPENRISC \
		|| AXM_ARCH_PA_RISC \
		|| (AXM_ARCH_POWERPC && !defined(__PPC64LE__) && !defined(__ppc64le__)) \
		|| AXM_ARCH_SPARC \
		|| AXM_PLATFORM_AIX \
		|| AXM_PLATFORM_IRIX \
		|| AXM_PLATFORM_SOLARIS
#		undef AXM_ENDIAN_BIG
#		define AXM_ENDIAN_BIG 1
#	endif
#
#	if (defined(BYTE_ORDER) && (BYTE_ORDER == LITTLE_ENDIAN)) \
		|| defined(_LITTLE_ENDIAN) \
		|| defined(_LITTLE_ENDIAN__) \
		|| defined(_MIPSEL) \
		|| defined(__AARCH64EL__) \
		|| defined(__ARC_LITTLE_ENDIAN__) \
		|| defined(__ARMEL__) \
		|| (defined(__BYTE_ORDER) && (__BYTE_ORDER == __LITTLE_ENDIAN)) \
		|| defined(__BYTE_ORDER_LITTLE_ENDIAN__) \
		|| (defined(__BYTE_ORDER__) && (__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__)) \
		|| (defined(__FLOAT_WORD_ORDER__) && (__FLOAT_WORD_ORDER__ == __ORDER_LITTLE_ENDIAN__)) \
		|| defined(__LITTLEENDIAN__) \
		|| defined(__LITTLE_ENDIAN__) \
		|| defined(__MICROBLAZEEL__) \
		|| defined(__MIPSEL) \
		|| defined(__MIPSEL__) \
		|| defined(__MOXIE_LITTLE_ENDIAN__) \
		|| defined(__PPC64LE__) \
		|| defined(__RX_LITTLE_ENDIAN__) \
		|| defined(__THUMBEL__) \
		|| defined(__little_endian__) \
		|| defined(__nios2_little_endian__) \
		|| defined(__ppc64le__) \
		|| AXM_ARCH_ALPHA \
		|| AXM_ARCH_ATMEL_AVR \
		|| AXM_ARCH_BLACKFIN \
		|| AXM_ARCH_COMPACTRISC \
		|| AXM_ARCH_ELBRUS_2000 \
		|| AXM_ARCH_FT32 \
		|| AXM_ARCH_H8300 \
		|| AXM_ARCH_I960 \
		|| AXM_ARCH_LOONGARCH \
		|| AXM_ARCH_M32C \
		|| AXM_ARCH_MN10200 \
		|| AXM_ARCH_MN10300 \
		|| AXM_ARCH_MSP430 \
		|| AXM_ARCH_RISC_V \
		|| AXM_ARCH_RL78 \
		|| AXM_ARCH_TIC_80 \
		|| AXM_ARCH_V850 \
		|| AXM_ARCH_WASM \
		|| AXM_ARCH_WDC_65C02 \
		|| AXM_ARCH_X86_32 \
		|| AXM_ARCH_X86_64 \
		|| AXM_ARCH_XSTORMY16 \
		|| AXM_ARCH_XTENSA \
		|| AXM_PLATFORM_CYGWIN \
		|| AXM_PLATFORM_WINDOWS
#		undef AXM_ENDIAN_LITTLE
#		define AXM_ENDIAN_LITTLE 1
#	endif
#
#	if defined(__BYTE_ORDER) && (__BYTE_ORDER == __PDP_ENDIAN)
#		undef AXM_ENDIAN_LITTLE_WORD
#		define AXM_ENDIAN_LITTLE_WORD 1
#	endif
#endif

