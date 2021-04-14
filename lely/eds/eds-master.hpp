#include <lely/co/sdev.h>

#define CO_SDEV_STRING(s)	s

const struct co_sdev MyMaster = {
	.id = 0x01,
	.name = NULL,
	.vendor_name = NULL,
	.vendor_id = 0x00000000,
	.product_name = NULL,
	.product_code = 0x00000000,
	.revision = 0x00000000,
	.order_code = NULL,
	.baud = 0
		| CO_BAUD_1000
		| CO_BAUD_800
		| CO_BAUD_500
		| CO_BAUD_250
		| CO_BAUD_125
		| CO_BAUD_50
		| CO_BAUD_20
		| CO_BAUD_10,
	.rate = 1000,
	.lss = 1,
	.dummy = 0x0f7d00fe,
	.nobj = 37,
	.objs = (const struct co_sobj[]){{
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Device type"),
#endif
		.idx = 0x1000,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Error register"),
#endif
		.idx = 0x1001,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error register"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Pre-defined error field"),
#endif
		.idx = 0x1003,
		.code = CO_OBJECT_ARRAY,
		.nsub = 255,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0xfe },
#endif
			.val = { .u8 = 0xfe },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field128"),
#endif
			.subidx = 0x80,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field129"),
#endif
			.subidx = 0x81,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field130"),
#endif
			.subidx = 0x82,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field131"),
#endif
			.subidx = 0x83,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field132"),
#endif
			.subidx = 0x84,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field133"),
#endif
			.subidx = 0x85,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field134"),
#endif
			.subidx = 0x86,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field135"),
#endif
			.subidx = 0x87,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field136"),
#endif
			.subidx = 0x88,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field137"),
#endif
			.subidx = 0x89,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field138"),
#endif
			.subidx = 0x8a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field139"),
#endif
			.subidx = 0x8b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field140"),
#endif
			.subidx = 0x8c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field141"),
#endif
			.subidx = 0x8d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field142"),
#endif
			.subidx = 0x8e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field143"),
#endif
			.subidx = 0x8f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field144"),
#endif
			.subidx = 0x90,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field145"),
#endif
			.subidx = 0x91,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field146"),
#endif
			.subidx = 0x92,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field147"),
#endif
			.subidx = 0x93,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field148"),
#endif
			.subidx = 0x94,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field149"),
#endif
			.subidx = 0x95,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field150"),
#endif
			.subidx = 0x96,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field151"),
#endif
			.subidx = 0x97,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field152"),
#endif
			.subidx = 0x98,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field153"),
#endif
			.subidx = 0x99,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field154"),
#endif
			.subidx = 0x9a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field155"),
#endif
			.subidx = 0x9b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field156"),
#endif
			.subidx = 0x9c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field157"),
#endif
			.subidx = 0x9d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field158"),
#endif
			.subidx = 0x9e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field159"),
#endif
			.subidx = 0x9f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field160"),
#endif
			.subidx = 0xa0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field161"),
#endif
			.subidx = 0xa1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field162"),
#endif
			.subidx = 0xa2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field163"),
#endif
			.subidx = 0xa3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field164"),
#endif
			.subidx = 0xa4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field165"),
#endif
			.subidx = 0xa5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field166"),
#endif
			.subidx = 0xa6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field167"),
#endif
			.subidx = 0xa7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field168"),
#endif
			.subidx = 0xa8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field169"),
#endif
			.subidx = 0xa9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field170"),
#endif
			.subidx = 0xaa,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field171"),
#endif
			.subidx = 0xab,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field172"),
#endif
			.subidx = 0xac,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field173"),
#endif
			.subidx = 0xad,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field174"),
#endif
			.subidx = 0xae,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field175"),
#endif
			.subidx = 0xaf,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field176"),
#endif
			.subidx = 0xb0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field177"),
#endif
			.subidx = 0xb1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field178"),
#endif
			.subidx = 0xb2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field179"),
#endif
			.subidx = 0xb3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field180"),
#endif
			.subidx = 0xb4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field181"),
#endif
			.subidx = 0xb5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field182"),
#endif
			.subidx = 0xb6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field183"),
#endif
			.subidx = 0xb7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field184"),
#endif
			.subidx = 0xb8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field185"),
#endif
			.subidx = 0xb9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field186"),
#endif
			.subidx = 0xba,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field187"),
#endif
			.subidx = 0xbb,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field188"),
#endif
			.subidx = 0xbc,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field189"),
#endif
			.subidx = 0xbd,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field190"),
#endif
			.subidx = 0xbe,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field191"),
#endif
			.subidx = 0xbf,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field192"),
#endif
			.subidx = 0xc0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field193"),
#endif
			.subidx = 0xc1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field194"),
#endif
			.subidx = 0xc2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field195"),
#endif
			.subidx = 0xc3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field196"),
#endif
			.subidx = 0xc4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field197"),
#endif
			.subidx = 0xc5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field198"),
#endif
			.subidx = 0xc6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field199"),
#endif
			.subidx = 0xc7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field200"),
#endif
			.subidx = 0xc8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field201"),
#endif
			.subidx = 0xc9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field202"),
#endif
			.subidx = 0xca,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field203"),
#endif
			.subidx = 0xcb,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field204"),
#endif
			.subidx = 0xcc,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field205"),
#endif
			.subidx = 0xcd,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field206"),
#endif
			.subidx = 0xce,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field207"),
#endif
			.subidx = 0xcf,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field208"),
#endif
			.subidx = 0xd0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field209"),
#endif
			.subidx = 0xd1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field210"),
#endif
			.subidx = 0xd2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field211"),
#endif
			.subidx = 0xd3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field212"),
#endif
			.subidx = 0xd4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field213"),
#endif
			.subidx = 0xd5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field214"),
#endif
			.subidx = 0xd6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field215"),
#endif
			.subidx = 0xd7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field216"),
#endif
			.subidx = 0xd8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field217"),
#endif
			.subidx = 0xd9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field218"),
#endif
			.subidx = 0xda,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field219"),
#endif
			.subidx = 0xdb,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field220"),
#endif
			.subidx = 0xdc,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field221"),
#endif
			.subidx = 0xdd,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field222"),
#endif
			.subidx = 0xde,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field223"),
#endif
			.subidx = 0xdf,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field224"),
#endif
			.subidx = 0xe0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field225"),
#endif
			.subidx = 0xe1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field226"),
#endif
			.subidx = 0xe2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field227"),
#endif
			.subidx = 0xe3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field228"),
#endif
			.subidx = 0xe4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field229"),
#endif
			.subidx = 0xe5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field230"),
#endif
			.subidx = 0xe6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field231"),
#endif
			.subidx = 0xe7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field232"),
#endif
			.subidx = 0xe8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field233"),
#endif
			.subidx = 0xe9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field234"),
#endif
			.subidx = 0xea,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field235"),
#endif
			.subidx = 0xeb,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field236"),
#endif
			.subidx = 0xec,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field237"),
#endif
			.subidx = 0xed,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field238"),
#endif
			.subidx = 0xee,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field239"),
#endif
			.subidx = 0xef,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field240"),
#endif
			.subidx = 0xf0,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field241"),
#endif
			.subidx = 0xf1,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field242"),
#endif
			.subidx = 0xf2,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field243"),
#endif
			.subidx = 0xf3,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field244"),
#endif
			.subidx = 0xf4,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field245"),
#endif
			.subidx = 0xf5,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field246"),
#endif
			.subidx = 0xf6,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field247"),
#endif
			.subidx = 0xf7,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field248"),
#endif
			.subidx = 0xf8,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field249"),
#endif
			.subidx = 0xf9,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field250"),
#endif
			.subidx = 0xfa,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field251"),
#endif
			.subidx = 0xfb,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field252"),
#endif
			.subidx = 0xfc,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field253"),
#endif
			.subidx = 0xfd,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Pre-defined error field254"),
#endif
			.subidx = 0xfe,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("COB-ID SYNC message"),
#endif
		.idx = 0x1005,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("COB-ID SYNC message"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x40000080lu },
#endif
			.val = { .u32 = 0x40000080lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Communication cycle period"),
#endif
		.idx = 0x1006,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Communication cycle period"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x000f4240lu },
#endif
			.val = { .u32 = 0x000f4240lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Synchronous window length"),
#endif
		.idx = 0x1007,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Synchronous window length"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("COB-ID EMCY"),
#endif
		.idx = 0x1014,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("COB-ID EMCY"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000081lu },
#endif
			.val = { .u32 = 0x00000081lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
				| CO_OBJ_FLAGS_DEF_NODEID
				| CO_OBJ_FLAGS_VAL_NODEID
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Inhibit time EMCY"),
#endif
		.idx = 0x1015,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Inhibit time EMCY"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Consumer heartbeat time"),
#endif
		.idx = 0x1016,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Consumer heartbeat time127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Producer heartbeat time"),
#endif
		.idx = 0x1017,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Producer heartbeat time"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Identity Object"),
#endif
		.idx = 0x1018,
		.code = CO_OBJECT_RECORD,
		.nsub = 5,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x04 },
#endif
			.val = { .u8 = 0x04 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor-ID"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision number"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Synchronous counter overflow value"),
#endif
		.idx = 0x1019,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Synchronous counter overflow value"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Emergency consumer object"),
#endif
		.idx = 0x1028,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x00000082lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Emergency consumer object127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x80000000lu },
#endif
			.val = { .u32 = 0x80000000lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Error behavior object"),
#endif
		.idx = 0x1029,
		.code = CO_OBJECT_ARRAY,
		.nsub = 255,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0xfe },
#endif
			.val = { .u8 = 0xfe },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object128"),
#endif
			.subidx = 0x80,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object129"),
#endif
			.subidx = 0x81,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object130"),
#endif
			.subidx = 0x82,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object131"),
#endif
			.subidx = 0x83,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object132"),
#endif
			.subidx = 0x84,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object133"),
#endif
			.subidx = 0x85,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object134"),
#endif
			.subidx = 0x86,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object135"),
#endif
			.subidx = 0x87,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object136"),
#endif
			.subidx = 0x88,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object137"),
#endif
			.subidx = 0x89,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object138"),
#endif
			.subidx = 0x8a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object139"),
#endif
			.subidx = 0x8b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object140"),
#endif
			.subidx = 0x8c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object141"),
#endif
			.subidx = 0x8d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object142"),
#endif
			.subidx = 0x8e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object143"),
#endif
			.subidx = 0x8f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object144"),
#endif
			.subidx = 0x90,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object145"),
#endif
			.subidx = 0x91,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object146"),
#endif
			.subidx = 0x92,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object147"),
#endif
			.subidx = 0x93,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object148"),
#endif
			.subidx = 0x94,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object149"),
#endif
			.subidx = 0x95,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object150"),
#endif
			.subidx = 0x96,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object151"),
#endif
			.subidx = 0x97,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object152"),
#endif
			.subidx = 0x98,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object153"),
#endif
			.subidx = 0x99,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object154"),
#endif
			.subidx = 0x9a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object155"),
#endif
			.subidx = 0x9b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object156"),
#endif
			.subidx = 0x9c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object157"),
#endif
			.subidx = 0x9d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object158"),
#endif
			.subidx = 0x9e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object159"),
#endif
			.subidx = 0x9f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object160"),
#endif
			.subidx = 0xa0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object161"),
#endif
			.subidx = 0xa1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object162"),
#endif
			.subidx = 0xa2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object163"),
#endif
			.subidx = 0xa3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object164"),
#endif
			.subidx = 0xa4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object165"),
#endif
			.subidx = 0xa5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object166"),
#endif
			.subidx = 0xa6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object167"),
#endif
			.subidx = 0xa7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object168"),
#endif
			.subidx = 0xa8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object169"),
#endif
			.subidx = 0xa9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object170"),
#endif
			.subidx = 0xaa,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object171"),
#endif
			.subidx = 0xab,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object172"),
#endif
			.subidx = 0xac,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object173"),
#endif
			.subidx = 0xad,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object174"),
#endif
			.subidx = 0xae,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object175"),
#endif
			.subidx = 0xaf,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object176"),
#endif
			.subidx = 0xb0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object177"),
#endif
			.subidx = 0xb1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object178"),
#endif
			.subidx = 0xb2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object179"),
#endif
			.subidx = 0xb3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object180"),
#endif
			.subidx = 0xb4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object181"),
#endif
			.subidx = 0xb5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object182"),
#endif
			.subidx = 0xb6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object183"),
#endif
			.subidx = 0xb7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object184"),
#endif
			.subidx = 0xb8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object185"),
#endif
			.subidx = 0xb9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object186"),
#endif
			.subidx = 0xba,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object187"),
#endif
			.subidx = 0xbb,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object188"),
#endif
			.subidx = 0xbc,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object189"),
#endif
			.subidx = 0xbd,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object190"),
#endif
			.subidx = 0xbe,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object191"),
#endif
			.subidx = 0xbf,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object192"),
#endif
			.subidx = 0xc0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object193"),
#endif
			.subidx = 0xc1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object194"),
#endif
			.subidx = 0xc2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object195"),
#endif
			.subidx = 0xc3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object196"),
#endif
			.subidx = 0xc4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object197"),
#endif
			.subidx = 0xc5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object198"),
#endif
			.subidx = 0xc6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object199"),
#endif
			.subidx = 0xc7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object200"),
#endif
			.subidx = 0xc8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object201"),
#endif
			.subidx = 0xc9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object202"),
#endif
			.subidx = 0xca,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object203"),
#endif
			.subidx = 0xcb,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object204"),
#endif
			.subidx = 0xcc,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object205"),
#endif
			.subidx = 0xcd,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object206"),
#endif
			.subidx = 0xce,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object207"),
#endif
			.subidx = 0xcf,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object208"),
#endif
			.subidx = 0xd0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object209"),
#endif
			.subidx = 0xd1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object210"),
#endif
			.subidx = 0xd2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object211"),
#endif
			.subidx = 0xd3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object212"),
#endif
			.subidx = 0xd4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object213"),
#endif
			.subidx = 0xd5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object214"),
#endif
			.subidx = 0xd6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object215"),
#endif
			.subidx = 0xd7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object216"),
#endif
			.subidx = 0xd8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object217"),
#endif
			.subidx = 0xd9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object218"),
#endif
			.subidx = 0xda,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object219"),
#endif
			.subidx = 0xdb,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object220"),
#endif
			.subidx = 0xdc,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object221"),
#endif
			.subidx = 0xdd,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object222"),
#endif
			.subidx = 0xde,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object223"),
#endif
			.subidx = 0xdf,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object224"),
#endif
			.subidx = 0xe0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object225"),
#endif
			.subidx = 0xe1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object226"),
#endif
			.subidx = 0xe2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object227"),
#endif
			.subidx = 0xe3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object228"),
#endif
			.subidx = 0xe4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object229"),
#endif
			.subidx = 0xe5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object230"),
#endif
			.subidx = 0xe6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object231"),
#endif
			.subidx = 0xe7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object232"),
#endif
			.subidx = 0xe8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object233"),
#endif
			.subidx = 0xe9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object234"),
#endif
			.subidx = 0xea,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object235"),
#endif
			.subidx = 0xeb,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object236"),
#endif
			.subidx = 0xec,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object237"),
#endif
			.subidx = 0xed,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object238"),
#endif
			.subidx = 0xee,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object239"),
#endif
			.subidx = 0xef,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object240"),
#endif
			.subidx = 0xf0,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object241"),
#endif
			.subidx = 0xf1,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object242"),
#endif
			.subidx = 0xf2,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object243"),
#endif
			.subidx = 0xf3,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object244"),
#endif
			.subidx = 0xf4,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object245"),
#endif
			.subidx = 0xf5,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object246"),
#endif
			.subidx = 0xf6,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object247"),
#endif
			.subidx = 0xf7,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object248"),
#endif
			.subidx = 0xf8,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object249"),
#endif
			.subidx = 0xf9,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object250"),
#endif
			.subidx = 0xfa,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object251"),
#endif
			.subidx = 0xfb,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object252"),
#endif
			.subidx = 0xfc,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object253"),
#endif
			.subidx = 0xfd,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Error behavior object254"),
#endif
			.subidx = 0xfe,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("NMT inhibit time"),
#endif
		.idx = 0x102a,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT inhibit time"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("RPDO communication parameter"),
#endif
		.idx = 0x1400,
		.code = CO_OBJECT_RECORD,
		.nsub = 6,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x05 },
#endif
			.val = { .u8 = 0x05 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("COB-ID used by RPDO"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000182lu },
#endif
			.val = { .u32 = 0x00000182lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("transmission type"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("inhibit time"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("compatibility entry"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("event-timer"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("RPDO mapping parameter"),
#endif
		.idx = 0x1600,
		.code = CO_OBJECT_RECORD,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("RPDO mapping parameter1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x20000120lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("TPDO communication parameter"),
#endif
		.idx = 0x1800,
		.code = CO_OBJECT_RECORD,
		.nsub = 7,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x06 },
#endif
			.val = { .u8 = 0x06 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("COB-ID used by TPDO"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000202lu },
#endif
			.val = { .u32 = 0x00000202lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("transmission type"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("inhibit time"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("reserved"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("event timer"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u16 = CO_UNSIGNED16_MIN },
			.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u16 = CO_UNSIGNED16_MIN },
#endif
			.val = { .u16 = CO_UNSIGNED16_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("SYNC start value"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("TPDO mapping parameter"),
#endif
		.idx = 0x1a00,
		.code = CO_OBJECT_RECORD,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("TPDO mapping parameter1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x22000120lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Configuration request"),
#endif
		.idx = 0x1f25,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Configuration request127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_WO,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Expected software identification"),
#endif
		.idx = 0x1f55,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Expected software identification127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("NMT startup"),
#endif
		.idx = 0x1f80,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT startup"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000001lu },
#endif
			.val = { .u32 = 0x00000001lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("NMT slave assignment"),
#endif
		.idx = 0x1f81,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x00000005lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NMT slave assignment127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Request NMT"),
#endif
		.idx = 0x1f82,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Request NMT127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Device type identification"),
#endif
		.idx = 0x1f84,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Device type identification127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Vendor identification"),
#endif
		.idx = 0x1f85,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x00000360lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Vendor identification127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Product code"),
#endif
		.idx = 0x1f86,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Product code127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Revision_number"),
#endif
		.idx = 0x1f87,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Revision_number127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Serial number"),
#endif
		.idx = 0x1f88,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Serial number127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Boot time"),
#endif
		.idx = 0x1f89,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Boot time"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Restore configuration"),
#endif
		.idx = 0x1f8a,
		.code = CO_OBJECT_ARRAY,
		.nsub = 128,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x7f },
#endif
			.val = { .u8 = 0x7f },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration2"),
#endif
			.subidx = 0x02,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration3"),
#endif
			.subidx = 0x03,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration4"),
#endif
			.subidx = 0x04,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration5"),
#endif
			.subidx = 0x05,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration6"),
#endif
			.subidx = 0x06,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration7"),
#endif
			.subidx = 0x07,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration8"),
#endif
			.subidx = 0x08,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration9"),
#endif
			.subidx = 0x09,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration10"),
#endif
			.subidx = 0x0a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration11"),
#endif
			.subidx = 0x0b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration12"),
#endif
			.subidx = 0x0c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration13"),
#endif
			.subidx = 0x0d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration14"),
#endif
			.subidx = 0x0e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration15"),
#endif
			.subidx = 0x0f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration16"),
#endif
			.subidx = 0x10,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration17"),
#endif
			.subidx = 0x11,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration18"),
#endif
			.subidx = 0x12,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration19"),
#endif
			.subidx = 0x13,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration20"),
#endif
			.subidx = 0x14,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration21"),
#endif
			.subidx = 0x15,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration22"),
#endif
			.subidx = 0x16,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration23"),
#endif
			.subidx = 0x17,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration24"),
#endif
			.subidx = 0x18,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration25"),
#endif
			.subidx = 0x19,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration26"),
#endif
			.subidx = 0x1a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration27"),
#endif
			.subidx = 0x1b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration28"),
#endif
			.subidx = 0x1c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration29"),
#endif
			.subidx = 0x1d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration30"),
#endif
			.subidx = 0x1e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration31"),
#endif
			.subidx = 0x1f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration32"),
#endif
			.subidx = 0x20,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration33"),
#endif
			.subidx = 0x21,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration34"),
#endif
			.subidx = 0x22,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration35"),
#endif
			.subidx = 0x23,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration36"),
#endif
			.subidx = 0x24,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration37"),
#endif
			.subidx = 0x25,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration38"),
#endif
			.subidx = 0x26,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration39"),
#endif
			.subidx = 0x27,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration40"),
#endif
			.subidx = 0x28,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration41"),
#endif
			.subidx = 0x29,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration42"),
#endif
			.subidx = 0x2a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration43"),
#endif
			.subidx = 0x2b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration44"),
#endif
			.subidx = 0x2c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration45"),
#endif
			.subidx = 0x2d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration46"),
#endif
			.subidx = 0x2e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration47"),
#endif
			.subidx = 0x2f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration48"),
#endif
			.subidx = 0x30,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration49"),
#endif
			.subidx = 0x31,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration50"),
#endif
			.subidx = 0x32,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration51"),
#endif
			.subidx = 0x33,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration52"),
#endif
			.subidx = 0x34,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration53"),
#endif
			.subidx = 0x35,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration54"),
#endif
			.subidx = 0x36,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration55"),
#endif
			.subidx = 0x37,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration56"),
#endif
			.subidx = 0x38,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration57"),
#endif
			.subidx = 0x39,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration58"),
#endif
			.subidx = 0x3a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration59"),
#endif
			.subidx = 0x3b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration60"),
#endif
			.subidx = 0x3c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration61"),
#endif
			.subidx = 0x3d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration62"),
#endif
			.subidx = 0x3e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration63"),
#endif
			.subidx = 0x3f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration64"),
#endif
			.subidx = 0x40,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration65"),
#endif
			.subidx = 0x41,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration66"),
#endif
			.subidx = 0x42,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration67"),
#endif
			.subidx = 0x43,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration68"),
#endif
			.subidx = 0x44,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration69"),
#endif
			.subidx = 0x45,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration70"),
#endif
			.subidx = 0x46,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration71"),
#endif
			.subidx = 0x47,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration72"),
#endif
			.subidx = 0x48,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration73"),
#endif
			.subidx = 0x49,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration74"),
#endif
			.subidx = 0x4a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration75"),
#endif
			.subidx = 0x4b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration76"),
#endif
			.subidx = 0x4c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration77"),
#endif
			.subidx = 0x4d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration78"),
#endif
			.subidx = 0x4e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration79"),
#endif
			.subidx = 0x4f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration80"),
#endif
			.subidx = 0x50,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration81"),
#endif
			.subidx = 0x51,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration82"),
#endif
			.subidx = 0x52,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration83"),
#endif
			.subidx = 0x53,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration84"),
#endif
			.subidx = 0x54,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration85"),
#endif
			.subidx = 0x55,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration86"),
#endif
			.subidx = 0x56,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration87"),
#endif
			.subidx = 0x57,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration88"),
#endif
			.subidx = 0x58,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration89"),
#endif
			.subidx = 0x59,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration90"),
#endif
			.subidx = 0x5a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration91"),
#endif
			.subidx = 0x5b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration92"),
#endif
			.subidx = 0x5c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration93"),
#endif
			.subidx = 0x5d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration94"),
#endif
			.subidx = 0x5e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration95"),
#endif
			.subidx = 0x5f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration96"),
#endif
			.subidx = 0x60,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration97"),
#endif
			.subidx = 0x61,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration98"),
#endif
			.subidx = 0x62,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration99"),
#endif
			.subidx = 0x63,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration100"),
#endif
			.subidx = 0x64,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration101"),
#endif
			.subidx = 0x65,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration102"),
#endif
			.subidx = 0x66,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration103"),
#endif
			.subidx = 0x67,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration104"),
#endif
			.subidx = 0x68,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration105"),
#endif
			.subidx = 0x69,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration106"),
#endif
			.subidx = 0x6a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration107"),
#endif
			.subidx = 0x6b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration108"),
#endif
			.subidx = 0x6c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration109"),
#endif
			.subidx = 0x6d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration110"),
#endif
			.subidx = 0x6e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration111"),
#endif
			.subidx = 0x6f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration112"),
#endif
			.subidx = 0x70,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration113"),
#endif
			.subidx = 0x71,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration114"),
#endif
			.subidx = 0x72,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration115"),
#endif
			.subidx = 0x73,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration116"),
#endif
			.subidx = 0x74,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration117"),
#endif
			.subidx = 0x75,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration118"),
#endif
			.subidx = 0x76,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration119"),
#endif
			.subidx = 0x77,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration120"),
#endif
			.subidx = 0x78,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration121"),
#endif
			.subidx = 0x79,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration122"),
#endif
			.subidx = 0x7a,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration123"),
#endif
			.subidx = 0x7b,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration124"),
#endif
			.subidx = 0x7c,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration125"),
#endif
			.subidx = 0x7d,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration126"),
#endif
			.subidx = 0x7e,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Restore configuration127"),
#endif
			.subidx = 0x7f,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = CO_UNSIGNED8_MIN },
#endif
			.val = { .u8 = CO_UNSIGNED8_MIN },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Mapped application objects for RPDO 1"),
#endif
		.idx = 0x2000,
		.code = CO_OBJECT_RECORD,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("slave_2: UNSIGNED32 sent from slave"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RWW,
			.pdo_mapping = 1,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Mapped application objects for TPDO 1"),
#endif
		.idx = 0x2200,
		.code = CO_OBJECT_RECORD,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Highest sub-index supported"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_CONST,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("slave_2: UNSIGNED32 received by slave"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = CO_UNSIGNED32_MIN },
			.access = CO_ACCESS_RWR,
			.pdo_mapping = 1,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Remote TPDO number and node-ID"),
#endif
		.idx = 0x5800,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Remote TPDO number and node-ID"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000102lu },
#endif
			.val = { .u32 = 0x00000102lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Remote TPDO mapping parameter"),
#endif
		.idx = 0x5a00,
		.code = CO_OBJECT_ARRAY,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Remote TPDO mapping parameter1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x40010020lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Remote RPDO number and node-ID"),
#endif
		.idx = 0x5c00,
		.code = CO_OBJECT_VAR,
		.nsub = 1,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Remote RPDO number and node-ID"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = 0x00000102lu },
#endif
			.val = { .u32 = 0x00000102lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}, {
#if !LELY_NO_CO_OBJ_NAME
		.name = CO_SDEV_STRING("Remote RPDO mapping parameter"),
#endif
		.idx = 0x5e00,
		.code = CO_OBJECT_ARRAY,
		.nsub = 2,
		.subs = (const struct co_ssub[]){{
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("NrOfObjects"),
#endif
			.subidx = 0x00,
			.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u8 = CO_UNSIGNED8_MIN },
			.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u8 = 0x01 },
#endif
			.val = { .u8 = 0x01 },
			.access = CO_ACCESS_RO,
			.pdo_mapping = 0,
			.flags = 0
		}, {
#if !LELY_NO_CO_OBJ_NAME
			.name = CO_SDEV_STRING("Remote RPDO mapping parameter1"),
#endif
			.subidx = 0x01,
			.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_LIMITS
			.min = { .u32 = CO_UNSIGNED32_MIN },
			.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
			.def = { .u32 = CO_UNSIGNED32_MIN },
#endif
			.val = { .u32 = 0x40000020lu },
			.access = CO_ACCESS_RW,
			.pdo_mapping = 0,
			.flags = 0
		}}
	}}
};

