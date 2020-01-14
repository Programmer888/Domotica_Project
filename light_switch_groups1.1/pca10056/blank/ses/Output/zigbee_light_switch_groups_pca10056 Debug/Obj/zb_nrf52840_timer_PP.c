# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\examples\\zigbee\\experimental\\light_control\\light_switch_groups1.1\\pca10056\\blank\\ses//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
# 49 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
# 1 "../../../../../../../../external/zboss/include/zboss_api.h" 1
# 44 "../../../../../../../../external/zboss/include/zboss_api.h"
# 1 "../../../../../../../../external/zboss/include/zb_version.h" 1
# 45 "../../../../../../../../external/zboss/include/zb_version.h"
# 1 "../../../../../../../../external/zboss/include/zb_revision.h" 1
# 46 "../../../../../../../../external/zboss/include/zb_version.h" 2
# 45 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_core.h" 1
# 45 "../../../../../../../../external/zboss/include/zboss_api_core.h"
# 1 "../../../../../../../../external/zboss/include/zb_vendor.h" 1
# 46 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_config.h" 1
# 56 "../../../../../../../../external/zboss/include/zb_config.h"
# 1 "../../../../../../../../external/zboss/include/zb_config_common.h" 1
# 57 "../../../../../../../../external/zboss/include/zb_config.h" 2
# 47 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_types.h" 1
# 98 "../../../../../../../../external/zboss/include/zb_types.h"
enum zb_bool_e
{
  ZB_FALSE = 0,
  ZB_TRUE = 1
};
# 112 "../../../../../../../../external/zboss/include/zb_types.h"
typedef char zb_char_t;

typedef unsigned char zb_uchar_t;

typedef unsigned char zb_uint8_t;

typedef signed char zb_int8_t;

typedef unsigned short zb_uint16_t;

typedef signed short zb_int16_t;
# 144 "../../../../../../../../external/zboss/include/zb_types.h"
typedef unsigned int zb_uint32_t;



typedef signed int zb_int32_t;







typedef zb_uint8_t zb_bitfield_t;

typedef zb_uint32_t zb_lbitfield_t;



typedef zb_int32_t zb_sbitfield_t;

typedef zb_uint32_t zb_size_t;

typedef long long zb_int64_t;
typedef unsigned long long zb_uint64_t;
# 267 "../../../../../../../../external/zboss/include/zb_types.h"
typedef int zb_short_t;



typedef unsigned int zb_ushort_t;



typedef zb_ushort_t zb_uindex_t;



typedef int zb_int_t;



typedef unsigned int zb_uint_t;



typedef zb_int_t zb_long_t;



typedef zb_uint_t zb_ulong_t;


typedef void * zb_voidp_t;
typedef void zb_void_t;


typedef enum zb_bool_e zb_bool_t;
# 392 "../../../../../../../../external/zboss/include/zb_types.h"
typedef zb_uint8_t zb_64bit_addr_t[8];




typedef zb_uint8_t zb_64bit_data_t[8];

extern const zb_64bit_addr_t g_zero_addr;
extern const zb_64bit_addr_t g_unknown_ieee_addr;
# 438 "../../../../../../../../external/zboss/include/zb_types.h"
typedef zb_64bit_addr_t zb_ieee_addr_t;



typedef zb_64bit_addr_t zb_ext_pan_id_t;
# 462 "../../../../../../../../external/zboss/include/zb_types.h"
typedef union zb_addr_u_t
{
  zb_uint16_t addr_short;
  zb_ieee_addr_t addr_long;
} __attribute__ ((packed))
zb_addr_u;
# 558 "../../../../../../../../external/zboss/include/zb_types.h"
void zb_htobe32(zb_uint8_t *ptr, zb_uint8_t *val);
# 631 "../../../../../../../../external/zboss/include/zb_types.h"
void zb_put_next_htole16(zb_uint8_t **dst, zb_uint16_t val);
# 648 "../../../../../../../../external/zboss/include/zb_types.h"
void* zb_put_next_htole32(zb_uint8_t *dst, zb_uint32_t val1);
# 663 "../../../../../../../../external/zboss/include/zb_types.h"
void* zb_put_next_2_htole16(zb_uint8_t *dst, zb_uint16_t val1, zb_uint16_t val2);
void* zb_put_next_2_htole32(zb_uint8_t *dst, zb_uint32_t val1, zb_uint32_t val2);
# 845 "../../../../../../../../external/zboss/include/zb_types.h"
typedef struct zb_int24_s
{
  zb_uint16_t low;
  zb_int8_t high;
} __attribute__ ((packed)) zb_int24_t;

typedef struct zb_uint24_s
{
  zb_uint16_t low;
  zb_uint8_t high;
} __attribute__ ((packed)) zb_uint24_t;

typedef struct zb_uint48_s
{
  zb_uint32_t low;
  zb_uint16_t high;
} __attribute__ ((packed)) zb_uint48_t;

typedef struct zb_int48_s
{
  zb_uint32_t low;
  zb_int16_t high;
} __attribute__ ((packed)) zb_int48_t;
# 986 "../../../../../../../../external/zboss/include/zb_types.h"
enum zb_math_status_e
{
  ZB_MATH_OK = 0,
  ZB_MATH_OVERFLOW,
  ZB_MATH_ERROR,
};






zb_void_t zb_uint32_to_uint24(zb_uint32_t var, zb_uint24_t *res);






zb_int32_t zb_int24_to_int32(const zb_int24_t *var);






zb_void_t zb_int32_to_int24(zb_int32_t var, zb_int24_t *res);






zb_void_t zb_int32_to_uint24(zb_int32_t var, zb_uint24_t *res);






zb_int32_t zb_uint24_to_int32(const zb_uint24_t *var);
# 1036 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint24_add(const zb_uint24_t *f, const zb_uint24_t *s, zb_uint24_t *r);
# 1046 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int24_add(const zb_int24_t *f, const zb_int24_t *s, zb_int24_t *r);
# 1056 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int24_sub(const zb_int24_t *f, const zb_int24_t *s, zb_int24_t *r);
# 1066 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint24_sub(const zb_uint24_t *f, const zb_uint24_t *s, zb_uint24_t *r);







zb_uint8_t zb_int24_neg(const zb_int24_t *f, zb_int24_t *r);
# 1084 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint24_mul(const zb_uint24_t *f, const zb_uint24_t *s, zb_uint24_t *r);
# 1094 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int24_mul(const zb_int24_t *f, const zb_int24_t *s, zb_int24_t *r);
# 1104 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint24_div(const zb_uint24_t *f, const zb_uint24_t *s, zb_uint24_t *r);
# 1114 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int24_div(const zb_int24_t *f, const zb_int24_t *s, zb_int24_t *r);
# 1124 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint24_mod(const zb_uint24_t *f, const zb_uint24_t *s, zb_uint24_t *r);
# 1134 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int24_mod(const zb_int24_t *f, const zb_int24_t *s, zb_int24_t *r);






zb_void_t zb_uint64_to_uint48(zb_uint64_t var, zb_uint48_t *res);






zb_int64_t zb_int48_to_int64(const zb_int48_t *var);






zb_void_t zb_int64_to_int48(zb_int64_t var, zb_int48_t *res);







zb_void_t zb_int64_to_uint48(zb_int64_t var, zb_uint48_t *res);






zb_int64_t zb_uint48_to_int64(const zb_uint48_t *var);
# 1180 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint48_add(const zb_uint48_t *f, const zb_uint48_t *s, zb_uint48_t *r);
# 1190 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int48_add(const zb_int48_t *f, const zb_int48_t *s, zb_int48_t *r);
# 1200 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int48_sub(const zb_int48_t *f, const zb_int48_t *s, zb_int48_t *r);
# 1210 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint48_sub(const zb_uint48_t *f, const zb_uint48_t *s, zb_uint48_t *r);







zb_uint8_t zb_int48_neg(const zb_int48_t *f, zb_int48_t *r);
# 1228 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint48_mul(const zb_uint48_t *f, const zb_uint48_t *s, zb_uint48_t *r);
# 1238 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int48_mul(const zb_int48_t *f, const zb_int48_t *s, zb_int48_t *r);
# 1248 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint48_div(const zb_uint48_t *f, const zb_uint48_t *s, zb_uint48_t *r);
# 1258 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int48_div(const zb_int48_t *f, const zb_int48_t *s, zb_int48_t *r);
# 1268 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_uint48_mod(const zb_uint48_t *f, const zb_uint48_t *s, zb_uint48_t *r);
# 1278 "../../../../../../../../external/zboss/include/zb_types.h"
zb_uint8_t zb_int48_mod(const zb_int48_t *f, const zb_int48_t *s, zb_int48_t *r);
# 48 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_errors.h" 1
# 49 "../../../../../../../../external/zboss/include/zb_errors.h"
enum zb_error_category_e
{
  ERROR_CATEGORY_GENERIC,
  ERROR_CATEGORY_SYSTEM
};
# 75 "../../../../../../../../external/zboss/include/zb_errors.h"
enum zb_ret_e
{

  RET_OK = 0,
  RET_ERROR = ((1) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (1)) : 0),
  RET_BLOCKED = ((2) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (2)) : 0),
  RET_EXIT = ((3) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (3)) : 0),
  RET_BUSY = ((4) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (4)) : 0),
  RET_EOF = ((5) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (5)) : 0),
  RET_OUT_OF_RANGE = ((6) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (6)) : 0),
  RET_EMPTY = ((7) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (7)) : 0),
  RET_CANCELLED = ((8) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (8)) : 0),
# 99 "../../../../../../../../external/zboss/include/zb_errors.h"
  RET_INVALID_PARAMETER_1 = ((10) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (10)) : 0),
  RET_INVALID_PARAMETER_2 = ((11) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (11)) : 0),
  RET_INVALID_PARAMETER_3 = ((12) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (12)) : 0),
  RET_INVALID_PARAMETER_4 = ((13) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (13)) : 0),
  RET_INVALID_PARAMETER_5 = ((14) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (14)) : 0),
  RET_INVALID_PARAMETER_6 = ((15) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (15)) : 0),
  RET_INVALID_PARAMETER_7 = ((16) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (16)) : 0),
  RET_INVALID_PARAMETER_8 = ((17) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (17)) : 0),
  RET_INVALID_PARAMETER_9 = ((18) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (18)) : 0),
  RET_INVALID_PARAMETER_10 = ((19) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (19)) : 0),
  RET_INVALID_PARAMETER_11_OR_MORE = ((20) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (20)) : 0),
  RET_PENDING = ((21) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (21)) : 0),
  RET_NO_MEMORY = ((22) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (22)) : 0),
  RET_INVALID_PARAMETER = ((23) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (23)) : 0),
  RET_OPERATION_FAILED = ((24) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (24)) : 0),
  RET_BUFFER_TOO_SMALL = ((25) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (25)) : 0),
  RET_END_OF_LIST = ((26) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (26)) : 0),
  RET_ALREADY_EXISTS = ((27) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (27)) : 0),
  RET_NOT_FOUND = ((28) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (28)) : 0),
  RET_OVERFLOW = ((29) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (29)) : 0),
  RET_TIMEOUT = ((30) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (30)) : 0),
  RET_NOT_IMPLEMENTED = ((31) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (31)) : 0),
  RET_NO_RESOURCES = ((32) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (32)) : 0),
  RET_UNINITIALIZED = ((33) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (33)) : 0),
  RET_NO_SERVER = ((34) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (34)) : 0),
  RET_INVALID_STATE = ((35) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (35)) : 0),
  RET_DOES_NOT_EXIST = ((36) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (36)) : 0),
  RET_CONNECTION_FAILED = ((37) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (37)) : 0),
  RET_CONNECTION_LOST = ((38) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (38)) : 0),
  RET_CANCELLED_BY_USER = ((39) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (39)) : 0),
  RET_UNAUTHORIZED = ((40) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (40)) : 0),
  RET_CONFLICT = ((41) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (41)) : 0),
  RET_COULD_NOT_OPEN_FILE = ((41) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (41)) : 0),
  RET_NO_MATCH = ((43) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (43)) : 0),
  RET_PROTOCOL_ERROR = ((44) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (44)) : 0),
  RET_VERSION = ((45) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (45)) : 0),
  RET_MALFORMED_ADDRESS = ((46) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (46)) : 0),
  RET_COULD_NOT_READ_FILE = ((47) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (47)) : 0),
  RET_FILE_NOT_FOUND = ((48) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (48)) : 0),
  RET_DIRECTORY_NOT_FOUND = ((49) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (49)) : 0),
  RET_CONVERSION_ERROR = ((50) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (50)) : 0),
  RET_INCOMPATIBLE_TYPES = ((51) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (51)) : 0),
  RET_INCOMPATIBLE_TYPES_IN_COMPARE = ((52) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (52)) : 0),
  RET_INCOMPATIBLE_TYPES_IN_ASSIGNMENT = ((53) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (53)) : 0),
  RET_INCOMPATIBLE_TYPES_IN_EXPRESSION = ((54) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (54)) : 0),
  RET_ILLEGAL_COMPARE_OPERATION = ((55) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (55)) : 0),
  RET_FILE_CORRUPTED = ((56) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (56)) : 0),
  RET_PAGE_NOT_FOUND = ((57) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (57)) : 0),
  RET_FILE_WRITE_ERROR = ((58) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (58)) : 0),
  RET_FILE_READ_ERROR = ((59) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (59)) : 0),
  RET_FILE_PARTIAL_WRITE = ((60) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (60)) : 0),
  RET_TOO_MANY_OPEN_FILES = ((61) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (61)) : 0),
  RET_ILLEGAL_REQUEST = ((62) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (62)) : 0),
  RET_INVALID_BINDING = ((63) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (63)) : 0),
  RET_INVALID_GROUP = ((64) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (64)) : 0),
  RET_TABLE_FULL = ((65) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (65)) : 0),
  RET_NO_ACK = ((66) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (66)) : 0),
  RET_ACK_OK = ((67) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (67)) : 0),
  RET_NO_BOUND_DEVICE = ((68) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (68)) : 0),
  RET_IGNORE = ((69) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (69)) : 0),
  RET_AGAIN = ((70) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (70)) : 0),
  RET_DEVICE_NOT_FOUND = ((71) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (71)) : 0),
  RET_OBSOLETE = ((72) ? -(zb_int_t)(((ERROR_CATEGORY_GENERIC) * 10000) + (72)) : 0),
};


typedef zb_int_t zb_ret_t;
# 49 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/osif/zb_osif.h" 1
# 87 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
# 1 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h" 1
# 45 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 1 3 4
# 47 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 1 3 4
# 76 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 3 4

# 76 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 3 4
typedef __builtin_va_list __va_list;
# 126 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 3 4
struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s, unsigned wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s, unsigned wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);
# 239 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 3 4
const __RAL_locale_t *__RAL_find_locale(const char *locale);







const __RAL_locale_t *__RAL_global_locale_category(int __category);







const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);






extern struct __locale_s __RAL_global_locale;






extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);
# 48 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 2 3 4







typedef unsigned size_t;
# 90 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memcpy(void *__s1, const void *__s2, size_t __n);
# 105 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memcpy_fast(void *__s1, const void *__s2, size_t __n);
# 124 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memccpy(void *__s1, const void *__s2, int __c, size_t __n);
# 138 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *mempcpy(void *__s1, const void *__s2, size_t __n);
# 153 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memmove(void *__s1, const void *__s2, size_t __n);
# 164 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
int memcmp(const void *__s1, const void *__s2, size_t __n);
# 178 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
# 188 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
void *memset(void *__s, int __c, size_t __n);
# 199 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strcpy(char *__s1, const char *__s2);
# 219 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strncpy(char *__s1, const char *__s2, size_t __n);
# 236 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
size_t strlcpy(char *__s1, const char *__s2, size_t __n);
# 249 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strcat(char *__s1, const char *__s2);
# 263 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strncat(char *__s1, const char *__s2, size_t __n);
# 284 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
size_t strlcat(char *__s1, const char *__s2, size_t __n);
# 294 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
int strcmp(const char *__s1, const char *__s2);
# 307 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
int strncmp(const char *__s1, const char *__s2, size_t __n);
# 319 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
int strcasecmp(const char *__s1, const char *__s2);
# 334 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
# 346 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strchr(const char *__s, int __c);
# 358 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strnchr(const char *__str, size_t __n, int __ch);
# 369 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
size_t strcspn(const char *__s1, const char *__s2);
# 380 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strpbrk(const char *__s1, const char *__s2);
# 392 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strrchr(const char *__s, int __c);
# 403 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
size_t strspn(const char *__s1, const char *__s2);
# 416 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strstr(const char *__s1, const char *__s2);
# 431 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strnstr(const char *__s1, const char *__s2, size_t __n);
# 446 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strcasestr(const char *__s1, const char *__s2);
# 462 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strncasestr(const char *__s1, const char *__s2, size_t __n);







size_t strlen(const char *__s);
# 481 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
size_t strnlen(const char *__s, size_t __n);
# 515 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strtok(char *__s1, const char *__s2);
# 534 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strsep(char **__stringp, const char *__delim);
# 547 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strtok_r(char *__s1, const char *__s2, char **__s3);
# 561 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strdup(const char *__s1);
# 579 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strndup(const char *__s1, size_t __n);
# 592 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
char *strerror(int __num);



int strcoll(const char *__str1, const char *__str2);
size_t strxfrm( char *__str1, const char *__str2, size_t __num);
# 46 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h" 2

# 1 "../../../../../../../../external/zboss/include/zb_types.h" 1
# 48 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_ringbuffer.h" 1
# 395 "../../../../../../../../external/zboss/include/zb_ringbuffer.h"

# 395 "../../../../../../../../external/zboss/include/zb_ringbuffer.h"
typedef struct zb_byte_array_s { zb_ushort_t read_i; zb_ushort_t write_i; zb_ushort_t written; zb_uint8_t ring_buf[1]; } zb_byte_array_t;
# 49 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h" 2
# 61 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
typedef zb_uint32_t zb_minimal_vararg_t;
# 81 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
void zb_nrf52840_init(void);
void zb_nrf52840_general_init(void);
void zb_nrf52840_rf_init(void);
void zb_nrf52840_abort(void);
void zb_osif_go_idle(void);



void zb_osif_timer_init(void);
void zb_nrf52840_timer_stop(void);
void zb_nrf52840_timer_start(void);
zb_bool_t zb_nrf52840_timer_is_on(void);


void zb_nrf52840_sleep_init(void);
zb_uint32_t zb_nrf52840_sleep(zb_uint32_t sleep_tmo);


void zb_nrf52840_rf_tx(zb_uint8_t channel, zb_uint8_t *buf, zb_uint8_t len);
void zb_nrf52840_rf_setChannel(zb_uint8_t channel);
void zb_nrf52840_enable_all_inter(void);
void zb_nrf52840_disable_all_inter(void);
zb_uint16_t zb_nrf52840_getRssi(void);
zb_void_t zb_nrf_802154_mac_osif_init(void);
# 145 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
typedef struct zb_serial_ctx_s
{

  zb_uint8_t inited;
# 158 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
}
zb_serial_ctx_t;

typedef struct zb_io_ctx_s
{
    zb_serial_ctx_t serial_ctx;
}
zb_io_ctx_t;


void zb_osif_serial_flush(void);
# 182 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
typedef struct zb_osif_flash_device_s {
  zb_uint32_t base_address;
  zb_uint32_t img_srv_address;

  zb_uint8_t ota_file_header[56];
  zb_uint8_t transmit_buffer[60];
} zb_osif_flash_device_t;
# 202 "../../../../../../../../external/zboss/include/osif/zb_osif_nrf52840.h"
void zb_osif_get_ieee_eui64(zb_ieee_addr_t ieee_eui64);




typedef struct zb_nrf52840_radio_stats_s
{
  zb_uint32_t rx_successful;
  zb_uint32_t rx_err_none;
  zb_uint32_t rx_err_invalid_frame;
  zb_uint32_t rx_err_invalid_fcs;
  zb_uint32_t rx_err_invalid_dest_addr;
  zb_uint32_t rx_err_runtime;
  zb_uint32_t rx_err_timeslot_ended;
  zb_uint32_t rx_err_aborted;

  zb_uint32_t tx_successful;
  zb_uint32_t tx_err_none;
  zb_uint32_t tx_err_busy_channel;
  zb_uint32_t tx_err_invalid_ack;
  zb_uint32_t tx_err_no_mem;
  zb_uint32_t tx_err_timeslot_ended;
  zb_uint32_t tx_err_no_ack;
  zb_uint32_t tx_err_aborted;
  zb_uint32_t tx_err_timeslot_denied;

} zb_nrf52840_radio_stats_t;

zb_nrf52840_radio_stats_t* zb_nrf52840_get_radio_stats(void);
# 88 "../../../../../../../../external/zboss/include/osif/zb_osif.h" 2
# 124 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_uint32_t zb_random_seed(void);
zb_uint32_t zb_get_utc_time(void);

zb_uint32_t osif_get_time_ms(void);


zb_ret_t osif_set_transmit_power(zb_uint8_t channel, zb_int8_t power);
void osif_set_default_trasnmit_powers(zb_int8_t *tx_powers);
# 147 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_serial_init(void);






void zb_osif_set_uart_byte_received_cb(void (*hnd)(zb_uint8_t));
# 168 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_set_user_io_buffer(zb_byte_array_t *buf_ptr, zb_ushort_t capacity);
# 179 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_set_uart_user_irq_handler(void (*irq_hnd)());
# 197 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_serial_put_bytes(zb_uint8_t *buf, zb_short_t len);
# 235 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_void_t zb_reset(zb_uint8_t param);
# 247 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_get_stack(zb_uint8_t **s_head, zb_uint32_t *s_size, zb_uint8_t *s_direction);





void zb_osif_nvram_init(zb_char_t *name);






zb_uint32_t zb_get_nvram_page_length(void);






zb_uint8_t zb_get_nvram_page_count(void);
# 279 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_nvram_read_memory(zb_uint32_t address, zb_uint16_t len, zb_uint8_t *buf );
# 292 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_nvram_read(zb_uint8_t page, zb_uint32_t pos, zb_uint8_t *buf, zb_uint16_t len );
# 307 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_nvram_read_test(zb_uint8_t page, zb_uint32_t pos, zb_uint8_t *buf, zb_uint16_t len );
# 320 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_nvram_write(zb_uint8_t page, zb_uint32_t pos, void *buf, zb_uint16_t len );
# 330 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_nvram_erase_async(zb_uint8_t page);

void zb_osif_nvram_wait_for_last_op(void);







void zb_osif_nvram_flush(void);
# 369 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void *zb_osif_ota_open_storage(void);






void zb_osif_ota_close_storage(void *dev);
# 388 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_ota_erase_fw(void *dev, zb_uint_t offset, zb_uint_t size);






zb_uint32_t zb_osif_ota_get_erase_portion(void);
# 408 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_ota_write(void *dev, zb_uint8_t *data, zb_uint32_t off, zb_uint32_t block_size, zb_uint32_t image_size);
# 419 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
void zb_osif_ota_mark_fw_ready(void *ota_dev, zb_uint32_t size, zb_uint32_t revision);






void zb_osif_ota_mark_fw_absent(void);







void zb_osif_ota_mark_fw_updated(void);
# 443 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_bool_t zb_osif_ota_verify_integrity(void *dev, zb_uint32_t raw_len);

zb_bool_t zb_osif_ota_verify_integrity_async(void *dev, zb_uint32_t raw_len);
zb_void_t zb_osif_ota_verify_integrity_done(zb_uint8_t integrity_is_ok);

void zb_osif_ota_read(void *dev, zb_uint8_t *data, zb_uint32_t addr, zb_uint32_t size);







zb_bool_t zb_osif_ota_fw_size_ok(zb_uint32_t image_size);
# 466 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_uint8_t *zb_osif_ota_srv_get_image(void *dev, zb_uint32_t offset, zb_uint32_t len);
zb_uint8_t *zb_osif_ota_srv_get_image_header(void *dev);



void osif_set_reset_at_crash(void);
# 498 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_uint32_t zb_osif_sleep(zb_uint32_t sleep_tmo);
zb_void_t zb_osif_wake_up(void);





zb_bool_t zb_osif_production_configuration_check_header(void);
# 515 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_void_t zb_osif_production_configuration_read(zb_uint8_t *buffer, zb_uint16_t len, zb_uint16_t offset);
# 524 "../../../../../../../../external/zboss/include/osif/zb_osif.h"
zb_ret_t zb_osif_set_transmit_power(zb_uint8_t channel, zb_int8_t power);
# 50 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_debug.h" 1
# 53 "../../../../../../../../external/zboss/include/zb_debug.h"
void zb_abort(char *caller_file, int caller_line);
# 87 "../../../../../../../../external/zboss/include/zb_debug.h"
zb_void_t zb_assert(zb_uint16_t file_id, zb_int_t line_number);
# 103 "../../../../../../../../external/zboss/include/zb_debug.h"
zb_void_t lwip_zb_assert(zb_uint16_t file_id, zb_int_t line_number);
# 244 "../../../../../../../../external/zboss/include/zb_debug.h"
void dump_traf(zb_uint8_t *buf, zb_ushort_t len);


void dump_usb_traf(zb_uint8_t *buf, zb_ushort_t len);
# 259 "../../../../../../../../external/zboss/include/zb_debug.h"
void dump_hex_data(zb_uint_t trace_mask, zb_uint8_t trace_level, zb_uint8_t *buf, zb_ushort_t len);
# 51 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_trace.h" 1
# 69 "../../../../../../../../external/zboss/include/zb_trace.h"
zb_uint32_t zb_trace_get_counter(void);
# 85 "../../../../../../../../external/zboss/include/zb_trace.h"
extern zb_uint8_t g_trace_level, g_o_trace_level;
extern zb_uint16_t g_trace_mask;
extern zb_uint_t g_trace_inside_intr;
# 131 "../../../../../../../../external/zboss/include/zb_trace.h"
zb_bool_t zb_osif_is_inside_isr(void);
# 260 "../../../../../../../../external/zboss/include/zb_trace.h"
__extension__ _Static_assert(52493 < 65535, "Assert at line __LINE__");


void zb_trace_msg_port(
  zb_uint_t mask,
  zb_uint_t level,
  zb_uint16_t file_id,
  zb_uint16_t line_number,
  zb_uint_t args_size, ...);
# 340 "../../../../../../../../external/zboss/include/zb_trace.h"
typedef struct zb_addr64_struct_s
{
  zb_64bit_addr_t addr;
} __attribute__ ((packed)) zb_addr64_struct_t;

typedef struct zb_byte128_struct_s
{
  zb_uint8_t d[16];
} __attribute__ ((packed)) zb_byte128_struct_t;
# 929 "../../../../../../../../external/zboss/include/zb_trace.h"
extern zb_uint8_t g_traf_dump;
# 52 "../../../../../../../../external/zboss/include/zboss_api_core.h" 2
# 80 "../../../../../../../../external/zboss/include/zboss_api_core.h"
  typedef zb_uint32_t zb_time_t;
# 98 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_time_t zb_timer_get(void);
# 298 "../../../../../../../../external/zboss/include/zboss_api_core.h"
typedef void ( * zb_callback_t)(zb_uint8_t param);

typedef zb_ret_t ( * zb_ret_callback_t)(zb_uint8_t param);

typedef void (*zb_callback_void_t)(void);
# 318 "../../../../../../../../external/zboss/include/zboss_api_core.h"
typedef void ( * zb_callback2_t)(zb_uint8_t param, zb_uint16_t cb_param);
# 335 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_schedule_callback(zb_callback_t func, zb_uint8_t param,
                              zb_bool_t use_2_param, zb_uint16_t user_param, zb_bool_t is_prior);
# 369 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_schedule_alarm(zb_callback_t func, zb_uint8_t param, zb_time_t timeout_bi);
# 418 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_schedule_alarm_cancel(zb_callback_t func, zb_uint8_t param, zb_uint8_t *p_param);
# 469 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_schedule_get_alarm_time(zb_callback_t func, zb_uint8_t param, zb_time_t *timeout_bi);
# 534 "../../../../../../../../external/zboss/include/zboss_api_core.h"
enum zb_buffer_types_e
{
  ZB_OUT_BUFFER = 0,
  ZB_IN_BUFFER = 1
};




typedef struct zb_buf_hdr_s
{
  zb_uint8_t len;
  zb_uint8_t data_offset;
  zb_uint8_t handle;

  zb_bitfield_t is_in_buf:1;

  zb_bitfield_t encrypt_type:3;


  zb_bitfield_t use_same_key:1;

  zb_bitfield_t zdo_cmd_no_resp:1;

  zb_bitfield_t is_rx_buf:1;

  zb_bitfield_t has_aps_payload:1;

  zb_int16_t status;
} __attribute__ ((packed)) zb_buf_hdr_t;




typedef struct zb_buf_s
{



  union
  {
    zb_buf_hdr_t hdr;

    struct zb_buf_s *next;

  } u;



  zb_uint8_t buf[148];
# 592 "../../../../../../../../external/zboss/include/zboss_api_core.h"
} zb_buf_t;
# 606 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_bool_t zb_buf_check_z(zb_int_t file_id, zb_uint8_t param);
# 640 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_uint8_t* zb_buf_begin(zb_int_t file_id, zb_buf_t *zbbuf);
# 649 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_uint8_t zb_buf_len(zb_int_t file_id, zb_buf_t *zbbuf);
# 672 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_buf_t *zb_get_in_buf(void);
# 701 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_buf_t *zb_get_out_buf(void);
# 721 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_buf_t* zb_buf_from_ref(zb_uint8_t ref, zb_uint16_t from_file, zb_uint16_t from_line);
# 745 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_uint8_t zb_ref_from_buf(zb_buf_t *buf);
# 793 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void zb_buf_copy(zb_buf_t *dst_buf, zb_buf_t *src_buf);
# 810 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_uint8_t zb_buf_offset(zb_int_t file_id, zb_buf_t *zbbuf);
# 830 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t *zb_buf_initial_alloc(zb_buf_t *zbbuf, zb_uint8_t size);
# 855 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t *zb_buf_smart_alloc_left(zb_buf_t *zbbuf, zb_uint8_t size);
# 874 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t *zb_buf_smart_alloc_right(zb_buf_t *zbbuf, zb_uint8_t size);
# 893 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void *zb_buf_cut_left(zb_buf_t *zbbuf, zb_uint8_t size);
# 904 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void zb_buf_cut_left2(zb_int_t file_id, zb_buf_t *zbbuf, zb_uint8_t size);
# 915 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void zb_buf_cut_right(zb_buf_t *zbbuf, zb_uint8_t size);
# 930 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t *zb_get_buf_tail(zb_buf_t *zbbuf, zb_uint8_t size);
# 1008 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t zb_buf_reuse(



    zb_buf_t *zbbuf);
# 1032 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void zb_free_buf(zb_buf_t *buf);
# 1062 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_get_in_buf_delayed(



    zb_callback_t callback);
# 1092 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_get_out_buf_delayed(



    zb_callback_t callback);
# 1133 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_ret_t zb_get_buf_delayed_2param(



  zb_callback2_t callback,
  enum zb_buffer_types_e buf_type,
  zb_bool_t use_2_param,
  zb_uint16_t user_param);
# 1168 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_void_t zb_switch_buf(



    zb_buf_t *buf, zb_uint8_t to_in);
# 1201 "../../../../../../../../external/zboss/include/zboss_api_core.h"
zb_uint16_t zb_random(void);
# 1215 "../../../../../../../../external/zboss/include/zboss_api_core.h"
void zb_memcpy8(zb_uint8_t *ptr, zb_uint8_t *src);
# 46 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_internal.h" 1
# 52 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
# 1 "../../../../../../../../external/zboss/include/zb_pooled_list.h" 1
# 53 "../../../../../../../../external/zboss/include/zboss_api_internal.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_address.h" 1
# 57 "../../../../../../../../external/zboss/include/zb_address.h"
typedef struct zb_ieee_addr_compressed_s
{
  zb_uint8_t dev_manufacturer;
  zb_uint8_t device_id[5];
}
__attribute__ ((packed))
zb_ieee_addr_compressed_t;
# 73 "../../../../../../../../external/zboss/include/zb_address.h"
typedef zb_uint8_t zb_address_pan_id_ref_t;







typedef zb_uint8_t zb_address_ieee_ref_t;






typedef struct zb_address_map_s
{
  zb_ieee_addr_compressed_t ieee_addr;
  zb_uint16_t addr;
  zb_address_ieee_ref_t redirect_ref;

  zb_bitfield_t used:1;
  zb_bitfield_t has_address_conflict:1;



  zb_bitfield_t padding:3;
  zb_bitfield_t clock:1;
  zb_bitfield_t redirect_type:2;
  zb_bitfield_t lock_cnt:7;
  zb_bitfield_t pending_for_delete:1;
} __attribute__ ((packed)) zb_address_map_t;
# 142 "../../../../../../../../external/zboss/include/zb_address.h"
zb_bool_t zb_address_compressed_cmp(zb_ieee_addr_compressed_t *one, zb_ieee_addr_compressed_t *two);
# 185 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_set_pan_id(zb_uint16_t short_pan_id, zb_ext_pan_id_t pan_id, zb_address_pan_id_ref_t *ref);
# 217 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_get_pan_id(zb_address_pan_id_ref_t pan_id_ref, zb_ext_pan_id_t pan_id);
# 228 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_clear_pan_id_table(zb_ext_pan_id_t pan_id);
# 237 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_reset_pan_id_table(void);
# 259 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_get_pan_id_ref(zb_ext_pan_id_t pan_id, zb_address_pan_id_ref_t *ref);
# 280 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_get_short_pan_id(zb_address_pan_id_ref_t pan_id_ref, zb_uint16_t *pan_id_p);
# 304 "../../../../../../../../external/zboss/include/zb_address.h"
zb_bool_t zb_address_cmp_pan_id_by_ref(zb_address_pan_id_ref_t pan_id_ref, zb_ext_pan_id_t pan_id);
# 336 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_update(zb_ieee_addr_t ieee_address, zb_uint16_t short_address, zb_bool_t lock, zb_address_ieee_ref_t *ref_p);
# 357 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_by_ref(zb_ieee_addr_t ieee_address, zb_uint16_t *short_address_p, zb_address_ieee_ref_t ref);
# 378 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_ieee_by_ref(zb_ieee_addr_t ieee_address, zb_address_ieee_ref_t ref);
# 401 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_short_by_ref(zb_uint16_t *short_address_p, zb_address_ieee_ref_t ref);
# 431 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_by_ieee(zb_ieee_addr_t ieee, zb_bool_t create, zb_bool_t lock, zb_address_ieee_ref_t *ref_p);
# 448 "../../../../../../../../external/zboss/include/zb_address.h"
zb_uint16_t zb_address_short_by_ieee(zb_ieee_addr_t ieee_address);
# 479 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_ieee_by_short(zb_uint16_t short_addr, zb_ieee_addr_t ieee_address);
# 512 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_by_short(zb_uint16_t short_address, zb_bool_t create, zb_bool_t lock, zb_address_ieee_ref_t *ref_p);
# 534 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_by_sorted_table_index(zb_ushort_t index, zb_address_ieee_ref_t *ref_p);
# 547 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_lock(zb_address_ieee_ref_t ref);
# 560 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_unlock(zb_address_ieee_ref_t ref);
# 569 "../../../../../../../../external/zboss/include/zb_address.h"
zb_ret_t zb_address_delete(zb_address_ieee_ref_t ref);
# 579 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_address_deinit(void);
# 608 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_ieee_addr_compress(zb_ieee_addr_t address, zb_ieee_addr_compressed_t *compressed_address);
# 632 "../../../../../../../../external/zboss/include/zb_address.h"
void zb_ieee_addr_decompress(zb_ieee_addr_t address, zb_ieee_addr_compressed_t *compressed_address);
# 54 "../../../../../../../../external/zboss/include/zboss_api_internal.h" 2
# 62 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
typedef struct zb_mac_pending_data_s
{
  zb_addr_u dst_addr;
  zb_uint8_t dst_addr_mode;
  zb_uint8_t pending_param;
}
zb_mac_pending_data_t;





typedef struct zb_aps_retrans_ent_s
{
  zb_uint16_t addr;
  zb_uint16_t clusterid;
  zb_uint8_t aps_counter;
  zb_uint8_t src_endpoint;
  zb_uint8_t dst_endpoint;
  zb_uint8_t buf;

  zb_bitfield_t aps_retries:4;
  zb_bitfield_t nwk_insecure:1;
  zb_bitfield_t state:3;
} __attribute__ ((packed)) zb_aps_retrans_ent_t;


typedef struct zb_cb_q_ent_s
{
  zb_callback_t func_ptr;
  zb_uint16_t user_param;
  zb_uint8_t param;
}
__attribute__ ((packed))
zb_cb_q_ent_t;




typedef struct zb_tm_q_ent_s
{
  zb_callback_t func;
  zb_time_t run_time;
  zb_uint8_t param;
  zb_uint8_t next_next; zb_uint8_t next_prev;
}
__attribute__ ((packed))
zb_tm_q_ent_t;






typedef struct zb_aps_installcode_storage_s
{
  zb_uint32_t nvram_offset:28;


  zb_bitfield_t nvram_page:4;
} __attribute__ ((packed)) zb_aps_installcode_storage_t;


typedef struct zb_aps_device_key_pair_array_s
{
  zb_uint32_t nvram_offset:27;



  zb_lbitfield_t outgoing_frame_counter:21;





  zb_uint32_t incoming_frame_counter;

} __attribute__ ((packed)) zb_aps_device_key_pair_array_t;






typedef struct zb_nwk_routing_s
{
  zb_bitfield_t used:1;
  zb_bitfield_t status:2;

  zb_bitfield_t many_to_one:1;

  zb_bitfield_t route_record_required:1;







  zb_bitfield_t expiry:6;







  zb_uint8_t next_hop_addr_ref;


  zb_uint16_t dest_addr;
} __attribute__ ((packed))
zb_nwk_routing_t;


typedef struct zb_aps_dup_tbl_ent_s
{
  zb_uint8_t addr_ref;
  zb_uint8_t counter;
  zb_bitfield_t clock:7;
  zb_bitfield_t is_unicast:1;
} __attribute__ ((packed)) zb_aps_dup_tbl_ent_t;





typedef struct zb_aps_bind_src_table_s
{
  zb_address_ieee_ref_t src_addr;
  zb_uint8_t src_end;
  zb_uint16_t cluster_id;
} __attribute__ ((packed)) zb_aps_bind_src_table_t;




typedef struct zb_aps_bind_long_dst_addr_s
{
  zb_address_ieee_ref_t dst_addr;
  zb_uint8_t dst_end;
} __attribute__ ((packed)) zb_aps_bind_long_dst_addr_t;
# 215 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
typedef struct zb_aps_bind_dst_table_s
{


  zb_uint8_t *trans_index;


  union
  {
    zb_uint16_t group_addr;
    zb_aps_bind_long_dst_addr_t long_addr;
  } u;




  zb_uint8_t align;

  zb_bitfield_t dst_addr_mode:3;


  zb_bitfield_t src_table_index:5;
} __attribute__ ((packed)) zb_aps_bind_dst_table_t;




typedef struct zb_neighbor_tbl_ent_s
{

  zb_bitfield_t used:1;
  zb_bitfield_t ext_neighbor:1;


  zb_bitfield_t device_type:2;


  zb_bitfield_t depth:4;





  zb_bitfield_t permit_joining:1;







  zb_bitfield_t rx_on_when_idle:1;
# 275 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
  zb_bitfield_t relationship:3;
# 288 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
  zb_bitfield_t need_rejoin:1;

  zb_bitfield_t dummy: 1;

  zb_bitfield_t keepalive_received:1;




  zb_uint8_t transmit_failure_cnt;


  zb_uint8_t lqi;


  zb_int8_t rssi;


  union {
    struct zb_ext_neighbor_s
    {

      zb_uint16_t short_addr;



      zb_ieee_addr_compressed_t long_addr;

      zb_uint8_t update_id;

      zb_bitfield_t panid_ref:5;

      zb_bitfield_t router_capacity:1;




      zb_bitfield_t end_device_capacity:1;




      zb_bitfield_t potential_parent:1;







      zb_bitfield_t logical_channel:5;


      zb_bitfield_t stack_profile:2;

      zb_bitfield_t reserved:1;

    } __attribute__ ((packed)) ext;
    struct zb_base_neighbor_s
    {
      zb_uint8_t key_seq_number;


      zb_address_ieee_ref_t addr_ref;
      zb_uint8_t nwk_ed_timeout;
# 375 "../../../../../../../../external/zboss/include/zboss_api_internal.h"
      zb_uint32_t incoming_frame_counter;


      zb_time_t time_to_expire;
    } __attribute__ ((packed)) base;
  } u;
} __attribute__ ((packed))
zb_neighbor_tbl_ent_t;
# 47 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_nwk.h" 1
# 52 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
typedef enum zb_nwk_broadcast_address_e
{
  ZB_NWK_BROADCAST_ALL_DEVICES = 0xFFFF,
  ZB_NWK_BROADCAST_RX_ON_WHEN_IDLE = 0xFFFD,
  ZB_NWK_BROADCAST_ROUTER_COORDINATOR = 0xFFFC,
  ZB_NWK_BROADCAST_LOW_POWER_ROUTER = 0xFFFB,

  ZB_NWK_BROADCAST_RESERVED = 0xFFF8
}
zb_nwk_broadcast_address_t;
# 73 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
typedef enum zb_nwk_device_type_e
{
  ZB_NWK_DEVICE_TYPE_COORDINATOR,
  ZB_NWK_DEVICE_TYPE_ROUTER,
  ZB_NWK_DEVICE_TYPE_ED,
  ZB_NWK_DEVICE_TYPE_NONE
}
zb_nwk_device_type_t;



typedef enum zb_nwk_leave_type_e
{
  ZB_NWK_LEAVE_TYPE_RESET = 0x00,
  ZB_NWK_LEAVE_TYPE_REJOIN = 0x01
} zb_nwk_leave_type_t;
# 126 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
typedef struct zb_nwk_pib_cache_s
{
  zb_uint16_t mac_short_address;

  zb_uint16_t mac_pan_id;


  zb_ieee_addr_t mac_extended_address;

  zb_uint8_t mac_association_permit;

  zb_uint8_t mac_rx_on_when_idle;

  zb_uint8_t phy_current_channel;
} zb_nwk_pib_cache_t;
# 158 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
zb_nwk_pib_cache_t *zb_nwk_get_pib_cache(void);
# 182 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
typedef struct zb_nlme_permit_joining_request_s
{
  zb_uint8_t permit_duration;

} __attribute__ ((packed))
zb_nlme_permit_joining_request_t;
# 200 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
void zb_nlme_permit_joining_request(zb_uint8_t param);






void zb_disable_nwk_security(void);




void zb_enable_nwk_security(void);
# 221 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
void zb_nwk_set_dst_ieee_policy(zb_bool_t put_always);
# 236 "../../../../../../../../external/zboss/include/zboss_api_nwk.h"
void zb_set_nbt_transmit_failure_threshold(zb_uint8_t transmit_failure_cnt);







void zb_set_nbt_transmit_failure_timeout(zb_uint8_t transmit_failure_timeout);
# 48 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_af.h" 1
# 53 "../../../../../../../../external/zboss/include/zboss_api_af.h"
typedef struct zb_af_node_desc_s
{
  zb_uint16_t node_desc_flags;
  zb_uint8_t mac_capability_flags;
  zb_uint16_t manufacturer_code;
  zb_uint8_t max_buf_size;
  zb_uint16_t max_incoming_transfer_size;
  zb_uint16_t server_mask;
  zb_uint16_t max_outgoing_transfer_size;
  zb_uint8_t desc_capability_field;
}
__attribute__ ((packed))
zb_af_node_desc_t;

typedef zb_nwk_device_type_t zb_logical_type_t;
# 85 "../../../../../../../../external/zboss/include/zboss_api_af.h"
enum zb_freq_band_e
{
  ZB_FREQ_BAND_868 = 1,
  ZB_FREQ_BAND_902 = 1 << 2,
  ZB_FREQ_BAND_2400 = 1 << 3
};




enum zb_server_mask_bit_e
{
  ZB_PRIMARY_TRUST_CENTER = 1,
  ZB_BACKUP_TRUST_CENTER = 1 << 1,
  ZB_PRIMARY_BINDING_TABLE_CENTER = 1 << 2,
  ZB_BACKUP_BINDING_TABLE_CENTER = 1 << 3,
  ZB_PRIMARY_DISCOVERY_CACHE = 1 << 4,
  ZB_BACKUP_DISCOVERY_CACHE = 1 << 5,
  ZB_NETWORK_MANAGER = 1 << 6
};




enum zb_desc_capability_e
{
  ZB_EXT_ACTIVE_EP_LIST = 1,
  ZB_EXT_SIMPLE_DESC_LIST = 1 <<1
};




typedef enum zb_current_power_mode_e
{
  ZB_POWER_MODE_SYNC_ON_WHEN_IDLE = 0,

  ZB_POWER_MODE_COME_ON_PERIODICALLY = 1,

  ZB_POWER_MODE_COME_ON_WHEN_STIMULATED = 2

}
zb_current_power_mode_t;




typedef enum zb_power_src_e
{
  ZB_POWER_SRC_CONSTATNT = 1,
  ZB_POWER_SRC_RECHARGEABLE_BATTERY = 1 << 1,
  ZB_POWER_SRC_DISPOSABLE_BATTERY = 1 << 2
}
zb_power_src_t;




typedef enum zb_power_source_level_e
{
  ZB_POWER_LEVEL_CRITICAL = 0,
  ZB_POWER_LEVEL_33 = 4,
  ZB_POWER_LEVEL_66 = 8,
  ZB_POWER_LEVEL_100 = 12
}
zb_power_source_level_t;





typedef struct zb_af_node_power_desc_s
{






  zb_uint16_t power_desc_flags;
} __attribute__ ((packed)) zb_af_node_power_desc_t;
# 201 "../../../../../../../../external/zboss/include/zboss_api_af.h"
typedef struct zb_af_simple_desc_1_1_s { zb_uint8_t endpoint; zb_uint16_t app_profile_id; zb_uint16_t app_device_id; zb_bitfield_t app_device_version:4; zb_bitfield_t reserved:4; zb_uint8_t app_input_cluster_count; zb_uint8_t app_output_cluster_count; zb_uint16_t app_cluster_list[1 + 1]; } __attribute__ ((packed)) zb_af_simple_desc_1_1_t;

typedef struct zb_af_simple_desc_8_9_s { zb_uint8_t endpoint; zb_uint16_t app_profile_id; zb_uint16_t app_device_id; zb_bitfield_t app_device_version:4; zb_bitfield_t reserved:4; zb_uint8_t app_input_cluster_count; zb_uint8_t app_output_cluster_count; zb_uint16_t app_cluster_list[8 + 9]; } __attribute__ ((packed)) zb_af_simple_desc_8_9_t;
# 221 "../../../../../../../../external/zboss/include/zboss_api_af.h"
void zb_set_simple_descriptor(zb_af_simple_desc_1_1_t *simple_desc,
                              zb_uint8_t endpoint, zb_uint16_t app_profile_id,
                              zb_uint16_t app_device_id, zb_bitfield_t app_device_version,
                              zb_uint8_t app_input_cluster_count, zb_uint8_t app_output_cluster_count);
# 238 "../../../../../../../../external/zboss/include/zboss_api_af.h"
void zb_set_input_cluster_id(zb_af_simple_desc_1_1_t *simple_desc, zb_uint8_t cluster_number, zb_uint16_t cluster_id);
# 251 "../../../../../../../../external/zboss/include/zboss_api_af.h"
void zb_set_output_cluster_id(zb_af_simple_desc_1_1_t *simple_desc, zb_uint8_t cluster_number, zb_uint16_t cluster_id);
# 263 "../../../../../../../../external/zboss/include/zboss_api_af.h"
void zb_set_default_ffd_descriptor_values(zb_logical_type_t device_type);
# 272 "../../../../../../../../external/zboss/include/zboss_api_af.h"
void zb_set_default_ed_descriptor_values(void);



enum zb_af_profile_id_e
{

  ZB_AF_ZDO_PROFILE_ID = 0x0000,

  ZB_AF_LEGACY_PROFILE1_ID = 0x0101,

  ZB_AF_LEGACY_PROFILE2_ID = 0x0102,

  ZB_AF_LEGACY_PROFILE3_ID = 0x0103,

  ZB_AF_HA_PROFILE_ID = 0x0104,

  ZB_AF_LEGACY_PROFILE4_ID = 0x0105,

  ZB_AF_LEGACY_PROFILE5_ID = 0x0106,

  ZB_AF_LEGACY_PROFILE6_ID = 0x0107,

  ZB_AF_LEGACY_PROFILE7_ID = 0x0108,

  ZB_AF_SE_PROFILE_ID = 0x0109,

  ZB_AF_ZLL_PROFILE_ID = 0xc05e,

  ZB_AF_WILDCARD_PROFILE_ID = 0xffff,

  ZB_AF_GP_PROFILE_ID = 0xA1E0
};




typedef enum zb_af_cmd_transmission_status_e
{
  ZB_AF_STATUS_NO_FREE_BUF,
}zb_af_cmd_transmission_status_t;


struct zb_zcl_reporting_info_s;
struct zb_zcl_cluster_desc_s;
# 325 "../../../../../../../../external/zboss/include/zboss_api_af.h"
typedef zb_uint8_t (*zb_device_handler_t)(zb_uint8_t param);





typedef struct zb_af_endpoint_desc_s
{
  zb_uint8_t ep_id;
  zb_uint16_t profile_id;
  zb_device_handler_t device_handler;





  zb_callback_t identify_handler;
  zb_uint8_t reseved_size;
  zb_voidp_t reserved_ptr;
  zb_uint8_t cluster_count;
  struct zb_zcl_cluster_desc_s *cluster_desc_list;
  zb_af_simple_desc_1_1_t *simple_desc;

  zb_uint8_t group_id_count;



  zb_uint8_t rep_info_count;



  struct zb_zcl_reporting_info_s *reporting_info;

  zb_uint8_t cvc_alarm_count;
  struct zb_zcl_cvc_alarm_variables_s *cvc_alarm_info;
}__attribute__ ((packed))
zb_af_endpoint_desc_t;






zb_af_endpoint_desc_t* zb_af_get_endpoint_desc(zb_uint8_t ep_id);
# 382 "../../../../../../../../external/zboss/include/zboss_api_af.h"
typedef struct zb_af_device_ctx_s
{
  zb_uint8_t ep_count;
  zb_af_endpoint_desc_t **ep_desc_list;
}__attribute__ ((packed))
zb_af_device_ctx_t;
# 681 "../../../../../../../../external/zboss/include/zboss_api_af.h"
zb_void_t zb_zcl_init_reporting_ctx(void);
zb_void_t zb_zcl_reset_reporting_ctx(void);
# 692 "../../../../../../../../external/zboss/include/zboss_api_af.h"
zb_void_t zb_af_register_device_ctx(zb_af_device_ctx_t *device_ctx);
# 721 "../../../../../../../../external/zboss/include/zboss_api_af.h"
typedef void (*zb_af_transmission_res_cb_t) (zb_uint8_t status);
# 49 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_zdo.h" 1
# 44 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
# 1 "../../../../../../../../external/zboss/include/zboss_api_zgp.h" 1
# 60 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef enum zb_zgp_app_id_e
{
  ZB_ZGP_APP_ID_0000 = 0x00,
  ZB_ZGP_APP_ID_0001 = 0x01,
  ZB_ZGP_APP_ID_0010 = 0x02,
  ZB_ZGP_APP_ID_INVALID = 0x07,
}
zb_zgp_app_id_t;





typedef union zb_zgpd_addr_u
{
  zb_uint32_t src_id;
  zb_ieee_addr_t ieee_addr;
} __attribute__ ((packed))
zb_zgpd_addr_t;

enum zb_zgp_endpoint_e
{
  ZB_ZGP_COMMUNICATION_ENDPOINT,
  ZB_ZGP_ALL_ENDPOINTS = 255
};






typedef struct zb_zgpd_id_s
{
  zb_uint8_t app_id;
  zb_uint8_t endpoint;
  zb_zgpd_addr_t addr;
} __attribute__ ((packed))
zb_zgpd_id_t;
# 136 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
enum zb_zgp_security_level_e
{
  ZB_ZGP_SEC_LEVEL_NO_SECURITY = 0x00,
  ZB_ZGP_SEC_LEVEL_REDUCED = 0x01,
  ZB_ZGP_SEC_LEVEL_FULL_NO_ENC = 0x02,
  ZB_ZGP_SEC_LEVEL_FULL_WITH_ENC = 0x03,

};
# 152 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
enum zb_zgp_security_key_type_e
{
  ZB_ZGP_SEC_KEY_TYPE_NO_KEY = 0x00,
  ZB_ZGP_SEC_KEY_TYPE_NWK = 0x01,
  ZB_ZGP_SEC_KEY_TYPE_GROUP = 0x02,
  ZB_ZGP_SEC_KEY_TYPE_GROUP_NWK_DERIVED = 0x03,
  ZB_ZGP_SEC_KEY_TYPE_ZGPD_INDIVIDUAL = 0x04,
  ZB_ZGP_SEC_KEY_TYPE_DERIVED_INDIVIDUAL = 0x07,
};
# 169 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef enum zb_zgpd_dev_id_e
{
  ZB_ZGP_SIMPLE_GEN_1_STATE_SWITCH_DEV_ID = 0x00,
  ZB_ZGP_ON_OFF_SWITCH_DEV_ID = 0x02,
  ZB_ZGP_LEVEL_CONTROL_SWITCH_DEV_ID = 0x03,

  ZB_ZGP_TEMPERATURE_SENSOR_DEV_ID = 0x30,
  ZB_ZGP_ENVIRONMENT_SENSOR_DEV_ID = 0x33,
  ZB_ZGP_MANUF_SPECIFIC_DEV_ID = 0xfe,
# 186 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
  ZB_ZGP_UNDEFINED_DEV_ID = 0xff,
}
zb_zgpd_dev_id_t;




typedef enum zb_zgpd_manuf_specific_dev_id_e
{



  ZB_ZGP_MS_DOOR_SENSOR_DEV_ID = 0x00,
  ZB_ZGP_MS_DOOR_WINDOW_SENSOR_DEV_ID = 0x01,
  ZB_ZGP_MS_LEAKAGE_SENSOR_DEV_ID = 0x02,
  ZB_ZGP_MS_HUMIDITY_SENSOR_DEV_ID = 0x03,
  ZB_ZGP_MS_MOTION_SENSOR_DEV_ID = 0x05,
  ZB_ZGP_MS_MOVEMENT_SENSOR_DEV_ID = 0x07,
  ZB_ZGP_MS_SMART_PLUG_DEV_ID = 0X08,
  ZB_ZGP_MS_KEY_FOB_DEV_ID = 0x0A,
  ZB_ZGP_MS_SMOKE_DETECTOR_DEV_ID = 0x0b,
  ZB_ZGP_MS_BED_SENSOR_DEV_ID = 0x0c,
  ZB_ZGP_MS_PARKING_SENSOR_DEV_ID = 0xc0,
}
zb_zgpd_manuf_specific_dev_id_t;
# 340 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef enum zgp_communication_mode_e
{
  ZGP_COMMUNICATION_MODE_FULL_UNICAST = 0,



  ZGP_COMMUNICATION_MODE_GROUPCAST_DERIVED = 1,
  ZGP_COMMUNICATION_MODE_GROUPCAST_PRECOMMISSIONED = 2,
  ZGP_COMMUNICATION_MODE_LIGHTWEIGHT_UNICAST = 3
} zgp_communication_mode_t;


typedef enum zgp_commissioning_exit_mode_e
{
  ZGP_COMMISSIONING_EXIT_MODE_ON_COMMISSIONING_WINDOW_EXPIRATION = (1<<0),
  ZGP_COMMISSIONING_EXIT_MODE_ON_PAIRING_SUCCESS = (1<<1),
  ZGP_COMMISSIONING_EXIT_MODE_ON_GP_PROXY_COMMISSIONING_MODE_EXIT = (1<<2),
  ZGP_COMMISSIONING_EXIT_MODE_ON_CWE_OR_PS = (ZGP_COMMISSIONING_EXIT_MODE_ON_COMMISSIONING_WINDOW_EXPIRATION |
                                                                     ZGP_COMMISSIONING_EXIT_MODE_ON_PAIRING_SUCCESS),
  ZGP_COMMISSIONING_EXIT_MODE_ON_CWE_OR_PCM = (ZGP_COMMISSIONING_EXIT_MODE_ON_COMMISSIONING_WINDOW_EXPIRATION |
                                                                     ZGP_COMMISSIONING_EXIT_MODE_ON_GP_PROXY_COMMISSIONING_MODE_EXIT),
  ZGP_COMMISSIONING_EXIT_MODE_ALL = (ZGP_COMMISSIONING_EXIT_MODE_ON_COMMISSIONING_WINDOW_EXPIRATION |
                                                                     ZGP_COMMISSIONING_EXIT_MODE_ON_PAIRING_SUCCESS |
                                                                     ZGP_COMMISSIONING_EXIT_MODE_ON_GP_PROXY_COMMISSIONING_MODE_EXIT)
} zgp_commissioning_exit_mode_t;
# 381 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef enum zb_zgp_comm_status_e
{

  ZB_ZGP_COMMISSIONING_COMPLETED,




  ZB_ZGP_COMMISSIONING_FAILED,

  ZB_ZGP_COMMISSIONING_TIMED_OUT,


  ZB_ZGP_COMMISSIONING_NO_MATCH_ERROR,



  ZB_ZGP_COMMISSIONING_INTERNAL_ERROR,



  ZB_ZGP_COMMISSIONING_CRITICAL_ERROR,

  ZB_ZGP_COMMISSIONING_CANCELLED_BY_USER,

  ZB_ZGP_ZGPD_DECOMMISSIONED,
}
zb_zgp_comm_status_t;
# 645 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
enum zb_zgpd_cmd_id_e
{
  ZB_GPDF_CMD_RECALL_SCENE0 = 0x10,
  ZB_GPDF_CMD_RECALL_SCENE1 = 0x11,
  ZB_GPDF_CMD_RECALL_SCENE2 = 0x12,
  ZB_GPDF_CMD_RECALL_SCENE3 = 0x13,
  ZB_GPDF_CMD_RECALL_SCENE4 = 0x14,
  ZB_GPDF_CMD_RECALL_SCENE5 = 0x15,
  ZB_GPDF_CMD_RECALL_SCENE6 = 0x16,
  ZB_GPDF_CMD_RECALL_SCENE7 = 0x17,




  ZB_GPDF_CMD_RECALL_SCENE8 = 0x18,
  ZB_GPDF_CMD_RECALL_SCENE9 = 0x19,
  ZB_GPDF_CMD_RECALL_SCENE10 = 0x1A,
  ZB_GPDF_CMD_RECALL_SCENE11 = 0x1B,




  ZB_GPDF_CMD_STORE_SCENE4 = 0x1C,
  ZB_GPDF_CMD_STORE_SCENE5 = 0x1D,
  ZB_GPDF_CMD_STORE_SCENE6 = 0x1E,
  ZB_GPDF_CMD_STORE_SCENE7 = 0x1F,

  ZB_GPDF_CMD_OFF = 0x20,
  ZB_GPDF_CMD_ON = 0x21,
  ZB_GPDF_CMD_TOGGLE = 0x22,

  ZB_GPDF_CMD_MOVE_UP = 0x30,
  ZB_GPDF_CMD_MOVE_DOWN = 0x31,
  ZB_GPDF_CMD_STEP_UP = 0x32,
  ZB_GPDF_CMD_STEP_DOWN = 0x33,
  ZB_GPDF_CMD_LC_STOP = 0x34,

  ZB_GPDF_CMD_MOVE_UP_W_ONOFF = 0x35,

  ZB_GPDF_CMD_MOVE_DOWN_W_ONOFF = 0x36,

  ZB_GPDF_CMD_STEP_UP_W_ONOFF = 0x37,

  ZB_GPDF_CMD_STEP_DOWN_W_ONOFF = 0x38,


  ZB_GPDF_CMD_MOVE_HUE_STOP = 0x40,
  ZB_GPDF_CMD_MOVE_HUE_UP = 0x41,
  ZB_GPDF_CMD_MOVE_HUE_DOWN = 0x42,
  ZB_GPDF_CMD_STEP_HUE_UP = 0x43,
  ZB_GPDF_CMD_STEP_HUE_DOWN = 0x44,
  ZB_GPDF_CMD_MOVE_SATURATION_STOP = 0x45,
  ZB_GPDF_CMD_MOVE_SATURATION_UP = 0x46,
  ZB_GPDF_CMD_MOVE_SATURATION_DOWN = 0x47,
  ZB_GPDF_CMD_STEP_SATURATION_UP = 0x48,
  ZB_GPDF_CMD_STEP_SATURATION_DOWN = 0x49,
  ZB_GPDF_CMD_MOVE_COLOR = 0x4A,
  ZB_GPDF_CMD_STEP_COLOR = 0x4B,

  ZB_GPDF_CMD_PRESS_1_OF_1 = 0x60,
  ZB_GPDF_CMD_RELEASE_1_OF_1 = 0x61,
  ZB_GPDF_CMD_PRESS_1_OF_2 = 0x62,
  ZB_GPDF_CMD_RELEASE_1_OF_2 = 0X63,

  ZB_GPDF_CMD_ATTR_REPORT = 0xA0,
  ZB_GPDF_CMD_MANUF_SPEC_ATTR_REPORT = 0xA1,
  ZB_GPDF_CMD_MULTI_CLUSTER_ATTR_REPORT = 0xA2,
  ZB_GPDF_CMD_MANUF_SPEC_MULTI_CLUSTER_ATTR_REPORT = 0xA3,
  ZB_GPDF_CMD_REQUEST_ATTRIBUTES = 0xA4,
  ZB_GPDF_CMD_READ_ATTR_RESP = 0xA5,

  ZB_GPDF_CMD_ZCL_TUNNELING_FROM_ZGPD = 0xA6,


  ZB_GPDF_CMD_MANUF_DEFINED_B0 = 0xB0,
  ZB_GPDF_CMD_MANUF_DEFINED_BF = 0xBF,

  ZB_GPDF_CMD_COMMISSIONING = 0xE0,
  ZB_GPDF_CMD_DECOMMISSIONING = 0xE1,
  ZB_GPDF_CMD_SUCCESS = 0xE2,
  ZB_GPDF_CMD_CHANNEL_REQUEST = 0xE3,


  ZB_GPDF_CMD_COMMISSIONING_REPLY = 0xF0,
  ZB_GPDF_CMD_WRITE_ATTRIBUTES = 0xF1,
  ZB_GPDF_CMD_READ_ATTRIBUTES = 0xF2,
  ZB_GPDF_CMD_CHANNEL_CONFIGURATION = 0xF3,

  ZB_GPDF_CMD_ZCL_TUNNELING_TO_ZGPD = 0xF6,
};
# 816 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef struct zb_gpdf_comm_params_s
{
  zb_uint8_t zgpd_device_id;
  zb_uint8_t options;
  zb_uint8_t ext_options;
  zb_uint8_t ms_extensions;
  zb_uint16_t manuf_model_id;
  zb_uint16_t manuf_id;


}
zb_gpdf_comm_params_t;





typedef struct zb_gpdf_comm_reply_s
{
  zb_uint8_t options;
  zb_uint16_t pan_id;
  zb_uint8_t security_key[16];
  zb_uint8_t key_mic[4];
  zb_uint32_t frame_counter;
}
zb_gpdf_comm_reply_t;
# 1022 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef struct zb_gpdf_attr_report_fld_s
{
  zb_uint16_t attr_id;
  zb_uint8_t attr_type;
  zb_voidp_t data_p;
}
zb_gpdf_attr_report_fld_t;
# 1289 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_start_commissioning(zb_time_t timeout);
# 1300 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_stop_commissioning(void);
# 1315 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_accept_commissioning(zb_bool_t accept);
# 1333 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_delete_zgpd(zb_uint8_t buf_ref, zb_zgpd_id_t *zgpd_id);





void zb_zgps_delete_all_zgpd(void);




void zb_zgps_get_diag_data(zb_zgpd_id_t *zgpd_id, zb_uint8_t *lqi, zb_int8_t *rssi);
# 1379 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_set_security_level(zb_uint_t level);
# 1388 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgp_set_shared_security_key_type(zb_uint_t key_type);
# 1397 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgp_set_shared_security_key(zb_uint8_t *key);
# 1406 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_set_commissioning_exit_mode(zb_uint_t cem);
# 1417 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgps_set_communication_mode(zgp_communication_mode_t mode);
# 1439 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
typedef enum zgp_proxy_comm_mode_action_e
{
  ZGP_PROXY_COMM_MODE_LEAVE,
  ZGP_PROXY_COMM_MODE_ENTER
} zgp_proxy_comm_mode_action_t;

typedef enum zgp_proxy_comm_mode_ch_present_e
{
  ZGP_PROXY_COMM_MODE_CHANNEL_PRESENT,
  ZGP_PROXY_COMM_MODE_CHANNEL_NOT_PRESENT
} zgp_proxy_comm_mode_ch_present_t;

typedef enum zgp_proxy_comm_mode_communication_e
{
  ZGP_PROXY_COMM_MODE_BROADCAST,
  ZGP_PROXY_COMM_MODE_UNICAST
} zgp_proxy_comm_mode_communication_t;
# 1479 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgp_cluster_proxy_commissioning_mode_req(zb_uint8_t param,
                                                 zb_uint8_t options,
                                                 zb_uint16_t comm_wind,
                                                 zb_uint8_t channel,
                                                 zb_callback_t cb);
# 1495 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zgp_cluster_send_proxy_commissioning_mode_enter_req(zb_uint8_t param,
                                                         zb_uint8_t exit_mode,
                                                         zb_uint16_t comm_window,
                                                         zb_callback_t cb);
# 1508 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zgp_cluster_send_proxy_commissioning_mode_leave_req(zb_uint8_t param, zb_callback_t cb);
# 1552 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zb_zgp_cluster_gp_pairing_req(zb_uint8_t param,
                                   zb_uint16_t dst_addr,
                                   zb_uint8_t dst_addr_mode,
                                   zb_uint32_t options,
                                   zb_zgpd_addr_t gpd_id,
                                   zb_uint8_t endpoint,
                                   zb_uint8_t dev_id,
                                   zb_uint32_t sec_frame_counter,
                                   zb_uint8_t *key,
                                   zb_uint16_t assigned_alias,
                                   zb_uint8_t frwd_radius,
                                   zb_uint16_t group_id,
                                   zb_callback_t cb);
# 1580 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zgp_cluster_send_gp_sink_table_request(zb_uint8_t buf_ref,
                                            zb_uint16_t dst_addr,
                                            zb_uint8_t dst_addr_mode,
                                            zb_uint8_t options,
                                            zb_zgpd_id_t *zgpd_id,
                                            zb_uint8_t index,
                                            zb_callback_t cb);
# 1602 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zgp_cluster_send_gp_proxy_table_request(zb_uint8_t buf_ref,
                                             zb_uint16_t dst_addr,
                                             zb_uint8_t dst_addr_mode,
                                             zb_uint8_t options,
                                             zb_zgpd_id_t *zgpd_id,
                                             zb_uint8_t index,
                                             zb_callback_t cb);

typedef struct zb_zgp_cluster_list_s
{
  zb_uint8_t server_cl_num;
  zb_uint8_t client_cl_num;
  zb_uint16_t server_clusters[2];
  zb_uint16_t client_clusters[2];
}
__attribute__ ((packed)) zb_zgp_cluster_list_t;

typedef struct zgp_pair_group_list_s
{
  zb_uint16_t sink_group;
  zb_uint16_t alias;
}
__attribute__ ((packed)) zgp_pair_group_list_t;

typedef struct zgp_tbl_ent_s
{
  zb_zgpd_addr_t zgpd_id;
  zb_uint16_t options;
  zb_uint16_t zgpd_assigned_alias;


  zb_uint32_t security_counter;
  zb_uint8_t zgpd_key[16];
  zb_uint8_t endpoint;
  zb_uint8_t sec_options;
  zb_uint8_t groupcast_radius;

  zb_uint8_t is_sink;

  union
  {
    struct zgp_proxy_tbl_ent_s
    {
      zb_uint16_t ext_options;
      struct zgp_lwsink_addr_list_s
      {
        zb_address_ieee_ref_t addr_ref;
      } lwsaddr[2];
      zgp_pair_group_list_t sgrp[2];
    } proxy;
    struct zgp_sink_tbl_ent_s
    {
      zb_uint8_t device_id;
      zgp_pair_group_list_t sgrp[2];
      zb_uint8_t match_dev_tbl_idx;





      zb_ieee_addr_t ieee_addr;
    } sink;
  } u;
} zgp_tbl_ent_t;
# 1728 "../../../../../../../../external/zboss/include/zboss_api_zgp.h"
void zgp_gp_set_shared_security_key_type(enum zb_zgp_security_key_type_e type);
# 45 "../../../../../../../../external/zboss/include/zboss_api_zdo.h" 2
# 53 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef enum zb_zdp_status_e
{

  ZB_ZDP_STATUS_SUCCESS = 0x00,

  ZB_ZDP_STATUS_INV_REQUESTTYPE = 0x80,



  ZB_ZDP_STATUS_DEVICE_NOT_FOUND = 0x81,

  ZB_ZDP_STATUS_INVALID_EP = 0x82,

  ZB_ZDP_STATUS_NOT_ACTIVE = 0x83,

  ZB_ZDP_STATUS_NOT_SUPPORTED = 0x84,

  ZB_ZDP_STATUS_TIMEOUT = 0x85,


  ZB_ZDP_STATUS_NO_MATCH = 0x86,



  ZB_ZDP_STATUS_NO_ENTRY = 0x88,

  ZB_ZDP_STATUS_NO_DESCRIPTOR = 0x89,

  ZB_ZDP_STATUS_INSUFFICIENT_SPACE = 0x8a,

  ZB_ZDP_STATUS_NOT_PERMITTED = 0x8b,

  ZB_ZDP_STATUS_TABLE_FULL = 0x8c,



  ZB_ZDP_STATUS_NOT_AUTHORIZED = 0x8d,

  ZB_ZDP_STATUS_TIMEOUT_BY_STACK = 0xff,
}
zb_zdp_status_t;
# 103 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef enum zb_zdo_app_signal_type_e
{
  ZB_ZDO_SIGNAL_DEFAULT_START,
# 120 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_SKIP_STARTUP,
# 142 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_DEVICE_ANNCE,
# 156 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_LEAVE,
# 170 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_ERROR,
# 181 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_DEVICE_FIRST_START,
# 199 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_DEVICE_REBOOT,
# 222 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_TOUCHLINK_NWK_STARTED,
# 237 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_TOUCHLINK_NWK_JOINED_ROUTER,
# 252 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_TOUCHLINK,
# 274 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_STEERING,
# 286 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_FORMATION,
# 298 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_FINDING_AND_BINDING_TARGET_FINISHED,
# 310 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_FINDING_AND_BINDING_INITIATOR_FINISHED,
# 329 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_TOUCHLINK_TARGET,
# 341 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_BDB_SIGNAL_TOUCHLINK_NWK,
# 357 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_NWK_SIGNAL_DEVICE_ASSOCIATED,
# 370 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_LEAVE_INDICATION,
# 390 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZGP_SIGNAL_COMMISSIONING,
# 408 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_COMMON_SIGNAL_CAN_SLEEP,
# 422 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_PRODUCTION_CONFIG_READY,
# 436 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_NWK_SIGNAL_NO_ACTIVE_LINKS_LEFT,
# 451 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_DEVICE_UPDATE,
# 468 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_SIGNAL_DEVICE_AUTHORIZED,
# 486 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  ZB_ZDO_APP_SIGNAL_COUNT
} zb_zdo_app_signal_type_t;

typedef zb_zdo_app_signal_type_t zb_zdo_app_signal_t;
# 511 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_signal_leave_params_s
{
  zb_nwk_leave_type_t leave_type;
} zb_zdo_signal_leave_params_t;







typedef struct zb_zdo_signal_leave_indication_params_s
{
  zb_ieee_addr_t device_addr;
  zb_uint8_t rejoin;
} zb_zdo_signal_leave_indication_params_t;
# 541 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zgp_signal_commissioning_params_s
{
  zb_zgpd_id_t zgpd_id;
  zb_zgp_comm_status_t result;
} zb_zgp_signal_commissioning_params_t;
# 555 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_nwk_signal_device_associated_params_s
{
  zb_ieee_addr_t device_addr;
} zb_nwk_signal_device_associated_params_t;







typedef struct zb_zdo_signal_device_annce_params_s
{
  zb_uint16_t device_short_addr;
} zb_zdo_signal_device_annce_params_t;



typedef struct zb_bdb_signal_touchlink_nwk_started_params_s
{
  zb_ieee_addr_t device_ieee_addr;
  zb_uint8_t endpoint;
  zb_uint16_t profile_id;
} zb_bdb_signal_touchlink_nwk_started_params_t;

typedef struct zb_bdb_signal_touchlink_nwk_joined_router_s
{
  zb_ieee_addr_t device_ieee_addr;
  zb_uint8_t endpoint;
  zb_uint16_t profile_id;
} zb_bdb_signal_touchlink_nwk_joined_router_t;
# 594 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_signal_can_sleep_params_s
{
  zb_uint32_t sleep_tmo;
} zb_zdo_signal_can_sleep_params_t;




typedef enum zb_zdo_fb_initiator_finished_status_e
{

  ZB_ZDO_FB_INITIATOR_STATUS_SUCCESS = 0,


  ZB_ZDO_FB_INITIATOR_STATUS_CANCEL,


  ZB_ZDO_FB_INITIATOR_STATUS_ALARM,


  ZB_ZDO_FB_INITIATOR_STATUS_ERROR
} zb_zdo_fb_initiator_finished_status_t;




typedef struct zb_zdo_signal_fb_initiator_finished_params_s
{

  zb_zdo_fb_initiator_finished_status_t status;
} zb_zdo_signal_fb_initiator_finished_params_t;




typedef struct zb_zdo_signal_device_update_params_s
{

  zb_ieee_addr_t long_addr;


  zb_uint16_t short_addr;
# 648 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
  zb_uint8_t status;
} zb_zdo_signal_device_update_params_t;






typedef enum zb_zdo_authorization_type_e
{

  ZB_ZDO_AUTHORIZATION_TYPE_LEGACY,


  ZB_ZDO_AUTHORIZATION_TYPE_R21_TCLK
}
zb_zdo_authorization_type_t;






typedef enum zb_zdo_legacy_device_authorization_status_e
{

  ZB_ZDO_LEGACY_DEVICE_AUTHORIZATION_SUCCESS,


  ZB_ZDO_LEGACY_DEVICE_AUTHORIZATION_FAILED
}
zb_zdo_legacy_device_authorization_status_t;






typedef enum zb_zdo_tclk_authorization_status_e
{

  ZB_ZDO_TCLK_AUTHORIZATION_SUCCESS,


  ZB_ZDO_TCLK_AUTHORIZATION_TIMEOUT,


  ZB_ZDO_TCLK_AUTHORIZATION_FAILED
}
zb_zdo_tclk_authorization_status_t;




typedef struct zb_zdo_signal_device_authorized_params_s
{

  zb_ieee_addr_t long_addr;


  zb_uint16_t short_addr;




  zb_uint8_t authorization_type;




  zb_uint8_t authorization_status;
} zb_zdo_signal_device_authorized_params_t;


typedef struct zb_zdo_app_signal_hdr_s
{

  zb_uint32_t sig_type;
} zb_zdo_app_signal_hdr_t;

typedef zb_zdo_app_signal_hdr_t zb_zdo_app_event_t;







typedef struct zb_zdo_callback_info_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zdo_callback_info_t;

typedef struct zb_zdo_default_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zdo_default_resp_t;
# 775 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_zdo_app_signal_type_t zb_get_app_signal(zb_uint8_t param, zb_zdo_app_signal_hdr_t **sg_p);
# 807 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_void_t zb_zdo_get_diag_data(zb_uint16_t short_address, zb_uint8_t *lqi, zb_int8_t *rssi);
# 829 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_nwk_addr_req_s
{
  zb_ieee_addr_t ieee_addr;

  zb_uint8_t request_type;


  zb_uint8_t start_index;




} __attribute__ ((packed)) zb_zdo_nwk_addr_req_t;


typedef struct zb_zdo_nwk_addr_req_param_s
{
  zb_uint16_t dst_addr;
  zb_ieee_addr_t ieee_addr;

  zb_uint8_t request_type;


  zb_uint8_t start_index;




}
zb_zdo_nwk_addr_req_param_t;


typedef struct zb_zdo_nwk_addr_resp_head_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_ieee_addr_t ieee_addr;
  zb_uint16_t nwk_addr;
}
__attribute__ ((packed))
zb_zdo_nwk_addr_resp_head_t;


typedef struct zb_zdo_nwk_addr_resp_ext_s
{
  zb_uint8_t num_assoc_dev;
}
__attribute__ ((packed))
zb_zdo_nwk_addr_resp_ext_t;


typedef struct zb_zdo_nwk_addr_resp_ext2_s
{
  zb_uint8_t start_index;
}
__attribute__ ((packed))
zb_zdo_nwk_addr_resp_ext2_t;
# 943 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_nwk_addr_req(zb_uint8_t param, zb_callback_t cb);
# 953 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_initiate_nwk_addr_req(zb_uint8_t param, zb_ieee_addr_t ieee_addr);

void zb_zdo_initiate_nwk_addr_req_2param(zb_uint8_t param, zb_uint16_t user_param);






typedef struct zb_zdo_ieee_addr_req_s
{
  zb_uint16_t nwk_addr;

  zb_uint8_t request_type;


  zb_uint8_t start_index;




} __attribute__ ((packed)) zb_zdo_ieee_addr_req_t;


typedef struct zb_zdo_ieee_addr_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_ieee_addr_t ieee_addr_remote_dev;
  zb_uint16_t nwk_addr_remote_dev;
}
__attribute__ ((packed))
zb_zdo_ieee_addr_resp_t;


typedef struct zb_zdo_ieee_addr_resp_ext_s
{
  zb_uint8_t num_assoc_dev;
}
__attribute__ ((packed))
zb_zdo_ieee_addr_resp_ext_t;


typedef struct zb_zdo_ieee_addr_resp_ext2_s
{
  zb_uint8_t start_index;
}
__attribute__ ((packed))
zb_zdo_ieee_addr_resp_ext2_t;
# 1057 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_ieee_addr_req(zb_uint8_t param, zb_callback_t cb);



zb_uint8_t zb_zdo_initiate_ieee_addr_req(zb_uint8_t param, zb_uint16_t nwk_addr);
# 1075 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_node_desc_req_s
{
  zb_uint16_t nwk_addr;

} __attribute__ ((packed)) zb_zdo_node_desc_req_t;



typedef struct zb_zdo_desc_resp_hdr_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint16_t nwk_addr;
} __attribute__ ((packed))
zb_zdo_desc_resp_hdr_t;


typedef struct zb_zdo_node_desc_resp_s
{
  zb_zdo_desc_resp_hdr_t hdr;
  zb_af_node_desc_t node_desc;
} __attribute__ ((packed))
zb_zdo_node_desc_resp_t;


typedef struct zb_zdo_simple_desc_resp_hdr_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint16_t nwk_addr;
  zb_uint8_t length;
} __attribute__ ((packed))
zb_zdo_simple_desc_resp_hdr_t;
# 1116 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_simple_desc_resp_s
{
  zb_zdo_simple_desc_resp_hdr_t hdr;
  zb_af_simple_desc_1_1_t simple_desc;
} __attribute__ ((packed))
zb_zdo_simple_desc_resp_t;


typedef struct zb_zdo_child_info_s
{
  zb_ieee_addr_t ext_addr;

}__attribute__ ((packed))
zb_zdo_child_info_t;






typedef struct zb_zdo_parent_annce_s
{
  zb_uint8_t tsn;
  zb_uint8_t num_of_children;
} __attribute__ ((packed))
zb_zdo_parent_annce_t;



typedef struct zb_zdo_parent_annce_rsp_hdr_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint8_t num_of_children;
} __attribute__ ((packed))
zb_zdo_parent_annce_rsp_hdr_t;


typedef struct zb_zdo_parent_annce_rsp_s
{
  zb_zdo_parent_annce_rsp_hdr_t hdr;
} __attribute__ ((packed))
zb_zdo_parent_annce_rsp_t;


typedef struct zb_zdo_power_desc_resp_s
{
  zb_zdo_desc_resp_hdr_t hdr;
  zb_af_node_power_desc_t power_desc;
} __attribute__ ((packed))
zb_zdo_power_desc_resp_t;
# 1181 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_node_desc_req(zb_uint8_t param, zb_callback_t cb);






typedef struct zb_zdo_power_desc_req_s
{
  zb_uint16_t nwk_addr;

} __attribute__ ((packed)) zb_zdo_power_desc_req_t;
# 1207 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_power_desc_req(zb_uint8_t param, zb_callback_t cb);







typedef struct zb_zdo_simple_desc_req_s
{
  zb_uint16_t nwk_addr;

  zb_uint8_t endpoint;
} __attribute__ ((packed)) zb_zdo_simple_desc_req_t;
# 1234 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_simple_desc_req(zb_uint8_t param, zb_callback_t cb);






typedef struct zb_zdo_active_ep_req_s
{
  zb_uint16_t nwk_addr;

} __attribute__ ((packed)) zb_zdo_active_ep_req_t;



typedef struct zb_zdo_ep_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint16_t nwk_addr;
  zb_uint8_t ep_count;
}
__attribute__ ((packed))
zb_zdo_ep_resp_t;
# 1272 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_active_ep_req(zb_uint8_t param, zb_callback_t cb);





typedef struct zb_zdo_match_desc_param_s
{
  zb_uint16_t nwk_addr;

  zb_uint16_t addr_of_interest;

  zb_uint16_t profile_id;

  zb_uint8_t num_in_clusters;


  zb_uint8_t num_out_clusters;


  zb_uint16_t cluster_list[1];
# 1308 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
}
__attribute__ ((packed))
zb_zdo_match_desc_param_t;


typedef struct zb_zdo_match_desc_req_head_s
{
  zb_uint16_t nwk_addr;

  zb_uint16_t profile_id;

  zb_uint8_t num_in_clusters;


}
__attribute__ ((packed))
zb_zdo_match_desc_req_head_t;


typedef struct zb_zdo_match_desc_req_tail_s
{
  zb_uint8_t num_out_clusters;


}
__attribute__ ((packed))
zb_zdo_match_desc_req_tail_t;




typedef struct zb_zdo_match_desc_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint16_t nwk_addr;
  zb_uint8_t match_len;

}
__attribute__ ((packed))
zb_zdo_match_desc_resp_t;
# 1366 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_match_desc_req(zb_uint8_t param, zb_callback_t cb);






typedef struct zb_zdo_system_server_discovery_req_s
{
  zb_uint16_t server_mask;
}
__attribute__ ((packed))
zb_zdo_system_server_discovery_req_t;




typedef zb_zdo_system_server_discovery_req_t zb_zdo_system_server_discovery_param_t;





typedef struct zb_zdo_system_server_discovery_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint16_t server_mask;
}
__attribute__ ((packed))
zb_zdo_system_server_discovery_resp_t;
# 1413 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_system_server_discovery_req(zb_uint8_t param, zb_callback_t cb);
# 1423 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_mgmt_nwk_update_req_hdr_s
{
  zb_uint32_t scan_channels;
  zb_uint8_t scan_duration;


}
__attribute__ ((packed))
zb_zdo_mgmt_nwk_update_req_hdr_t;


typedef struct zb_zdo_mgmt_nwk_update_req_s
{
  zb_zdo_mgmt_nwk_update_req_hdr_t hdr;
  zb_uint8_t scan_count;

  zb_uint8_t update_id;



  zb_uint16_t manager_addr;




  zb_uint16_t dst_addr;
}
__attribute__ ((packed))
zb_zdo_mgmt_nwk_update_req_t;



typedef struct zb_zdo_mgmt_nwk_update_notify_hdr_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint32_t scanned_channels;
  zb_uint16_t total_transmissions;
  zb_uint16_t transmission_failures;

  zb_uint8_t scanned_channels_list_count;

}
__attribute__ ((packed))
zb_zdo_mgmt_nwk_update_notify_hdr_t;


typedef struct zb_zdo_mgmt_nwk_update_notify_param_s
{
  zb_zdo_mgmt_nwk_update_notify_hdr_t hdr;
  zb_uint8_t energy_values[(26 - 11 + 1)];
  zb_uint16_t dst_addr;
  zb_uint8_t tsn;
}
zb_zdo_mgmt_nwk_update_notify_param_t;
# 1537 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_mgmt_nwk_update_req(zb_uint8_t param, zb_callback_t cb);





typedef struct zb_zdo_mgmt_lqi_param_s
{
  zb_uint8_t start_index;

  zb_uint16_t dst_addr;
}
zb_zdo_mgmt_lqi_param_t;




typedef struct zb_zdo_mgmt_lqi_req_s
{
  zb_uint8_t start_index;

}
__attribute__ ((packed))
zb_zdo_mgmt_lqi_req_t;




typedef struct zb_zdo_mgmt_lqi_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint8_t neighbor_table_entries;

  zb_uint8_t start_index;

  zb_uint8_t neighbor_table_list_count;

}
__attribute__ ((packed))
zb_zdo_mgmt_lqi_resp_t;
# 1640 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_neighbor_table_record_s
{
  zb_ext_pan_id_t ext_pan_id;

  zb_ieee_addr_t ext_addr;

  zb_uint16_t network_addr;

  zb_uint8_t type_flags;

  zb_uint8_t permit_join;

  zb_uint8_t depth;
  zb_uint8_t lqi;

}
__attribute__ ((packed))
zb_zdo_neighbor_table_record_t;
# 1713 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_mgmt_lqi_req(zb_uint8_t param, zb_callback_t cb);


typedef struct zb_zdo_routing_table_record_s
{
  zb_uint16_t dest_addr;

  zb_uint8_t flags;
  zb_uint16_t next_hop_addr;

}
__attribute__ ((packed))
zb_zdo_routing_table_record_t;
# 1739 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef enum zb_bind_dst_addr_mode_e
{
  ZB_BIND_DST_ADDR_MODE_16_BIT_GROUP = 0x01,

  ZB_BIND_DST_ADDR_MODE_64_BIT_EXTENDED = 0x03,

} zb_bind_dst_addr_mode_t;




typedef struct zb_zdo_mgmt_bind_param_s
{
  zb_uint8_t start_index;

  zb_uint16_t dst_addr;
}
zb_zdo_mgmt_bind_param_t;




typedef struct zb_zdo_mgmt_bind_req_s
{
  zb_uint8_t start_index;

}
__attribute__ ((packed))
zb_zdo_mgmt_bind_req_t;




typedef struct zb_zdo_mgmt_bind_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
  zb_uint8_t binding_table_entries;

  zb_uint8_t start_index;

  zb_uint8_t binding_table_list_count;

}
__attribute__ ((packed))
zb_zdo_mgmt_bind_resp_t;




typedef struct zb_zdo_binding_table_record_s
{
  zb_ieee_addr_t src_address;
  zb_uint8_t src_endp;
  zb_uint16_t cluster_id;


  zb_uint8_t dst_addr_mode;
  zb_addr_u dst_address;


  zb_uint8_t dst_endp;





}
__attribute__ ((packed))
zb_zdo_binding_table_record_t;
# 1819 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_mgmt_bind_req(zb_uint8_t param, zb_callback_t cb);





void zdo_mgmt_bind_resp(zb_uint8_t param);







typedef struct zb_zdo_bind_req_param_s
{
  zb_ieee_addr_t src_address;
  zb_uint8_t src_endp;
  zb_uint16_t cluster_id;

  zb_uint8_t dst_addr_mode;
  zb_addr_u dst_address;

  zb_uint8_t dst_endp;





  zb_uint16_t req_dst_addr;
}
zb_zdo_bind_req_param_t;





typedef struct zb_zdo_bind_req_head_s
{
  zb_ieee_addr_t src_address;
  zb_uint8_t src_endp;
  zb_uint16_t cluster_id;

  zb_uint8_t dst_addr_mode;
}
__attribute__ ((packed))
zb_zdo_bind_req_head_t;




typedef struct zb_zdo_bind_req_tail_1_s
{
  zb_uint16_t dst_addr;

}
__attribute__ ((packed))
zb_zdo_bind_req_tail_1_t;




typedef struct zb_zdo_bind_req_tail_2_s
{
  zb_ieee_addr_t dst_addr;

  zb_uint8_t dst_endp;

}
__attribute__ ((packed))
zb_zdo_bind_req_tail_2_t;


typedef struct zb_zdo_bind_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
}
__attribute__ ((packed))
zb_zdo_bind_resp_t;
# 1949 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_bind_req(zb_uint8_t param, zb_callback_t cb);
# 2000 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_unbind_req(zb_uint8_t param, zb_callback_t cb);
# 2010 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_bool_t zb_zdo_find_bind_src(zb_uint8_t src_end, zb_uint16_t cluster_id);
# 2030 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_mgmt_leave_param_s
{
  zb_ieee_addr_t device_address;
  zb_uint16_t dst_addr;

  zb_bitfield_t reserved:6;
  zb_bitfield_t remove_children:1;
  zb_bitfield_t rejoin:1;
}
__attribute__ ((packed))
zb_zdo_mgmt_leave_param_t;




typedef struct zb_zdo_mgmt_leave_req_s
{
  zb_ieee_addr_t device_address;
  zb_bitfield_t reserved:6;
  zb_bitfield_t remove_children:1;
  zb_bitfield_t rejoin:1;
}
__attribute__ ((packed))
zb_zdo_mgmt_leave_req_t;




typedef struct zb_zdo_mgmt_leave_res_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
}
__attribute__ ((packed))
zb_zdo_mgmt_leave_res_t;
# 2103 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zdo_mgmt_leave_req(zb_uint8_t param, zb_callback_t cb);
# 2114 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_end_device_bind_req_head_s
{
  zb_uint16_t binding_target;



  zb_ieee_addr_t src_ieee_addr;
  zb_uint8_t src_endp;
  zb_uint16_t profile_id;


  zb_uint8_t num_in_cluster;


}
__attribute__ ((packed))
zb_zdo_end_device_bind_req_head_t;




typedef struct zb_zdo_end_device_bind_req_tail_s
{
  zb_uint8_t num_out_cluster;

}
__attribute__ ((packed))
zb_zdo_end_device_bind_req_tail_t;




typedef struct zb_end_device_bind_req_param_s
{
  zb_uint16_t dst_addr;
  zb_zdo_end_device_bind_req_head_t head_param;
  zb_zdo_end_device_bind_req_tail_t tail_param;
  zb_uint16_t cluster_list[1];

} __attribute__ ((packed))
zb_end_device_bind_req_param_t;
# 2163 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_end_device_bind_req(zb_uint8_t param, zb_callback_t cb);





typedef struct zb_zdo_end_device_bind_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
}
__attribute__ ((packed))
zb_zdo_end_device_bind_resp_t;
# 2185 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_mgmt_permit_joining_req_s
{
  zb_uint8_t permit_duration;


  zb_uint8_t tc_significance;





} __attribute__ ((packed))
zb_zdo_mgmt_permit_joining_req_t;


typedef struct zb_zdo_mgmt_permit_joining_req_param_s
{
  zb_uint16_t dest_addr;
  zb_uint8_t permit_duration;


  zb_uint8_t tc_significance;






} __attribute__ ((packed))
zb_zdo_mgmt_permit_joining_req_param_t;
# 2227 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_uint8_t zb_zdo_mgmt_permit_joining_req(zb_uint8_t param, zb_callback_t cb);



typedef struct zb_zdo_mgmt_permit_joining_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
}
__attribute__ ((packed))
zb_zdo_mgmt_permit_joining_resp_t;


typedef struct zb_zdo_not_supported_resp_s
{
  zb_uint8_t tsn;
  zb_uint8_t status;
}
__attribute__ ((packed))
zb_zdo_not_supported_resp_t;
# 2267 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_add_group_req(zb_uint8_t param);
# 2276 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_remove_group_req(zb_uint8_t param);
# 2285 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_remove_all_groups_req(zb_uint8_t param);
# 2294 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_get_group_membership_req(zb_uint8_t param);
# 2305 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
typedef struct zb_zdo_device_annce_s
{
  zb_uint8_t tsn;
  zb_uint16_t nwk_addr;
  zb_ieee_addr_t ieee_addr;
  zb_uint8_t capability;
} __attribute__ ((packed)) zb_zdo_device_annce_t;





typedef struct zb_nlme_leave_indication_s
{
  zb_ieee_addr_t device_address;

  zb_uint8_t rejoin;
} __attribute__ ((packed))
zb_nlme_leave_indication_t;
# 2338 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_pim_permit_turbo_poll(zb_uint8_t permit);







void zb_zdo_pim_start_turbo_poll_packets(zb_uint8_t n_packets);





void zb_zdo_pim_start_turbo_poll_continuous(zb_time_t turbo_poll_timeout_ms);






void zb_zdo_pim_turbo_poll_continuous_leave(zb_uint8_t param);
# 2370 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_pim_set_long_poll_interval(zb_time_t ms);





zb_time_t zb_zdo_pim_get_long_poll_interval_ms(void);
# 2401 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_ret_t zb_zdo_rejoin_backoff_start(zb_bool_t insecure_rejoin);


zb_void_t zb_zdo_rejoin_backoff_continue(zb_uint8_t param);


zb_bool_t zb_zdo_rejoin_backoff_force(void);


zb_bool_t zb_zdo_rejoin_backoff_is_running(void);


zb_void_t zb_zdo_rejoin_backoff_cancel(void);
# 2424 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
zb_void_t zb_zdo_touchlink_set_master_key(zb_uint8_t *key);





zb_void_t zb_zdo_touchlink_set_nwk_channel(zb_uint8_t channel);





zb_void_t zb_zdo_touchlink_set_rssi_threshold(zb_uint8_t rssi_threshold);





zb_uint8_t zb_zdo_touchlink_get_rssi_threshold(zb_void_t);





zb_void_t zb_zdo_touchlink_set_rssi_correction(zb_uint8_t rssi_correction);





zb_uint8_t zb_zdo_touchlink_get_rssi_correction(zb_void_t);
# 2467 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_zdo_set_tc_standard_distributed_key(zb_uint8_t *key_ptr);
# 2542 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_af_set_data_indication(zb_device_handler_t cb);
# 2553 "../../../../../../../../external/zboss/include/zboss_api_zdo.h"
void zb_bdb_reset_via_local_action(zb_uint8_t param);
# 50 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zboss_api_aps.h" 1
# 49 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
typedef enum zb_aps_aib_attr_id_e
{
  ZB_APS_AIB_BINDING = 0xc1,

  ZB_APS_AIB_DESIGNATED_COORD = 0xc2,

  ZB_APS_AIB_CHANNEL_MASK = 0xc3,

  ZB_APS_AIB_USE_EXT_PANID = 0xc4,
  ZB_APS_AIB_GROUP_TABLE = 0xc5,
  ZB_APS_AIB_NONMEMBER_RADIUS = 0xc6,

  ZB_APS_AIB_PERMISSION_CONFIG = 0xc7,
  ZB_APS_AIB_USE_INSECURE_JOIN = 0xc8,
  ZB_APS_AIB_INTERFRAME_DELAY = 0xc9,


  ZB_APS_AIB_LAST_CHANNEL_ENERGY = 0xca,


  ZB_APS_AIB_LAST_CHANNEL_FAILURE_RATE = 0xcb,



  ZB_APS_AIB_CHANNEL_TIMER = 0xcc,






  ZB_APS_MAX_WINDOW_SIZE = 0xcd,
# 89 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
  ZB_APS_PARENT_ANNOUNCE_TIMER = 0xce



} zb_aps_aib_attr_id_t;
# 107 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
typedef enum zb_aps_status_e
{
  ZB_APS_STATUS_SUCCESS = 0x00,

  ZB_APS_STATUS_ILLEGAL_REQUEST = 0xa3,
  ZB_APS_STATUS_INVALID_BINDING = 0xa4,


  ZB_APS_STATUS_INVALID_GROUP = 0xa5,


  ZB_APS_STATUS_INVALID_PARAMETER = 0xa6,




  ZB_APS_STATUS_NO_ACK = 0xa7,


  ZB_APS_STATUS_NO_BOUND_DEVICE = 0xa8,



  ZB_APS_STATUS_NO_SHORT_ADDRESS = 0xa9,



  ZB_APS_STATUS_NOT_SUPPORTED = 0xaa,



  ZB_APS_STATUS_SECURED_LINK_KEY = 0xab,

  ZB_APS_STATUS_SECURED_NWK_KEY = 0xac,

  ZB_APS_STATUS_SECURITY_FAIL = 0xad,



  ZB_APS_STATUS_TABLE_FULL = 0xae,



  ZB_APS_STATUS_UNSECURED = 0xaf,

  ZB_APS_STATUS_UNSUPPORTED_ATTRIBUTE = 0xb0


} zb_aps_status_t;


typedef enum zb_aps_addr_mode_e
{
  ZB_APS_ADDR_MODE_DST_ADDR_ENDP_NOT_PRESENT = 0,

  ZB_APS_ADDR_MODE_16_GROUP_ENDP_NOT_PRESENT = 1,


  ZB_APS_ADDR_MODE_16_ENDP_PRESENT = 2,

  ZB_APS_ADDR_MODE_64_ENDP_PRESENT = 3

} zb_aps_addr_mode_t;
# 189 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
typedef struct zb_aps_hdr_s
{
  zb_uint8_t fc;
  zb_uint16_t src_addr;
  zb_uint16_t dst_addr;
  zb_uint16_t group_addr;
  zb_uint8_t dst_endpoint;
  zb_uint8_t src_endpoint;
  zb_uint16_t clusterid;
  zb_uint16_t profileid;
  zb_uint8_t aps_counter;
  zb_uint16_t mac_src_addr;
  zb_uint16_t mac_dst_addr;
  zb_uint8_t tsn;
} __attribute__ ((packed)) zb_aps_hdr_t;







typedef zb_aps_hdr_t zb_apsde_data_indication_t;
# 225 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
typedef struct zb_apsme_binding_req_s
{
  zb_ieee_addr_t src_addr;
  zb_uint8_t src_endpoint;
  zb_uint16_t clusterid;

  zb_uint8_t addr_mode;

  zb_addr_u dst_addr;
  zb_uint8_t dst_endpoint;



} zb_apsme_binding_req_t;


typedef struct zb_apsme_add_group_req_s
{
  zb_uint16_t group_address;
  zb_uint8_t endpoint;
} zb_apsme_add_group_req_t;


typedef struct zb_apsme_add_group_conf_s
{
  zb_uint16_t group_address;
  zb_uint8_t endpoint;
  zb_uint8_t status;
} zb_apsme_add_group_conf_t;


typedef struct zb_apsme_add_group_req_s zb_apsme_remove_group_req_t;


typedef struct zb_apsme_add_group_conf_s zb_apsme_remove_group_conf_t;


typedef struct zb_apsme_remove_all_groups_req_s
{
  zb_uint8_t endpoint;
} zb_apsme_remove_all_groups_req_t;


typedef struct zb_apsme_remove_all_groups_conf_s
{
  zb_uint8_t endpoint;
  zb_uint8_t status;
} zb_apsme_remove_all_groups_conf_t;

zb_uint8_t zb_aps_is_endpoint_in_group(
    zb_uint16_t group_id,
    zb_uint8_t endpoint);



typedef struct zb_apsme_get_request_s
{
  zb_aps_aib_attr_id_t aib_attr;
  zb_callback_t confirm_cb;
} zb_apsme_get_request_t;


typedef struct zb_apsme_get_confirm_s
{
  zb_aps_status_t status;
  zb_aps_aib_attr_id_t aib_attr;
  zb_uint8_t aib_length;

} __attribute__ ((packed)) zb_apsme_get_confirm_t;


typedef struct zb_apsme_set_request_s
{
  zb_aps_aib_attr_id_t aib_attr;
  zb_uint8_t aib_length;
  zb_callback_t confirm_cb;

} __attribute__ ((packed)) zb_apsme_set_request_t;


typedef struct zb_apsme_set_confirm_s
{
  zb_aps_status_t status;
  zb_aps_aib_attr_id_t aib_attr;
} __attribute__ ((packed)) zb_apsme_set_confirm_t;
# 323 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
void zb_apsme_bind_request(zb_uint8_t param);
# 335 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
void zb_apsme_unbind_request(zb_uint8_t param);





void zb_apsme_unbind_all(zb_uint8_t param);
# 356 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
void zb_apsme_add_group_request(zb_uint8_t param);
# 371 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
void zb_apsme_remove_group_request(zb_uint8_t param);
# 386 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
void zb_apsme_remove_all_groups_request(zb_uint8_t param);
# 403 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
typedef void (*zb_aps_user_payload_callback_t)(zb_uint8_t param);







typedef enum zb_aps_user_payload_cb_status_e
{

  ZB_APS_USER_PAYLOAD_CB_STATUS_SUCCESS = (zb_uint8_t)0x00,

  ZB_APS_USER_PAYLOAD_CB_STATUS_NO_MAC_ACK = (zb_uint8_t)0xe9,

  ZB_APS_USER_PAYLOAD_CB_STATUS_NO_APS_ACK = (zb_uint8_t)0xbe
} zb_aps_user_payload_cb_status_t;
# 444 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
zb_ret_t zb_aps_send_user_payload(
  zb_uint8_t param,
  zb_addr_u dst_addr,
  zb_uint16_t profile_id,
  zb_uint16_t cluster_id,
  zb_uint8_t dst_endpoint,
  zb_uint8_t src_endpoint,
  zb_uint8_t addr_mode,
  zb_bool_t aps_ack_is_enabled,
  zb_uint8_t *payload_ptr,
  zb_uint8_t payload_size);
# 466 "../../../../../../../../external/zboss/include/zboss_api_aps.h"
zb_uint8_t *zb_aps_get_aps_payload(zb_uint8_t param, zb_uint8_t *aps_payload_size);







void zb_aps_set_user_data_tx_cb(zb_aps_user_payload_callback_t cb);
# 51 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 1 "../../../../../../../../external/zboss/include/zb_ha.h" 1
# 45 "../../../../../../../../external/zboss/include/zb_ha.h"
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h" 1
# 45 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h"
# 1 "../../../../../../../../external/zboss/include/zb_vendor.h" 1
# 46 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h" 2
# 66 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h"
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_device_config.h" 1
# 54 "../../../../../../../../external/zboss/include/ha/zb_ha_device_config.h"
enum zb_ha_standard_devs_e
{

  ZB_HA_ON_OFF_SWITCH_DEVICE_ID = 0x0000,

  ZB_HA_LEVEL_CONTROL_SWITCH_DEVICE_ID = 0x0001,

  ZB_HA_ON_OFF_OUTPUT_DEVICE_ID = 0x0002,

  ZB_HA_LEVEL_CONTROLLABLE_OUTPUT_DEVICE_ID = 0x0003,

  ZB_HA_SCENE_SELECTOR_DEVICE_ID = 0x0004,

  ZB_HA_CONFIGURATION_TOOL_DEVICE_ID = 0x0005,

  ZB_HA_REMOTE_CONTROL_DEVICE_ID = 0x0006,

  ZB_HA_COMBINED_INTERFACE_DEVICE_ID = 0x0007,

  ZB_HA_RANGE_EXTENDER_DEVICE_ID = 0x0008,

  ZB_HA_MAINS_POWER_OUTLET_DEVICE_ID = 0x0009,

  ZB_HA_DOOR_LOCK_DEVICE_ID = 0x000A,

  ZB_HA_DOOR_LOCK_CONTROLLER_DEVICE_ID = 0x000B,

  ZB_HA_SIMPLE_SENSOR_DEVICE_ID = 0x000C,

  ZB_HA_CONSUMPTION_AWARENESS_DEVICE_ID = 0x000D,

  ZB_HA_HOME_GATEWAY_DEVICE_ID = 0x0050,

  ZB_HA_SMART_PLUG_DEVICE_ID = 0x0051,

  ZB_HA_WHITE_GOODS_DEVICE_ID = 0x0052,

  ZB_HA_METER_INTERFACE_DEVICE_ID = 0x0053,

  ZB_HA_WINDOW_COVERING_DEVICE_ID = 0x0060,

  ZB_HA_WINDOW_COVERING_CONTROLLER_DEVICE_ID = 0x0061,

  ZB_HA_SHADE_DEVICE_ID = 0x0062,

  ZB_HA_SHADE_CONTROLLER_DEVICE_ID = 0x0063,


  ZB_HA_ON_OFF_LIGHT_DEVICE_ID = 0x0100,

  ZB_HA_DIMMABLE_LIGHT_DEVICE_ID = 0x0101,

  ZB_HA_COLOR_DIMMABLE_LIGHT_DEVICE_ID = 0x0102,

  ZB_HA_DIMMER_SWITCH_DEVICE_ID = 0x0104,

  ZB_HA_COLOR_DIMMER_SWITCH_DEVICE_ID = 0x0105,


  ZB_HA_HEATING_COOLING_UNIT_DEVICE_ID = 0x0300,

  ZB_HA_THERMOSTAT_DEVICE_ID = 0x0301,

  ZB_HA_TEMPERATURE_SENSOR_DEVICE_ID = 0x0302,


  ZB_HA_IAS_CONTROL_INDICATING_EQUIPMENT_ID = 0x0400,

  ZB_HA_IAS_ANCILLARY_CONTROL_EQUIPMENT_ID = 0x0401,

  ZB_HA_IAS_ZONE_ID = 0x0402,

  ZB_HA_IAS_WARNING_DEVICE_ID = 0x0403,

  ZB_HA_TEST_DEVICE_ID = 0xfff0,

  ZB_HA_CUSTOM_TUNNEL_DEVICE_ID = 0xfff1,

  ZB_HA_CUSTOM_ATTR_DEVICE_ID = 0xfff2
};
# 67 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_config.h" 1
# 68 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h" 2
# 46 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_sas.h" 1
# 44 "../../../../../../../../external/zboss/include/ha/zb_ha_sas.h"
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_config.h" 1
# 45 "../../../../../../../../external/zboss/include/ha/zb_ha_sas.h" 2
# 47 "../../../../../../../../external/zboss/include/zb_ha.h" 2

# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_door_lock.h" 1
# 49 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_door_lock_controller.h" 1
# 50 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_on_off_output.h" 1
# 51 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_on_off_switch.h" 1
# 52 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_simple_sensor.h" 1
# 53 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_combined_interface.h" 1
# 54 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_scene_selector.h" 1
# 55 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_configuration_tool.h" 1
# 56 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_mains_power_outlet.h" 1
# 57 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_range_extender.h" 1
# 58 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_level_control_switch.h" 1
# 59 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_level_controllable_output.h" 1
# 60 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_window_covering.h" 1
# 61 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_window_covering_controller.h" 1
# 62 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_shade.h" 1
# 63 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_shade_controller.h" 1
# 64 "../../../../../../../../external/zboss/include/zb_ha.h" 2

# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_temperature_sensor.h" 1
# 66 "../../../../../../../../external/zboss/include/zb_ha.h" 2

# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_ias_control_indicating_equipment.h" 1
# 68 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_ias_ancillary_control_equipment.h" 1
# 69 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_ias_zone.h" 1
# 70 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_ias_warning_device.h" 1
# 71 "../../../../../../../../external/zboss/include/zb_ha.h" 2

# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_custom_attr.h" 1
# 73 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_dimmable_light.h" 1
# 74 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_dimmer_switch.h" 1
# 75 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_smart_plug.h" 1
# 76 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_thermostat.h" 1
# 77 "../../../../../../../../external/zboss/include/zb_ha.h" 2

# 1 "../../../../../../../../external/zboss/include/ha/zb_ha_test_device.h" 1
# 79 "../../../../../../../../external/zboss/include/zb_ha.h" 2
# 52 "../../../../../../../../external/zboss/include/zboss_api.h" 2

# 1 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 1
# 46 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_config.h" 1
# 47 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h" 1
# 45 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
# 1 "../../../../../../../../external/zboss/include/zboss_api_core.h" 1
# 46 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h" 2
# 94 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
struct zb_zcl_attr_s;
# 114 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef zb_void_t (*zb_zcl_cluster_init_t)(void);







typedef zb_bool_t (*zb_zcl_cluster_handler_t)(zb_uint8_t param);
# 132 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef zb_bool_t (*zb_zcl_cluster_check_value_t)(zb_uint16_t attr_id, zb_uint8_t endpoint, zb_uint8_t *value);







typedef zb_void_t (*zb_zcl_cluster_write_attr_hook_t)(zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *new_value);


typedef struct zb_zcl_cluster_desc_s
{
  zb_uint16_t cluster_id;
  zb_uint16_t attr_count;
  struct zb_zcl_attr_s *attr_desc_list;

  zb_uint8_t role_mask;
  zb_uint16_t manuf_code;
  zb_zcl_cluster_init_t cluster_init;
} __attribute__ ((packed))
zb_zcl_cluster_desc_t;
# 172 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_ret_t zb_zcl_add_cluster_handlers(zb_uint16_t cluster_id, zb_uint8_t cluster_role,
  zb_zcl_cluster_check_value_t cluster_check_value,
  zb_zcl_cluster_write_attr_hook_t cluster_write_attr_hook,
  zb_zcl_cluster_handler_t cluster_handler);


zb_zcl_cluster_handler_t zb_zcl_get_cluster_handler(zb_uint16_t cluster_id, zb_uint8_t cluster_role);
zb_zcl_cluster_check_value_t zb_zcl_get_cluster_check_value(zb_uint16_t cluster_id, zb_uint8_t cluster_role);
zb_zcl_cluster_write_attr_hook_t zb_zcl_get_cluster_write_attr_hook(zb_uint16_t cluster_id, zb_uint8_t cluster_role);



enum zb_zcl_cluster_role_e
{

  ZB_ZCL_CLUSTER_SERVER_ROLE = 0x01,

  ZB_ZCL_CLUSTER_CLIENT_ROLE = 0x02,


  ZB_ZCL_CLUSTER_ANY_ROLE = 0x03
};




typedef enum zb_zcl_cluster_id_e
{
  ZB_ZCL_CLUSTER_ID_BASIC = 0x0000,
  ZB_ZCL_CLUSTER_ID_POWER_CONFIG = 0x0001,
  ZB_ZCL_CLUSTER_ID_DEVICE_TEMP_CONFIG = 0x0002,

  ZB_ZCL_CLUSTER_ID_IDENTIFY = 0x0003,
  ZB_ZCL_CLUSTER_ID_GROUPS = 0x0004,
  ZB_ZCL_CLUSTER_ID_SCENES = 0x0005,
  ZB_ZCL_CLUSTER_ID_ON_OFF = 0x0006,
  ZB_ZCL_CLUSTER_ID_ON_OFF_SWITCH_CONFIG = 0x0007,

  ZB_ZCL_CLUSTER_ID_LEVEL_CONTROL = 0x0008,
  ZB_ZCL_CLUSTER_ID_ALARMS = 0x0009,
  ZB_ZCL_CLUSTER_ID_TIME = 0x000a,
  ZB_ZCL_CLUSTER_ID_RSSI_LOCATION = 0x000b,
  ZB_ZCL_CLUSTER_ID_ANALOG_INPUT = 0x000c,
  ZB_ZCL_CLUSTER_ID_ANALOG_OUTPUT = 0x000d,

  ZB_ZCL_CLUSTER_ID_ANALOG_VALUE = 0x000e,
  ZB_ZCL_CLUSTER_ID_BINARY_INPUT = 0x000f,
  ZB_ZCL_CLUSTER_ID_BINARY_OUTPUT = 0x0010,

  ZB_ZCL_CLUSTER_ID_BINARY_VALUE = 0x0011,
  ZB_ZCL_CLUSTER_ID_MULTI_INPUT = 0x0012,

  ZB_ZCL_CLUSTER_ID_MULTI_OUTPUT = 0x0013,

  ZB_ZCL_CLUSTER_ID_MULTI_VALUE = 0x0014,

  ZB_ZCL_CLUSTER_ID_COMMISSIONING = 0x0015,

  ZB_ZCL_CLUSTER_ID_OTA_UPGRADE = 0x0019,


  ZB_ZCL_CLUSTER_ID_POLL_CONTROL = 0x0020,
  ZB_ZCL_CLUSTER_ID_GREEN_POWER = 0x0021,

  ZB_ZCL_CLUSTER_ID_KEEP_ALIVE = 0x0025,


  ZB_ZCL_CLUSTER_ID_SHADE_CONFIG = 0x0100,
  ZB_ZCL_CLUSTER_ID_DOOR_LOCK = 0x0101,
  ZB_ZCL_CLUSTER_ID_WINDOW_COVERING = 0x0102,

  ZB_ZCL_CLUSTER_ID_PUMP_CONFIG_CONTROL = 0x200,

  ZB_ZCL_CLUSTER_ID_THERMOSTAT = 0x201,
  ZB_ZCL_CLUSTER_ID_FAN_CONTROL = 0x202,
  ZB_ZCL_CLUSTER_ID_DEHUMID_CONTROL = 0x203,

  ZB_ZCL_CLUSTER_ID_THERMOSTAT_UI_CONFIG = 0x204,



  ZB_ZCL_CLUSTER_ID_COLOR_CONTROL = 0x0300,
  ZB_ZCL_CLUSTER_ID_BALLAST_CONFIG = 0x0301,


  ZB_ZCL_CLUSTER_ID_ILLUMINANCE_MEASUREMENT = 0x0400,
  ZB_ZCL_CLUSTER_ID_TEMP_MEASUREMENT = 0x0402,
  ZB_ZCL_CLUSTER_ID_PRESSURE_MEASUREMENT = 0x0403,
  ZB_ZCL_CLUSTER_ID_REL_HUMIDITY_MEASUREMENT = 0x0405,
  ZB_ZCL_CLUSTER_ID_OCCUPANCY_SENSING = 0x0406,


  ZB_ZCL_CLUSTER_ID_IAS_ZONE = 0x0500,
  ZB_ZCL_CLUSTER_ID_IAS_ACE = 0x0501,
  ZB_ZCL_CLUSTER_ID_IAS_WD = 0x0502,


  ZB_ZCL_CLUSTER_ID_PRICE = 0x0700,
  ZB_ZCL_CLUSTER_ID_DRLC = 0x0701,
  ZB_ZCL_CLUSTER_ID_METERING = 0x0702,
  ZB_ZCL_CLUSTER_ID_MESSAGING = 0x0703,
  ZB_ZCL_CLUSTER_ID_TUNNELING = 0x0704,
  ZB_ZCL_CLUSTER_ID_PREPAYMENT = 0x0705,
  ZB_ZCL_CLUSTER_ID_ENERGY_MANAGEMENT = 0x0706,
  ZB_ZCL_CLUSTER_ID_CALENDAR = 0x0707,
  ZB_ZCL_CLUSTER_ID_DEVICE_MANAGEMENT = 0x0708,
  ZB_ZCL_CLUSTER_ID_EVENTS = 0x0709,
  ZB_ZCL_CLUSTER_ID_MDU_PAIRING = 0x070A,
  ZB_ZCL_CLUSTER_ID_SUB_GHZ = 0x070B,
  ZB_ZCL_CLUSTER_ID_KEY_ESTABLISHMENT = 0x0800,



  ZB_ZCL_CLUSTER_ID_APPLIANCE_EVENTS_AND_ALERTS = 0x0b02,


  ZB_ZCL_CLUSTER_ID_ELECTRICAL_MEASUREMENT = 0x0b04,
  ZB_ZCL_CLUSTER_ID_DIAGNOSTICS = 0x0b05,


  ZB_ZCL_CLUSTER_ID_TOUCHLINK_COMMISSIONING = 0x1000,




  ZB_ZCL_CLUSTER_ID_TUNNEL = 0xfc00,

  ZB_ZCL_CLUSTER_ID_CUSTOM_ATTR = 0xffee,

  ZB_ZCL_CLUSTER_ID_METER_IDENTIFICATION = 0x0B01,



} zb_zcl_cluster_id_t;
# 316 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef enum zb_zcl_parse_status_e
{
  ZB_ZCL_PARSE_STATUS_SUCCESS,
  ZB_ZCL_PARSE_STATUS_FAILURE
} zb_zcl_parse_status_t;


typedef enum zb_zcl_attribute_reporting_status_e
{
  ZB_ZCL_AR_STATUS_PENDING =0x00,
  ZB_ZCL_AR_STATUS_COMPLETE =0x01
} zb_zcl_attribute_reporting_status_t;





typedef enum zb_zcl_status_e
{
  ZB_ZCL_STATUS_SUCCESS = 0x00,
  ZB_ZCL_STATUS_FAIL = 0x01,
  ZB_ZCL_STATUS_NOT_AUTHORIZED = 0x7E,
  ZB_ZCL_STATUS_MALFORMED_CMD = 0x80,
  ZB_ZCL_STATUS_UNSUP_CLUST_CMD = 0x81,
  ZB_ZCL_STATUS_UNSUP_GEN_CMD = 0x82,
  ZB_ZCL_STATUS_UNSUP_MANUF_CLUST_CMD = 0x83,
  ZB_ZCL_STATUS_UNSUP_MANUF_GEN_CMD = 0x84,
  ZB_ZCL_STATUS_INVALID_FIELD = 0x85,
  ZB_ZCL_STATUS_UNSUP_ATTRIB = 0x86,
  ZB_ZCL_STATUS_INVALID_VALUE = 0x87,
  ZB_ZCL_STATUS_READ_ONLY = 0x88,
  ZB_ZCL_STATUS_INSUFF_SPACE = 0x89,
  ZB_ZCL_STATUS_DUPE_EXISTS = 0x8a,
  ZB_ZCL_STATUS_NOT_FOUND = 0x8b,
  ZB_ZCL_STATUS_UNREPORTABLE_ATTRIB = 0x8c,
  ZB_ZCL_STATUS_INVALID_TYPE = 0x8d,
  ZB_ZCL_STATUS_WRITE_ONLY = 0x8f,
  ZB_ZCL_STATUS_INCONSISTENT = 0x92,
  ZB_ZCL_STATUS_ACTION_DENIED = 0x93,

  ZB_ZCL_STATUS_TIMEOUT = 0x94,
  ZB_ZCL_STATUS_ABORT = 0x95,

  ZB_ZCL_STATUS_INVALID_IMAGE = 0x96,
  ZB_ZCL_STATUS_WAIT_FOR_DATA = 0x97,
  ZB_ZCL_STATUS_NO_IMAGE_AVAILABLE = 0x98,
  ZB_ZCL_STATUS_REQUIRE_MORE_IMAGE = 0x99,

  ZB_ZCL_STATUS_NOTIFICATION_PENDING = 0x9A,
  ZB_ZCL_STATUS_HW_FAIL = 0xc0,
  ZB_ZCL_STATUS_SW_FAIL = 0xc1,
  ZB_ZCL_STATUS_CALIB_ERR = 0xc2,
  ZB_ZCL_STATUS_UNSUP_CLUST = 0xc3,
} zb_zcl_status_t;
# 388 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef zb_uint8_t (*zb_zcl_disc_manuf_cmd_cb_t)(
    zb_uint8_t direction, zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint16_t manuf_id, zb_bool_t recv_cmd_type, zb_uint8_t **value);
# 401 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef void (*zb_zcl_modify_attr_value_cb_t)(
    zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint16_t attr_id, zb_uint8_t *value);
# 450 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
static inline zb_uint16_t zb_zcl_string_append_data(zb_uint8_t *zcl_str,
                                                    zb_uint8_t zcl_str_max_size,
                                                    const zb_uint8_t *c_str,
                                                    zb_uint8_t c_str_len)
{
  zb_uint16_t newlen = ((zcl_str)[0]) + c_str_len;

  if (newlen < (zb_uint16_t) zcl_str_max_size)
  {
    memcpy(((&((zcl_str)[1])) + ((zcl_str)[0])), c_str, c_str_len);
    (((zcl_str))[0] = newlen);
  }
  else
  {
    newlen = 0;
  }

  return newlen;
}


static inline zb_uint16_t zb_zcl_string_append_byte(zb_uint8_t *zcl_str,
                                                    zb_uint8_t zcl_str_max_size,
                                                    zb_uint8_t value)
{
  zb_uint16_t newlen = ((zcl_str)[0]) + 1;

  if (newlen < (zb_uint16_t) zcl_str_max_size)
  {
    *((&((zcl_str)[1])) + ((zcl_str)[0])) = value;
    (((zcl_str))[0] = newlen);
  }
  else
  {
    newlen = 0;
  }

  return newlen;
}
# 507 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef enum zb_zcl_attr_type_e
{
  ZB_ZCL_ATTR_TYPE_NULL = 0x00,
  ZB_ZCL_ATTR_TYPE_8BIT = 0x08,
  ZB_ZCL_ATTR_TYPE_16BIT = 0x09,
  ZB_ZCL_ATTR_TYPE_24BIT = 0x0a,
  ZB_ZCL_ATTR_TYPE_32BIT = 0x0b,
  ZB_ZCL_ATTR_TYPE_40BIT = 0x0c,
  ZB_ZCL_ATTR_TYPE_48BIT = 0x0d,
  ZB_ZCL_ATTR_TYPE_56BIT = 0x0e,
  ZB_ZCL_ATTR_TYPE_64BIT = 0x0f,
  ZB_ZCL_ATTR_TYPE_BOOL = 0x10,
  ZB_ZCL_ATTR_TYPE_8BITMAP = 0x18,
  ZB_ZCL_ATTR_TYPE_16BITMAP = 0x19,
  ZB_ZCL_ATTR_TYPE_24BITMAP = 0x1a,
  ZB_ZCL_ATTR_TYPE_32BITMAP = 0x1b,
  ZB_ZCL_ATTR_TYPE_40BITMAP = 0x1c,
  ZB_ZCL_ATTR_TYPE_48BITMAP = 0x1d,
  ZB_ZCL_ATTR_TYPE_56BITMAP = 0x1e,
  ZB_ZCL_ATTR_TYPE_64BITMAP = 0x1f,
  ZB_ZCL_ATTR_TYPE_U8 = 0x20,
  ZB_ZCL_ATTR_TYPE_U16 = 0x21,
  ZB_ZCL_ATTR_TYPE_U24 = 0x22,
  ZB_ZCL_ATTR_TYPE_U32 = 0x23,
  ZB_ZCL_ATTR_TYPE_U40 = 0x24,
  ZB_ZCL_ATTR_TYPE_U48 = 0x25,
  ZB_ZCL_ATTR_TYPE_U56 = 0x26,
  ZB_ZCL_ATTR_TYPE_U64 = 0x27,
  ZB_ZCL_ATTR_TYPE_S8 = 0x28,
  ZB_ZCL_ATTR_TYPE_S16 = 0x29,
  ZB_ZCL_ATTR_TYPE_S24 = 0x2a,
  ZB_ZCL_ATTR_TYPE_S32 = 0x2b,
  ZB_ZCL_ATTR_TYPE_S48 = 0x2d,
  ZB_ZCL_ATTR_TYPE_S56 = 0x2e,
  ZB_ZCL_ATTR_TYPE_S64 = 0x2f,
  ZB_ZCL_ATTR_TYPE_8BIT_ENUM = 0x30,
  ZB_ZCL_ATTR_TYPE_16BIT_ENUM = 0x31,
  ZB_ZCL_ATTR_TYPE_OCTET_STRING = 0x41,
  ZB_ZCL_ATTR_TYPE_CHAR_STRING = 0x42,
  ZB_ZCL_ATTR_TYPE_LONG_OCTET_STRING = 0x43,
  ZB_ZCL_ATTR_TYPE_LONG_CHAR_STRING = 0x44,
  ZB_ZCL_ATTR_TYPE_ARRAY = 0x48,
  ZB_ZCL_ATTR_TYPE_IEEE_ADDR = 0xf0,
  ZB_ZCL_ATTR_TYPE_128_BIT_KEY = 0xf1,
  ZB_ZCL_ATTR_TYPE_UTC_TIME = 0xe2,

  ZB_ZCL_ATTR_TYPE_CUSTOM_32ARRAY = 0x4a,


  ZB_ZCL_ATTR_TYPE_INVALID = 0xff
} zb_zcl_attr_type_t;


typedef enum zb_zcl_attr_access_e
{
  ZB_ZCL_ATTR_ACCESS_READ_ONLY = 0x01,
  ZB_ZCL_ATTR_ACCESS_WRITE_ONLY = 0x02,
  ZB_ZCL_ATTR_ACCESS_READ_WRITE = ZB_ZCL_ATTR_ACCESS_READ_ONLY | ZB_ZCL_ATTR_ACCESS_WRITE_ONLY,
  ZB_ZCL_ATTR_ACCESS_REPORTING = 0x04,
  ZB_ZCL_ATTR_ACCESS_WRITE_OPTIONAL = ZB_ZCL_ATTR_ACCESS_READ_ONLY,
  ZB_ZCL_ATTR_ACCESS_SINGLETON = 0x08,
  ZB_ZCL_ATTR_ACCESS_SCENE = 0x10,

  ZB_ZCL_ATTR_MANUF_SPEC = 0x20,
  ZB_ZCL_ATTR_ACCESS_INTERNAL = 0x40,
} zb_zcl_attr_access_t;
# 594 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef struct zb_zcl_attr_s
{
  zb_uint16_t id;
  zb_uint8_t type;
  zb_uint8_t access;
  zb_voidp_t data_p;
} __attribute__ ((packed))
zb_zcl_attr_t;



enum zb_zcl_attr_global_e
{
  ZB_ZCL_ATTR_GLOBAL_CLUSTER_REVISION_ID = 0xfffd,
  ZB_ZCL_ATTR_GLOBAL_ATTRIBUTE_REPORTING_STATUS_ID = 0xfffe,
};
# 829 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef enum zb_zcl_frame_type_e
{
  ZB_ZCL_FRAME_TYPE_COMMON = 0x00,
  ZB_ZCL_FRAME_TYPE_CLUSTER_SPECIFIC = 0x01
} zb_zcl_frame_type_t;




typedef enum zb_zcl_manufacturer_specific_e
{




  ZB_ZCL_NOT_MANUFACTURER_SPECIFIC = 0x00,




  ZB_ZCL_MANUFACTURER_SPECIFIC = 0x01
} zb_zcl_manufacturer_specific_t;






typedef enum zb_zcl_disable_default_response_e
{

  ZB_ZCL_ENABLE_DEFAULT_RESPONSE = 0x00,

  ZB_ZCL_DISABLE_DEFAULT_RESPONSE = 0x01,
} zb_zcl_disable_default_response_t;





typedef enum zb_zcl_frame_direction_e
{

  ZB_ZCL_FRAME_DIRECTION_TO_SRV = 0x00,

  ZB_ZCL_FRAME_DIRECTION_TO_CLI = 0x01
} zb_zcl_frame_direction_t;
# 884 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef struct zb_zcl_frame_ctrl_s
{
  zb_bitfield_t frame_type :2;
  zb_bitfield_t manufacturer :1;

  zb_bitfield_t direction :1;
  zb_bitfield_t disable_def_resp :1;
  zb_bitfield_t reserved :3;
} __attribute__ ((packed))
zb_zcl_frame_ctrl_t;




typedef struct zb_zcl_frame_hdr_full_s
{
  zb_zcl_frame_ctrl_t frame_ctrl;
  zb_uint16_t manufacturer_code;
  zb_uint8_t seq_number;
  zb_uint8_t command_id;
} __attribute__ ((packed))
zb_zcl_frame_hdr_full_t;




typedef struct zb_zcl_frame_hdr_short_s
{
  zb_zcl_frame_ctrl_t frame_ctrl;
  zb_uint8_t seq_number;
  zb_uint8_t command_id;
} __attribute__ ((packed))
zb_zcl_frame_hdr_short_t;




enum zb_zcl_addr_type_e
{
  ZB_ZCL_ADDR_TYPE_SHORT,
  ZB_ZCL_ADDR_TYPE_IEEE_GPD,
  ZB_ZCL_ADDR_TYPE_SRC_ID_GPD,
  ZB_ZCL_ADDR_TYPE_IEEE,
};
# 936 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef struct zb_zcl_addr_s
{
  zb_uint8_t addr_type;
  union zb_zcl_addr_u
  {
    zb_uint16_t short_addr;
    zb_uint32_t src_id;
    zb_ieee_addr_t ieee_addr;
  } u;
} __attribute__ ((packed))
zb_zcl_addr_t;


typedef struct zb_zcl_parsed_hdr_s
{

  union
  {
    struct
    {

      zb_zcl_addr_t source;
      zb_uint16_t dst_addr;
      zb_uint8_t src_endpoint;
      zb_uint8_t dst_endpoint;
      zb_uint8_t fc;





    } __attribute__ ((packed)) common_data;

    struct
    {

      zb_ieee_addr_t src_addr;
    } __attribute__ ((packed)) intrp_data;

  } addr_data;

  zb_uint8_t rssi;

  zb_uint16_t cluster_id;
  zb_uint16_t profile_id;


  zb_uint8_t cmd_id;
  zb_uint8_t cmd_direction;
  zb_uint8_t seq_number;
  zb_uint8_t is_common_command;
  zb_uint8_t disable_default_response;
  zb_uint8_t is_manuf_specific;
  zb_uint16_t manuf_specific;

  zb_uint8_t next_buf_ref;

} __attribute__ ((packed))
zb_zcl_parsed_hdr_t;



typedef struct zb_zcl_attr_addr_info_s
{
  zb_uint8_t src_ep;
  zb_uint8_t dst_ep;
  zb_uint16_t dst_short_addr;

  zb_uint16_t profile_id;
  zb_uint16_t cluster_id;
  zb_uint8_t cluster_role;
  zb_uint16_t attr_id;
}
zb_zcl_attr_addr_info_t;
# 1074 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
void *zb_zcl_start_command_header(zb_buf_t *zbbuf, zb_uint8_t frame_ctl, zb_uint16_t manuf_code, zb_uint8_t cmd_id, zb_uint8_t* tsn);
# 1635 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_ret_t zb_zcl_finish_and_send_packet(zb_buf_t *buffer, zb_uint8_t *ptr,
                                   zb_addr_u *dst_addr, zb_uint8_t dst_addr_mode,
                                   zb_uint8_t dst_ep, zb_uint8_t ep,
                                   zb_uint16_t prof_id, zb_uint16_t cluster_id,
                                   zb_callback_t cb);
zb_ret_t zb_zcl_finish_and_send_packet_frag(zb_buf_t *buffer, zb_uint8_t *ptr,
                                    zb_addr_u *dst_addr, zb_uint8_t dst_addr_mode,
                                    zb_uint8_t dst_ep, zb_uint8_t ep,
                                    zb_uint16_t prof_id, zb_uint16_t cluster_id,
                                    zb_callback_t cb, zb_bool_t frag);
# 1669 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint16_t zb_zcl_attr_get16(zb_uint8_t *value);
zb_int16_t zb_zcl_attr_gets16(zb_uint8_t *value);
zb_uint32_t zb_zcl_attr_get32(zb_uint8_t *value);
zb_int32_t zb_zcl_attr_gets32(zb_uint8_t *value);





zb_int24_t zb_zcl_attr_get24(zb_uint8_t *value);
zb_uint48_t zb_zcl_attr_get48(zb_uint8_t *value);
# 1761 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef struct zcl_cb_hash_ent_s
{
  zb_callback_t func;
  zb_uint8_t buf;
}
zcl_cb_hash_ent_t;




typedef struct zb_zcl_command_send_status_s
{
  zb_uint8_t status;
  zb_uint8_t dst_endpoint;
  zb_zcl_addr_t dst_addr;
  zb_uint8_t src_endpoint;

}
zb_zcl_command_send_status_t;




typedef zb_void_t (*zb_zcl_set_default_value_attr_cb_t)(zb_uint8_t ep);
# 1796 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef zb_ret_t (*zb_zcl_app_check_attr_value_cb_t)
    (zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *value);
# 1806 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_zcl_attr_t* zb_zcl_get_attr_desc(zb_zcl_cluster_desc_t *cluster_desc, zb_uint16_t attr_id);
# 1817 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint8_t zb_zcl_check_attribute_writable(
  zb_zcl_attr_t* attr_desc,
  zb_uint8_t endpoint,
  zb_uint16_t cluster_id,
  zb_uint8_t cluster_role,
  zb_uint8_t *new_value,
  zb_bool_t check_access);
# 1833 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_void_t zb_zcl_write_attr_hook(zb_uint8_t endpoint, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id, zb_uint8_t *new_value);
# 1843 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint8_t zb_zcl_get_attribute_size(zb_uint8_t attr_type, zb_uint8_t *attr_value);







zb_uint8_t zb_zcl_get_analog_attribute_size(zb_uint8_t attr_type);







zb_bool_t zb_zcl_is_analog_data_type(zb_uint8_t attr_type);
# 1872 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_bool_t zb_zcl_check_attr_value(zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *value);

zb_bool_t zb_zcl_is_target_endpoint(zb_af_endpoint_desc_t *ep_desc, zb_uint16_t profile_id);

zb_uint8_t zb_zcl_get_next_target_endpoint(
  zb_uint8_t start_from_ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t profile_id);
# 1887 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_zcl_cluster_desc_t* get_cluster_desc(zb_af_endpoint_desc_t* ep_desc, zb_uint16_t cluster_id, zb_uint8_t cluster_role);
# 1896 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint8_t get_endpoint_by_cluster(zb_uint16_t cluster_id, zb_uint16_t cluster_role);

zb_uint16_t get_profile_id_by_endpoint(zb_uint8_t endpoint_id);
# 1908 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_af_endpoint_desc_t *get_endpoint_by_cluster_with_role(
    zb_uint16_t cluster_id,
    zb_uint8_t cluster_role);
# 1922 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_zcl_attr_t* zb_zcl_get_attr_desc_a(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);
# 1933 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint8_t* zb_zcl_put_value_to_packet(
    zb_uint8_t *cmd_ptr, zb_uint8_t attr_type, zb_uint8_t *attr_value);
# 1953 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_zcl_status_t zb_zcl_set_attr_val(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role,
                             zb_uint16_t attr_id, zb_uint8_t *value, zb_bool_t check_access);







zb_ret_t zb_zcl_register_cb(zb_uint8_t param, zb_callback_t cb);
# 1972 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_ret_t zb_zcl_ack_callback(zb_uint8_t param);
# 1984 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_uint8_t zb_zcl_check_accept_command(zb_uint8_t param);
# 2023 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
typedef struct zb_zcl_set_attr_value_param_s
{
  zb_uint16_t cluster_id;
  zb_uint16_t attr_id;
# 2036 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
  union
  {
    zb_uint8_t data8;
    zb_uint16_t data16;
    zb_uint24_t data24;
    zb_uint32_t data32;
    zb_uint48_t data48;
    zb_ieee_addr_t data_ieee;
    struct
    {
      zb_uint8_t size;
      zb_uint8_t *p_data;
    } data_variable;
  }
  values;
} zb_zcl_set_attr_value_param_t;
# 2166 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h"
zb_void_t zb_zcl_schedule_status_abort(zb_buf_t* buffer, zb_addr_u *addr,
                                  zb_uint8_t dst_addr_mode, zb_uint8_t dst_ep,
                                  zb_uint8_t ep, zb_callback_t cb);
# 49 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h" 1
# 44 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_common.h" 1
# 45 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h" 2



struct zb_zcl_reporting_info_s;







zb_void_t zb_zcl_dump_cmd(zb_buf_t *buf);
zb_void_t dump_zcl_header(zb_zcl_parsed_hdr_t *header);
zb_void_t dump_zcl_default_resp(zb_buf_t * buffer);
# 76 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef enum zb_zcl_cmd_e
{
  ZB_ZCL_CMD_READ_ATTRIB = 0x00,
  ZB_ZCL_CMD_READ_ATTRIB_RESP = 0x01,
  ZB_ZCL_CMD_WRITE_ATTRIB = 0x02,
  ZB_ZCL_CMD_WRITE_ATTRIB_UNDIV = 0x03,
  ZB_ZCL_CMD_WRITE_ATTRIB_RESP = 0x04,
  ZB_ZCL_CMD_WRITE_ATTRIB_NO_RESP = 0x05,
  ZB_ZCL_CMD_CONFIG_REPORT = 0x06,
  ZB_ZCL_CMD_CONFIG_REPORT_RESP = 0x07,
  ZB_ZCL_CMD_READ_REPORT_CFG = 0x08,
  ZB_ZCL_CMD_READ_REPORT_CFG_RESP = 0x09,
  ZB_ZCL_CMD_REPORT_ATTRIB = 0x0a,
  ZB_ZCL_CMD_DEFAULT_RESP = 0x0b,
  ZB_ZCL_CMD_DISC_ATTRIB = 0x0c,
  ZB_ZCL_CMD_DISC_ATTRIB_RESP = 0x0d,

  ZB_ZCL_CMD_READ_ATTRIB_STRUCT = 0x0e,
  ZB_ZCL_CMD_WRITE_ATTRIB_STRUCT = 0x0f,
  ZB_ZCL_CMD_WRITE_ATTRIB_STRUCT_RESP = 0x10,


  ZB_ZCL_CMD_DISCOVER_COMMANDS_RECEIVED = 0x11,
  ZB_ZCL_CMD_DISCOVER_COMMANDS_RECEIVED_RES = 0x12,
  ZB_ZCL_CMD_DISCOVER_COMMANDS_GENERATED = 0x13,
  ZB_ZCL_CMD_DISCOVER_COMMANDS_GENERATED_RES = 0x14,




  ZB_ZCL_CMD_DISCOVER_ATTR_EXT = 0x15,
  ZB_ZCL_CMD_DISCOVER_ATTR_EXT_RES = 0x16
} zb_zcl_cmd_t;
# 227 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
zb_void_t zb_zcl_send_command_short_without_ack(zb_buf_t *buffer,
                                                zb_uint16_t addr, zb_uint8_t dst_addr_mode,
                                                zb_uint8_t dst_ep, zb_uint8_t ep,
                                                zb_uint16_t prof_id, zb_uint16_t cluster_id,
                                                zb_callback_t cb, zb_uint16_t random_delay);
# 252 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
zb_void_t zb_zcl_send_command_short_schedule(zb_buf_t *buffer,
                                             zb_uint16_t addr, zb_uint8_t dst_addr_mode,
                                             zb_uint8_t dst_ep, zb_uint8_t ep,
                                             zb_uint16_t prof_id, zb_uint16_t cluster_id,
                                             zb_callback_t cb, zb_uint16_t delay);
# 483 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_default_resp_payload_s
{
  zb_uint8_t command_id;
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zcl_default_resp_payload_t;
# 535 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_read_attr_req_s
{
  zb_uint16_t attr_id[1];
} __attribute__ ((packed))
zb_zcl_read_attr_req_t;
# 553 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_read_attr_res_s
{
  zb_uint16_t attr_id;
  zb_uint8_t status;
  zb_uint8_t attr_type;
  zb_uint8_t attr_value[1];
} __attribute__ ((packed)) zb_zcl_read_attr_res_t;
# 815 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_write_attr_req_s
{
  zb_uint16_t attr_id;
  zb_uint8_t attr_type;
  zb_uint8_t attr_value[1];
} __attribute__ ((packed))
zb_zcl_write_attr_req_t;
# 874 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_write_attr_res_s
{
  zb_uint8_t status;
  zb_uint16_t attr_id;
} __attribute__ ((packed))
zb_zcl_write_attr_res_t;
# 1138 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_disc_attr_req_s
{
  zb_uint16_t start_attr_id;
  zb_uint8_t maximum;
} __attribute__ ((packed))
zb_zcl_disc_attr_req_t;




typedef struct zb_zcl_disc_attr_info_s
{
  zb_uint16_t attr_id;
  zb_uint8_t data_type;
} __attribute__ ((packed))
zb_zcl_disc_attr_info_t;






typedef struct zb_zcl_disc_attr_res_s
{
  zb_uint8_t complete;
  zb_zcl_disc_attr_info_t info[1];
} __attribute__ ((packed))
zb_zcl_disc_attr_res_t;




typedef enum zb_zcl_disc_complete_e
{
  ZB_ZCL_DISC_NON_COMPLETE = 0x00,
  ZB_ZCL_DISC_COMPLETE = 0x01,

} zb_zcl_disc_complete_t;
# 1334 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_configure_reporting_req_clnt_s
    {
      zb_uint8_t attr_type;
      zb_uint16_t min_interval;
      zb_uint16_t max_interval;
      zb_uint8_t delta[1];
    } __attribute__ ((packed))
zb_zcl_configure_reporting_req_clnt_t;



typedef struct zb_zcl_configure_reporting_req_srv_s
    {
      zb_uint16_t timeout;
    } __attribute__ ((packed))
zb_zcl_configure_reporting_req_srv_t;







typedef union zb_zcl_configure_reporting_req_u_s
{
  zb_zcl_configure_reporting_req_clnt_t clnt;
  zb_zcl_configure_reporting_req_srv_t srv;
} __attribute__ ((packed))
zb_zcl_configure_reporting_req_u_t;







typedef struct zb_zcl_configure_reporting_req_s
{
  zb_uint8_t direction;
  zb_uint16_t attr_id;
  zb_zcl_configure_reporting_req_u_t u;
} __attribute__ ((packed)) zb_zcl_configure_reporting_req_t;


typedef enum zb_zcl_configure_reporting_direction_value_e
{
  ZB_ZCL_CONFIGURE_REPORTING_SEND_REPORT = 0x00,
  ZB_ZCL_CONFIGURE_REPORTING_RECV_REPORT = 0x01
}
zb_zcl_configure_reporting_direction_value_t;
# 1452 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_configure_reporting_res_s
{
  zb_uint8_t status;
  zb_uint8_t direction;
  zb_uint16_t attr_id;
} __attribute__ ((packed))
zb_zcl_configure_reporting_res_t;
# 1616 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_report_attr_req_s
{
  zb_uint16_t attr_id;
  zb_uint8_t attr_type;
  zb_uint8_t attr_value[1];
} __attribute__ ((packed))
zb_zcl_report_attr_req_t;
# 1691 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_read_reporting_cfg_req_s
{
  zb_uint8_t direction;



  zb_uint16_t attr_id;



} __attribute__ ((packed))
  zb_zcl_read_reporting_cfg_req_t;
# 1745 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_read_reporting_cfg_rsp_s
{
  zb_uint8_t status;
# 1758 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
  zb_uint8_t direction;



  zb_uint16_t attr_id;





  union
  {





    struct
    {
      zb_uint8_t attr_type;
      zb_uint16_t min_interval;




      zb_uint16_t max_interval;




      zb_uint8_t delta[1];







    } __attribute__ ((packed))
    clnt;





    struct
    {
      zb_uint16_t timeout;




    } __attribute__ ((packed))
    srv;

  } u;
} __attribute__ ((packed)) zb_zcl_read_reporting_cfg_rsp_t;
# 1983 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_disc_cmd_req_s
{
  zb_uint8_t start_cmd_id;
  zb_uint8_t maximum;
} __attribute__ ((packed))
zb_zcl_disc_cmd_req_t;
# 2083 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef enum zb_zcl_disc_cmd_complete_e
{

  ZB_ZCL_DISC_CMD_NOT_COMPLETE = 0x00,

  ZB_ZCL_DISC_CMD_COMPLETE = 0x01,
} zb_zcl_disc_cmd_complete_t;





typedef struct zb_zcl_disc_cmd_resp_s
{
  zb_uint8_t complete;
} __attribute__ ((packed))
zb_zcl_disc_cmd_resp_t;
# 2207 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef zb_zcl_disc_attr_req_t zb_zcl_disc_attr_ext_req_t;
# 2245 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
typedef struct zb_zcl_disc_attr_ext_info_s
{
  zb_uint16_t attr_id;
  zb_uint8_t data_type;
  zb_uint8_t attr_access;
} __attribute__ ((packed))
zb_zcl_disc_attr_ext_info_t;







typedef struct zb_zcl_disc_attr_ext_res_s
{
  zb_uint8_t complete;
  zb_zcl_disc_attr_ext_info_t info[1];
} __attribute__ ((packed))
zb_zcl_disc_attr_ext_res_t;
# 2318 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h"
zb_void_t zb_zcl_read_attr_handler(zb_uint8_t param);
zb_void_t zb_zcl_write_attr_handler(zb_uint8_t param);
zb_void_t zb_zcl_configure_reporting_handler(zb_uint8_t param);
zb_void_t zb_zcl_discover_commands_res(zb_uint8_t param, zb_bool_t recv_cmd_type);
zb_void_t zb_zcl_disc_attr_handler_ext(zb_uint8_t param);


void zb_zcl_send_report_attr_command(struct zb_zcl_reporting_info_s *rep_info, zb_uint8_t param);
# 50 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h" 1
# 79 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
union zb_zcl_attr_var_u
{
  zb_uint8_t u8;
  zb_int8_t s8;
  zb_uint16_t u16;
  zb_int16_t s16;
  zb_uint24_t u24;
  zb_int24_t s24;
  zb_uint32_t u32;
  zb_int32_t s32;
  zb_uint48_t u48;
  zb_uint8_t data_buf[4];
};




typedef struct zb_zcl_reporting_info_s
{
  zb_uint8_t direction;
  zb_uint8_t ep;
  zb_uint16_t cluster_id;
  zb_uint8_t cluster_role;
  zb_uint16_t attr_id;
  zb_uint8_t flags;
  zb_time_t run_time;
  union
  {
    struct
    {
      zb_uint16_t min_interval;
      zb_uint16_t max_interval;
      union zb_zcl_attr_var_u delta;
      union zb_zcl_attr_var_u reported_value;
      zb_uint16_t def_min_interval;
      zb_uint16_t def_max_interval;
    }
    send_info;

    struct
    {
      zb_uint16_t timeout;
    }
    recv_info;

  }
  u;

  struct
  {
    zb_uint16_t short_addr;
    zb_uint8_t endpoint;
    zb_uint16_t profile_id;
  }
  dst;
}
zb_zcl_reporting_info_t;






typedef struct zb_zcl_reporting_info_nvram_s
{
  zb_uint8_t direction;
  zb_uint8_t ep;
  zb_uint16_t cluster_id;
  zb_uint8_t cluster_role;
  zb_uint16_t attr_id;
  zb_uint8_t flags;

  zb_uint16_t min_interval;
  zb_uint16_t max_interval;


  zb_uint32_t delta;

  zb_uint16_t short_addr_dest;
  zb_uint8_t endpoint_dest;
  zb_uint16_t profile_id_dest;
  zb_uint8_t align[3];
} __attribute__ ((packed)) zb_zcl_reporting_info_nvram_t;



typedef struct zb_zcl_reporting_ctx_s
{
  zb_uint16_t min_interval;
  zb_uint16_t max_interval;
  zb_uint16_t timeout;

  zb_uint8_t buf_ref;
}
zb_zcl_reporting_ctx_t;
# 183 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
typedef void (*zb_zcl_no_reporting_cb_t)(
    zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint16_t attr_id);
# 193 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
typedef void (*zb_zcl_report_attr_cb_t)(
    zb_zcl_addr_t *addr, zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint16_t attr_id, zb_uint8_t attr_type, zb_uint8_t *value);



typedef enum zb_zcl_reporting_flags_e
{
  ZB_ZCL_REPORTING_SLOT_BUSY = 0x01,
  ZB_ZCL_REPORT_ATTR = 0x01 << 1,
  ZB_ZCL_REPORT_IS_ALLOWED = 0x01 << 2,

  ZB_ZCL_REPORTING_STOP = 0x01 << 3,
  ZB_ZCL_REPORT_TIMER_STARTED = 0x01 << 4,
  ZB_ZCL_REPORT_IS_SENT = 0x01 << 5,
  ZB_ZCL_REPORT_IS_FIRST = 0x01 << 6,
}
zb_zcl_reporting_flags_t;
# 246 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
zb_void_t zb_zcl_report_attr_cmd_handler(zb_uint8_t param);


void zb_zcl_report_received(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);

zb_ret_t zb_zcl_put_reporting_info(zb_zcl_reporting_info_t* rep_info_ptr, zb_bool_t override);

zb_ret_t zb_zcl_put_reporting_info_from_req(zb_zcl_configure_reporting_req_t *config_rep_req,
                                            zb_zcl_attr_addr_info_t* attr_addr_info);

void zb_zcl_init_reporting_info(void);

zb_zcl_reporting_info_t* zb_zcl_find_reporting_info( zb_uint8_t ep,
                                                      zb_uint16_t cluster_id,
                                                      zb_uint8_t cluster_role,
                                                      zb_uint16_t attr_id);

zb_zcl_reporting_info_t* zb_zcl_get_next_reporting_info(
  zb_zcl_reporting_info_t *rep_info_init, zb_uint8_t is_manuf_spec);

zb_void_t zb_zcl_reporting_cb(zb_uint8_t param);

zb_void_t zb_zcl_save_reported_value(zb_zcl_reporting_info_t *rep_info, zb_zcl_attr_t* attr_desc);

void zb_zcl_mark_attr_for_reporting(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);
# 282 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
zb_ret_t zb_zcl_start_attr_reporting(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);
# 292 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
zb_ret_t zb_zcl_stop_attr_reporting(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);
# 301 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
zb_bool_t zcl_is_attr_reported(zb_uint8_t ep, zb_uint16_t cluster_id, zb_uint8_t cluster_role, zb_uint16_t attr_id);
# 310 "../../../../../../../../external/zboss/include/zcl/zb_zcl_reporting.h"
zb_ret_t zb_zcl_put_reporting_info(zb_zcl_reporting_info_t* rep_info_ptr, zb_bool_t override);
# 51 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h" 1
# 63 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
enum zb_zcl_scene_attr_e
{

  ZB_ZCL_ATTR_SCENES_SCENE_COUNT_ID = 0x0000,

  ZB_ZCL_ATTR_SCENES_CURRENT_SCENE_ID = 0x001,




  ZB_ZCL_ATTR_SCENES_CURRENT_GROUP_ID = 0x002,





  ZB_ZCL_ATTR_SCENES_SCENE_VALID_ID = 0x003,
# 91 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
  ZB_ZCL_ATTR_SCENES_NAME_SUPPORT_ID = 0x004,
# 100 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
  ZB_ZCL_ATTR_SCENES_LAST_CONFIGURED_BY_ID = 0x005
};
# 148 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scene_table_record_fixed_s
{







  zb_uint16_t group_id;

  zb_uint16_t transition_time;

  zb_uint8_t scene_id;
# 172 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
  zb_uint8_t field_sets_length;
  zb_uint8_t transition_time_100ms;
} __attribute__ ((packed)) zb_zcl_scene_table_record_fixed_t;
# 185 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_fieldset_common_s
{
  zb_uint16_t cluster_id;
  zb_uint8_t fieldset_length;
} __attribute__ ((packed)) zb_zcl_scenes_fieldset_common_t;
# 219 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
zb_void_t zb_zcl_scenes_remove_all_scenes_in_all_endpoints_by_group_id(zb_uint8_t param, zb_uint16_t group_id);
zb_void_t zb_zcl_scenes_remove_all_scenes_in_all_endpoints(zb_uint8_t param);
# 284 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
enum zb_zcl_scenes_cmd_e
{

  ZB_ZCL_CMD_SCENES_ADD_SCENE = 0x00,

  ZB_ZCL_CMD_SCENES_VIEW_SCENE = 0x01,

  ZB_ZCL_CMD_SCENES_REMOVE_SCENE = 0x02,

  ZB_ZCL_CMD_SCENES_REMOVE_ALL_SCENES = 0x03,

  ZB_ZCL_CMD_SCENES_STORE_SCENE = 0x04,

  ZB_ZCL_CMD_SCENES_RECALL_SCENE = 0x05,

  ZB_ZCL_CMD_SCENES_GET_SCENE_MEMBERSHIP = 0x06,


  ZB_ZCL_CMD_SCENES_ENHANCED_ADD_SCENE = 0x40,


  ZB_ZCL_CMD_SCENES_ENHANCED_VIEW_SCENE = 0x41,


  ZB_ZCL_CMD_SCENES_COPY_SCENE = 0x42,
};




enum zb_zcl_scenes_cmd_resp_e
{

  ZB_ZCL_CMD_SCENES_ADD_SCENE_RESPONSE = 0x00,

  ZB_ZCL_CMD_SCENES_VIEW_SCENE_RESPONSE = 0x01,

  ZB_ZCL_CMD_SCENES_REMOVE_SCENE_RESPONSE = 0x02,

  ZB_ZCL_CMD_SCENES_REMOVE_ALL_SCENES_RESPONSE = 0x03,

  ZB_ZCL_CMD_SCENES_STORE_SCENE_RESPONSE = 0x04,

  ZB_ZCL_CMD_SCENES_GET_SCENE_MEMBERSHIP_RESPONSE = 0x06,


  ZB_ZCL_CMD_SCENES_ENHANCED_ADD_SCENE_RESPONSE = 0x40,



  ZB_ZCL_CMD_SCENES_ENHANCED_VIEW_SCENE_RESPONSE = 0x41,


  ZB_ZCL_CMD_SCENES_COPY_SCENE_RESPONSE = 0x42,
};
# 369 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_add_scene_req_s
{
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
  zb_uint16_t transition_time;




  zb_uint8_t scene_name[1];
} __attribute__ ((packed)) zb_zcl_scenes_add_scene_req_t;
# 554 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_view_scene_req_s
{
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_view_scene_req_t;
# 630 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_remove_scene_req_s
{
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_remove_scene_req_t;
# 708 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_remove_all_scenes_req_s
{
  zb_uint16_t group_id;
} __attribute__ ((packed)) zb_zcl_scenes_remove_all_scenes_req_t;
# 783 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_store_scene_req_s
{
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_store_scene_req_t;
# 864 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_recall_scene_req_s
{
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_recall_scene_req_t;


typedef struct zb_zcl_scenes_recall_scene_transition_time_req_s
{
  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_scenes_recall_scene_transition_time_req_t;
# 982 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_get_scene_membership_req_s
{
  zb_uint16_t group_id;
} __attribute__ ((packed)) zb_zcl_scenes_get_scene_membership_req_t;
# 1057 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_add_scene_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_add_scene_res_t;
# 1137 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_view_scene_res_fixed_size_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
  zb_uint8_t scene_id;



  zb_uint16_t transition_time;
# 1154 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
  zb_uint8_t scene_name[1];
} __attribute__ ((packed)) zb_zcl_scenes_view_scene_res_fixed_size_t;
# 1282 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_remove_scene_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_remove_scene_res_t;
# 1362 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_remove_all_scenes_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
} __attribute__ ((packed)) zb_zcl_scenes_remove_all_scenes_res_t;
# 1438 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_store_scene_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
  zb_uint8_t scene_id;
} __attribute__ ((packed)) zb_zcl_scenes_store_scene_res_t;
# 1528 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
typedef struct zb_zcl_scenes_get_scene_membership_res_mandatory_s
{







  zb_uint8_t status;







  zb_uint8_t capacity;
  zb_uint16_t group_id;
} __attribute__ ((packed)) zb_zcl_scenes_get_scene_membership_res_mandatory_t;



typedef struct zb_zcl_scenes_get_scene_membership_res_optional_s
{



  zb_uint8_t scene_count;





  zb_uint8_t scene_list[1];
} __attribute__ ((packed)) zb_zcl_scenes_get_scene_membership_res_optional_t;


typedef struct zb_zcl_scenes_get_scene_membership_res_s
{

  zb_zcl_scenes_get_scene_membership_res_mandatory_t mandatory;

  zb_zcl_scenes_get_scene_membership_res_optional_t optional;
} __attribute__ ((packed)) zb_zcl_scenes_get_scene_membership_res_t;
# 1691 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
zb_uint8_t zb_zcl_scenes_process_store_scene(zb_uint8_t param, zb_zcl_scenes_store_scene_req_t* req, const zb_zcl_parsed_hdr_t *cmd_info);

zb_uint8_t zb_zcl_scenes_process_recall_scene(zb_uint8_t param, zb_zcl_scenes_recall_scene_req_t* req, const zb_zcl_parsed_hdr_t *cmd_info);

zb_uint8_t zb_zcl_scenes_process_remove_all_scenes(zb_uint8_t param, zb_zcl_scenes_remove_all_scenes_req_t* req, const zb_zcl_parsed_hdr_t *cmd_info);
# 1705 "../../../../../../../../external/zboss/include/zcl/zb_zcl_scenes.h"
zb_void_t zb_zcl_scenes_init_server(void);
zb_void_t zb_zcl_scenes_init_client(void);
# 52 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h" 1
# 45 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h"
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_commands.h" 1
# 46 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h" 2
# 63 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h"
enum zb_zcl_basic_info_attr_e
{

  ZB_ZCL_ATTR_BASIC_ZCL_VERSION_ID = 0x0000,

  ZB_ZCL_ATTR_BASIC_APPLICATION_VERSION_ID = 0x0001,

  ZB_ZCL_ATTR_BASIC_STACK_VERSION_ID = 0x0002,

  ZB_ZCL_ATTR_BASIC_HW_VERSION_ID = 0x0003,

  ZB_ZCL_ATTR_BASIC_MANUFACTURER_NAME_ID = 0x0004,

  ZB_ZCL_ATTR_BASIC_MODEL_IDENTIFIER_ID = 0x0005,

  ZB_ZCL_ATTR_BASIC_DATE_CODE_ID = 0x0006,

  ZB_ZCL_ATTR_BASIC_POWER_SOURCE_ID = 0x0007,


  ZB_ZCL_ATTR_BASIC_GENERIC_DEVICE_CLASS_ID = 0x0008,


  ZB_ZCL_ATTR_BASIC_GENERIC_DEVICE_TYPE_ID = 0x0009,


  ZB_ZCL_ATTR_BASIC_PRODUCT_CODE_ID = 0x000a,


  ZB_ZCL_ATTR_BASIC_PRODUCT_URL_ID = 0x000b,


  ZB_ZCL_ATTR_BASIC_MANUFACTURER_VERSION_DETAILS_ID = 0x000c,

  ZB_ZCL_ATTR_BASIC_SERIAL_NUMBER_ID = 0x000d,

  ZB_ZCL_ATTR_BASIC_PRODUCT_LABEL_ID = 0x000e,

  ZB_ZCL_ATTR_BASIC_SW_BUILD_ID = 0x4000,
};




enum zb_zcl_basic_settings_attr_e
{

  ZB_ZCL_ATTR_BASIC_LOCATION_DESCRIPTION_ID = 0x0010,

  ZB_ZCL_ATTR_BASIC_PHYSICAL_ENVIRONMENT_ID = 0x0011,

  ZB_ZCL_ATTR_BASIC_DEVICE_ENABLED_ID = 0x0012,

  ZB_ZCL_ATTR_BASIC_ALARM_MASK_ID = 0x0013,

  ZB_ZCL_ATTR_BASIC_DISABLE_LOCAL_CONFIG_ID = 0x0014
};





enum zb_zcl_basic_power_source_e
{
  ZB_ZCL_BASIC_POWER_SOURCE_UNKNOWN = 0x00,
  ZB_ZCL_BASIC_POWER_SOURCE_MAINS_SINGLE_PHASE = 0x01,
  ZB_ZCL_BASIC_POWER_SOURCE_MAINS_THREE_PHASE = 0x02,
  ZB_ZCL_BASIC_POWER_SOURCE_BATTERY = 0x03,
  ZB_ZCL_BASIC_POWER_SOURCE_DC_SOURCE = 0x04,
  ZB_ZCL_BASIC_POWER_SOURCE_EMERGENCY_MAINS_CONST = 0x05,

  ZB_ZCL_BASIC_POWER_SOURCE_EMERGENCY_MAINS_TRANSF = 0x06

};





enum zb_zcl_basic_physical_env_e
{

  ZB_ZCL_BASIC_ENV_UNSPECIFIED = 0,

  ZB_ZCL_BASIC_ENV_UNKNOWN = 0xff
};




enum zb_zcl_basic_alarm_mask_e
{

  ZB_ZCL_BASIC_ALARM_MASK_HW_FAULT = 0,

  ZB_ZCL_BASIC_ALARM_MASK_SW_FAULT = 1
};




typedef struct zb_zcl_basic_disable_local_conf_s
{

  zb_bitfield_t reset_disabled : 1;

  zb_bitfield_t config_enabled : 1;

  zb_bitfield_t reserved : 6;
} zb_zcl_basic_disable_local_conf_t;
# 412 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h"
typedef struct zb_zcl_basic_attrs_s
{



  zb_uint8_t zcl_version;




  zb_uint8_t power_source;
} zb_zcl_basic_attrs_t;
# 442 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h"
enum zb_zcl_basic_cmd_e
{
  ZB_ZCL_CMD_BASIC_RESET_ID = 0x00,
};
# 505 "../../../../../../../../external/zboss/include/zcl/zb_zcl_basic.h"
zb_void_t zb_zcl_basic_init_server(void);
zb_void_t zb_zcl_basic_init_client(void);
# 53 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h"
enum zb_zcl_alarms_attr_e
{

  ZB_ZCL_ATTR_ALARMS_ALARM_COUNT_ID = 0x0000
};
# 79 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h"
enum zb_zcl_alarms_cmd_e
{
  ZB_ZCL_CMD_ALARMS_RESET_ALARM_ID = 0x00,
  ZB_ZCL_CMD_ALARMS_RESET_ALL_ALARMS_ID = 0x01,
  ZB_ZCL_CMD_ALARMS_GET_ALARM_ID = 0x02,
  ZB_ZCL_CMD_ALARMS_RESET_ALARM_LOG_ID = 0x03
};


typedef struct zb_zcl_alarms_reset_alarm_req_s
{

  zb_uint8_t alarm_code;

  zb_uint16_t cluster_id;
} __attribute__ ((packed)) zb_zcl_alarms_reset_alarm_req_t;
# 218 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h"
enum zb_zcl_alarms_cmd_resp_e
{
  ZB_ZCL_CMD_ALARMS_ALARM_ID = 0x00,
  ZB_ZCL_CMD_ALARMS_GET_ALARM_RES_ID = 0x01
};
# 239 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h"
typedef zb_zcl_alarms_reset_alarm_req_t zb_zcl_alarms_alarm_res_t;

typedef struct zb_zcl_alarm_get_alarm_hdr_res_s
{
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zcl_alarm_get_alarm_hdr_res_t;


typedef struct zb_zcl_alarm_get_alarm_res_s
{
  zb_uint8_t status;
  zb_uint8_t alarm_code;
  zb_uint16_t cluster_id;
  zb_uint32_t timestamp;
} __attribute__ ((packed)) zb_zcl_alarm_get_alarm_res_t;
# 355 "../../../../../../../../external/zboss/include/zcl/zb_zcl_alarms.h"
zb_void_t zb_zcl_alarms_init_server(void);
zb_void_t zb_zcl_alarms_init_client(void);
# 54 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_power_config.h" 1
# 60 "../../../../../../../../external/zboss/include/zcl/zb_zcl_power_config.h"
zb_void_t zb_zcl_power_config_write_attr_hook(zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *new_value);
# 71 "../../../../../../../../external/zboss/include/zcl/zb_zcl_power_config.h"
enum zb_zcl_power_config_attr_e
{

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_VOLTAGE_ID = 0x0000,

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_FREQUENCY_ID = 0x0001,

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_ALARM_MASK_ID = 0x0010,

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_VOLTAGE_MIN_THRESHOLD = 0x0011,

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_VOLTAGE_MAX_THRESHOLD = 0x0012,

  ZB_ZCL_ATTR_POWER_CONFIG_MAINS_DWELL_TRIP_POINT = 0x0013,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_VOLTAGE_ID = 0x0020,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_REMAINING_ID = 0x0021,



  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_MANUFACTURER_ID = 0x0030,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_SIZE_ID = 0x0031,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_A_HR_RATING_ID = 0x0032,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_QUANTITY_ID = 0x0033,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_RATED_VOLTAGE_ID = 0x0034,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_ALARM_MASK_ID = 0x0035,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_VOLTAGE_MIN_THRESHOLD_ID = 0x0036,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_VOLTAGE_THRESHOLD1_ID = 0x0037,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_VOLTAGE_THRESHOLD2_ID = 0x0038,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_VOLTAGE_THRESHOLD3_ID = 0x0039,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_PERCENTAGE_MIN_THRESHOLD_ID = 0x003a,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_PERCENTAGE_THRESHOLD1_ID = 0x003b,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_PERCENTAGE_THRESHOLD2_ID = 0x003c,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_PERCENTAGE_THRESHOLD3_ID = 0x003d,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY_ALARM_STATE_ID = 0x003e,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_VOLTAGE_ID = 0x0040,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_REMAINING_ID = 0x0041,


  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_MANUFACTURER_ID = 0x0050,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_SIZE_ID = 0x0051,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_A_HR_RATING_ID = 0x0052,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_QUANTITY_ID = 0x0053,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_RATED_VOLTAGE_ID = 0x0054,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_ALARM_MASK_ID = 0x0055,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_VOLTAGE_MIN_THRESHOLD_ID = 0x0056,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_VOLTAGE_THRESHOLD1_ID = 0x0057,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_VOLTAGE_THRESHOLD2_ID = 0x0058,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_VOLTAGE_THRESHOLD3_ID = 0x0059,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_PERCENTAGE_MIN_THRESHOLD_ID = 0x005a,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_PERCENTAGE_THRESHOLD1_ID = 0x005b,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_PERCENTAGE_THRESHOLD2_ID = 0x005c,
  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_PERCENTAGE_THRESHOLD3_ID = 0x005d,

  ZB_ZCL_ATTR_POWER_CONFIG_BATTERY2_ALARM_STATE_ID = 0x005e,


  ZB_ZCL_ATTR_POWER_CONFIG_CUSTOM_BATTERY_VOLTAGE_SHARP_ID = 0x8020


};





enum zb_zcl_power_config_mains_alarm_mask_e
{

  ZB_ZCL_POWER_CONFIG_MAINS_ALARM_MASK_VOLTAGE_LOW = 0x01,

  ZB_ZCL_POWER_CONFIG_MAINS_ALARM_MASK_VOLTAGE_HIGH = 0x02,

  ZB_ZCL_POWER_CONFIG_MAINS_ALARM_MASK_VOLTAGE_UNAVAIL = 0x04,

};
# 233 "../../../../../../../../external/zboss/include/zcl/zb_zcl_power_config.h"
enum zb_zcl_power_config_battery_size_e
{

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_NO_BATTERY = 0,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_BUILT_IN = 1,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_OTHER = 2,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_AA = 3,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_AAA = 4,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_C = 5,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_D = 6,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_CR2 = 7,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_CR123A = 8,

    ZB_ZCL_POWER_CONFIG_BATTERY_SIZE_UNKNOWN = 0xff,
};





enum zb_zcl_power_config_battery_alarm_mask_e
{

  ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_MASK_VOLTAGE_LOW = 0,

  ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_MASK_ALARM1 = 1,

  ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_MASK_ALARM2 = 2,

  ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_MASK_ALARM3 = 3,
};




enum zb_zcl_power_config_battery_alarm_code_e
{


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE1_MIN_THRESHOLD = 0x10,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE1_VOLTAGE1 = 0x11,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE1_VOLTAGE2 = 0x12,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE1_VOLTAGE3 = 0x13,



    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE2_MIN_THRESHOLD = 0x20,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE2_VOLTAGE1 = 0x21,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE2_VOLTAGE2 = 0x22,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE2_VOLTAGE3 = 0x23,



    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE3_MIN_THRESHOLD = 0x30,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE3_VOLTAGE1 = 0x31,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE3_VOLTAGE2 = 0x32,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_SOURCE3_VOLTAGE3 = 0x33,

    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_CODE_MAINS_POWER_SUPPLY_LOST_UNAVAILABLE = 0x3a,
};




enum zb_zcl_power_config_battery_alarm_state_e
{


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE1_MIN_THRESHOLD = 1 << 0,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE1_VOLTAGE1 = 1 << 1,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE1_VOLTAGE2 = 1 << 2,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE1_VOLTAGE3 = 1 << 3,



    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE2_MIN_THRESHOLD = 1 << 10,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE2_VOLTAGE1 = 1 << 11,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE2_VOLTAGE2 = 1 << 12,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE2_VOLTAGE3 = 1 << 13,




    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE3_MIN_THRESHOLD = 1l << 20,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE3_VOLTAGE1 = 1l << 21,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE3_VOLTAGE2 = 1l << 22,


    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_SOURCE3_VOLTAGE3 = 1l << 23,

    ZB_ZCL_POWER_CONFIG_BATTERY_ALARM_STATE_MAINS_POWER_SUPPLY_LOST_UNAVAILABLE = 1l << 30,
};
# 679 "../../../../../../../../external/zboss/include/zcl/zb_zcl_power_config.h"
zb_void_t zb_zcl_power_config_init_server(void);
zb_void_t zb_zcl_power_config_init_client(void);
# 55 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h" 1
# 78 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
enum zb_zcl_identify_attr_e
{

  ZB_ZCL_ATTR_IDENTIFY_IDENTIFY_TIME_ID = 0x0000
};
# 96 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
enum zb_zcl_identify_cmd_e
{
  ZB_ZCL_CMD_IDENTIFY_IDENTIFY_ID = 0x00,
  ZB_ZCL_CMD_IDENTIFY_IDENTIFY_QUERY_ID = 0x01,
  ZB_ZCL_CMD_IDENTIFY_TRIGGER_EFFECT_ID = 0x40,
  ZB_ZCL_CMD_IDENTIFY_IDENTIFY_QUERY_RSP_ID = 0x00
};
# 122 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
enum zb_zcl_identify_trigger_effect_e
{

  ZB_ZCL_IDENTIFY_EFFECT_ID_BLINK = 0x00,


  ZB_ZCL_IDENTIFY_EFFECT_ID_BREATHE = 0x01,


  ZB_ZCL_IDENTIFY_EFFECT_ID_OKAY = 0x02,


  ZB_ZCL_IDENTIFY_EFFECT_ID_CHANNEL_CHANGE = 0xb,



  ZB_ZCL_IDENTIFY_EFFECT_ID_FINISH_EFFECT = 0xfe,

  ZB_ZCL_IDENTIFY_EFFECT_ID_STOP = 0xff,
};




enum zb_zcl_identify_trigger_variant_e
{

  ZB_ZCL_IDENTIFY_EFFECT_ID_VARIANT_DEFAULT = 0x00,
};



typedef struct zb_zcl_identify_effect_req_s
{
  zb_uint8_t effect_id;
  zb_uint8_t effect_variant;
} __attribute__ ((packed)) zb_zcl_identify_effect_req_t;
# 219 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
typedef struct zb_zcl_identify_effect_value_param_s
{
  zb_uint8_t effect_id;
  zb_uint8_t effect_variant;
} zb_zcl_identify_effect_value_param_t;



typedef struct zb_zcl_identify_effect_user_app_schedule_e
{
  zb_zcl_parsed_hdr_t cmd_info;

  zb_zcl_identify_effect_value_param_t param;

} zb_zcl_identify_effect_user_app_schedule_t;
# 319 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
zb_uint8_t zb_zcl_start_identifying(zb_uint8_t endpoint, zb_uint16_t timeout);
# 329 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
void zb_zcl_stop_identifying(zb_uint8_t endpoint);






zb_uint8_t zb_zcl_is_identifying(zb_uint8_t endpoint);


typedef struct zb_zcl_identify_req_s
{
  zb_uint16_t timeout;
} __attribute__ ((packed)) zb_zcl_identify_req_t;


typedef struct zb_zcl_identify_query_res_s
{
  zb_uint16_t timeout;
} __attribute__ ((packed)) zb_zcl_identify_query_res_t;
# 429 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
typedef struct zb_zcl_identify_attrs_s
{



  zb_uint16_t identify_time;
} zb_zcl_identify_attrs_t;
# 450 "../../../../../../../../external/zboss/include/zcl/zb_zcl_identify.h"
zb_uint8_t zb_zcl_get_cmd_list_identify(zb_bool_t is_client_generated, zb_uint8_t **cmd_list);





zb_void_t zb_zcl_identify_init_server(void);
zb_void_t zb_zcl_identify_init_client(void);
# 56 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off_switch_conf.h" 1
# 75 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off_switch_conf.h"
enum zb_zcl_on_off_switch_configuration_attr_e
{

  ZB_ZCL_ATTR_ON_OFF_SWITCH_CONFIGURATION_SWITCH_TYPE_ID = 0x0000,

  ZB_ZCL_ATTR_ON_OFF_SWITCH_CONFIGURATION_SWITCH_ACTIONS_ID = 0x0010
};




enum zb_zcl_on_off_switch_configuration_switch_type_e
{

  ZB_ZCL_ON_OFF_SWITCH_CONFIGURATION_SWITCH_TYPE_TOGGLE = 0,

  ZB_ZCL_ON_OFF_SWITCH_CONFIGURATION_SWITCH_TYPE_MOMENTARY = 1
};
# 103 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off_switch_conf.h"
enum zb_zcl_on_off_switch_configuration_switch_actions_e
{





  ZB_ZCL_ON_OFF_SWITCH_CONFIGURATION_SWITCH_ACTIONS_TYPE1 = 0,





  ZB_ZCL_ON_OFF_SWITCH_CONFIGURATION_SWITCH_ACTIONS_TYPE2 = 1,




  ZB_ZCL_ON_OFF_SWITCH_CONFIGURATION_SWITCH_ACTIONS_TOGGLE = 2
};
# 180 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off_switch_conf.h"
zb_void_t zb_zcl_on_off_switch_config_init_server(void);
zb_void_t zb_zcl_on_off_switch_config_init_client(void);
# 57 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h" 1
# 75 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
enum zb_zcl_on_off_attr_e
{

  ZB_ZCL_ATTR_ON_OFF_ON_OFF_ID = 0,

  ZB_ZCL_ATTR_ON_OFF_GLOBAL_SCENE_CONTROL = 0x4000,

  ZB_ZCL_ATTR_ON_OFF_ON_TIME = 0x4001,

  ZB_ZCL_ATTR_ON_OFF_OFF_WAIT_TIME = 0x4002,


  ZB_ZCL_ATTR_ON_OFF_START_UP_ON_OFF = 0x4003,
};


enum zb_zcl_on_off_on_off_e
{

  ZB_ZCL_ON_OFF_IS_OFF = 0,

  ZB_ZCL_ON_OFF_IS_ON = 1
};

enum zb_zcl_on_off_start_up_on_off_e
{

  ZB_ZCL_ON_OFF_START_UP_ON_OFF_IS_OFF = 0,

  ZB_ZCL_ON_OFF_START_UP_ON_OFF_IS_ON = 1,

  ZB_ZCL_ON_OFF_START_UP_ON_OFF_IS_TOGGLE = 2,

  ZB_ZCL_ON_OFF_START_UP_ON_OFF_IS_PREVIOUS = 0xFF
};
# 158 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
enum zb_zcl_on_off_cmd_e
{
  ZB_ZCL_CMD_ON_OFF_OFF_ID = 0x00,
  ZB_ZCL_CMD_ON_OFF_ON_ID = 0x01,
  ZB_ZCL_CMD_ON_OFF_TOGGLE_ID = 0x02,
  ZB_ZCL_CMD_ON_OFF_OFF_WITH_EFFECT_ID = 0x40,
  ZB_ZCL_CMD_ON_OFF_ON_WITH_RECALL_GLOBAL_SCENE_ID = 0x41,
  ZB_ZCL_CMD_ON_OFF_ON_WITH_TIMED_OFF_ID = 0x42,
};
# 287 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
enum zb_zcl_on_off_effect_e
{

  ZB_ZCL_ON_OFF_EFFECT_ID_DELAYED_ALL_OFF = 0x00,

  ZB_ZCL_ON_OFF_EFFECT_ID_DYING_LIGHT = 0x01
};



enum zb_zcl_on_off_effect_variant_delayed_e
{

  ZB_ZCL_ON_OFF_EFFECT_VARIANT_FADE = 0x00,

  ZB_ZCL_ON_OFF_EFFECT_VARIANT_NO_FADE = 0x01,

  ZB_ZCL_ON_OFF_EFFECT_VARIANT_50PART_FADE = 0x02
};



enum zb_zcl_on_off_effect_variant_dying_e
{

  ZB_ZCL_ON_OFF_EFFECT_VARIANT_20PART_FADE = 0x00
};






typedef struct zb_zcl_on_off_off_with_effect_req_s
{

  zb_uint8_t effect_id;

  zb_uint8_t effect_variant;
} __attribute__ ((packed)) zb_zcl_on_off_off_with_effect_req_t;


typedef struct zb_zcl_on_off_on_with_timed_off_req_s
{

  zb_uint8_t on_off;

  zb_uint16_t on_time;

  zb_uint16_t off_wait_time;
} __attribute__ ((packed)) zb_zcl_on_off_on_with_timed_off_req_t;
# 396 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
typedef struct zb_zcl_on_off_set_effect_value_param_s
{
  zb_uint8_t effect_id;
  zb_uint8_t effect_variant;
} zb_zcl_on_off_set_effect_value_param_t;


typedef struct zb_zcl_on_off_effect_user_app_schedule_e
{
  zb_zcl_parsed_hdr_t cmd_info;

  zb_zcl_on_off_set_effect_value_param_t param;

} zb_zcl_on_off_effect_user_app_schedule_t;
# 476 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
typedef struct zb_on_off_user_app_schedule_e
{
  zb_zcl_parsed_hdr_t cmd_info;
  zb_uint8_t new_value;
  zb_bool_t is_run_timer;
} zb_on_off_user_app_schedule_t;
# 491 "../../../../../../../../external/zboss/include/zcl/zb_zcl_on_off.h"
zb_void_t zb_zcl_on_off_init_server(void);
zb_void_t zb_zcl_on_off_init_client(void);
# 58 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h" 1
# 67 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
enum zb_zcl_groups_attr_e
{

  ZB_ZCL_ATTR_GROUPS_NAME_SUPPORT_ID = 0
};


enum zb_zcl_groups_name_support_e
{

  ZB_ZCL_ATTR_GROUPS_NAME_NOT_SUPPORTED = 0,

  ZB_ZCL_ATTR_GROUPS_NAME_SUPPORTED = 1 << 7
};
# 102 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
enum zb_zcl_groups_cmd_e
{
  ZB_ZCL_CMD_GROUPS_ADD_GROUP = 0x00,
  ZB_ZCL_CMD_GROUPS_VIEW_GROUP = 0x01,
  ZB_ZCL_CMD_GROUPS_GET_GROUP_MEMBERSHIP = 0x02,

  ZB_ZCL_CMD_GROUPS_REMOVE_GROUP = 0x03,
  ZB_ZCL_CMD_GROUPS_REMOVE_ALL_GROUPS = 0x04,
  ZB_ZCL_CMD_GROUPS_ADD_GROUP_IF_IDENTIFYING = 0x05

};




enum zb_zcl_groups_cmd_resp_e
{
  ZB_ZCL_CMD_GROUPS_ADD_GROUP_RES = 0x00,
  ZB_ZCL_CMD_GROUPS_VIEW_GROUP_RES = 0x01,

  ZB_ZCL_CMD_GROUPS_GET_GROUP_MEMBERSHIP_RES = 0x02,

  ZB_ZCL_CMD_GROUPS_REMOVE_GROUP_RES = 0x03

};
# 178 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_add_group_req_s
{
  zb_uint16_t group_id;
  zb_char_t group_name[1];
}
__attribute__ ((packed))
zb_zcl_groups_add_group_req_t;
# 217 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_add_group_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
}
__attribute__ ((packed))
zb_zcl_groups_add_group_res_t;
# 298 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_view_group_req_s
{
  zb_uint16_t group_id;
}
__attribute__ ((packed))
zb_zcl_groups_view_group_req_t;
# 335 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_view_group_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
  zb_uint8_t group_name[1];
}
__attribute__ ((packed))
zb_zcl_groups_view_group_res_t;
# 414 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_get_group_membership_req_s
{
  zb_uint8_t group_count;
  zb_uint16_t group_id[1];
}
__attribute__ ((packed))
zb_zcl_groups_get_group_membership_req_t;
# 461 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_get_group_membership_res_s
{
  zb_uint8_t capacity;
  zb_uint8_t group_count;
  zb_uint16_t group_id[1];
}
__attribute__ ((packed))
zb_zcl_groups_get_group_membership_res_t;
# 572 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_remove_group_req_s
{
  zb_uint16_t group_id;
}
__attribute__ ((packed))
zb_zcl_groups_remove_group_req_t;
# 609 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
typedef struct zb_zcl_groups_remove_group_res_s
{
  zb_uint8_t status;
  zb_uint16_t group_id;
}
__attribute__ ((packed))
zb_zcl_groups_remove_group_res_t;
# 759 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
zb_bool_t zb_zcl_process_groups_commands_srv(zb_uint8_t param);
# 769 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
zb_bool_t zb_zcl_process_groups_commands_cli(zb_uint8_t param);
# 800 "../../../../../../../../external/zboss/include/zcl/zb_zcl_groups.h"
zb_void_t zb_zcl_groups_init_server(void);
zb_void_t zb_zcl_groups_init_client(void);
# 59 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h" 1
# 94 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
enum zb_zcl_door_lock_attr_e
{

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_STATE_ID = 0x0000,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_TYPE_ID = 0x0001,

  ZB_ZCL_ATTR_DOOR_LOCK_ACTUATOR_ENABLED_ID = 0x0002,

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_ID = 0x0003,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_OF_DOOR_OPEN_EVENTS_ID = 0x0004,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_OF_DOOR_CLOSED_EVENTS_ID = 0x0005,

  ZB_ZCL_ATTR_DOOR_LOCK_OPEN_PERIOD_ID = 0x0006,

  ZB_ZCL_ATTR_DOOR_LOCK_NUMBER_OF_LOG_RECORDS_SUPPORTED_ID = 0x0010,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_TOTAL_USERS_ID = 0x0011,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_PIN_USERS_ID = 0x0012,

  ZB_ZCL_ATTR_DOOR_LOCK_NUMBER_OF_RFID_USERS_SUPPORTED_ID = 0x0013,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_WEEK_DAY_SCHEDULE_PER_USER_ID = 0x0014,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_YEAR_DAY_SCHEDULE_PER_USER_ID = 0x0015,

  ZB_ZCL_ATTR_DOOR_LOCK_NUM_HOLIDAY_SCHEDULE_ID = 0x0016,

  ZB_ZCL_ATTR_DOOR_LOCK_MAX_PIN_LEN_ID = 0x0017,

  ZB_ZCL_ATTR_DOOR_LOCK_MIN_PIN_LEN_ID = 0x0018,


  ZB_ZCL_ATTR_DOOR_LOCK_MAX_RFID_CODE_LENGTH_ID = 0x0019,


  ZB_ZCL_ATTR_DOOR_LOCK_MIN_RFID_CODE_LENGTH_ID = 0x001A,

  ZB_ZCL_ATTR_DOOR_LOCK_ENABLE_LOGGING_ID = 0x0020,


  ZB_ZCL_ATTR_DOOR_LOCK_LANGUAGE_ID = 0x0021,

  ZB_ZCL_ATTR_DOOR_LOCK_LED_SETTINGS_ID = 0x0022,


  ZB_ZCL_ATTR_DOOR_LOCK_AUTO_RELOCK_TIME_ID = 0x0023,


  ZB_ZCL_ATTR_DOOR_LOCK_SOUND_VOLUME_ID = 0x0024,

  ZB_ZCL_ATTR_DOOR_LOCK_OPERATING_MODE_ID = 0x0025,

  ZB_ZCL_ATTR_DOOR_LOCK_OPERATION_MODES_SUPPORTED_ID = 0x0026,





  ZB_ZCL_ATTR_DOOR_LOCK_DEFAULT_CONFIGURATION_REGISTER_ID = 0x0027,

  ZB_ZCL_ATTR_DOOR_LOCK_ENABLE_LOCAL_PROGRAMMING_ID = 0x0028,


  ZB_ZCL_ATTR_DOOR_LOCK_ENABLE_ONE_TOUCH_LOCKING_ID = 0x0029,


  ZB_ZCL_ATTR_DOOR_LOCK_ENABLE_INSIDE_STATUS_LED_ID = 0x002A,


  ZB_ZCL_ATTR_DOOR_LOCK_ENABLE_PRIVACY_MODE_BUTTON_ID = 0x002B,


  ZB_ZCL_ATTR_DOOR_LOCK_WRONG_CODE_ENTRY_LIMIT_ID = 0x0030,

  ZB_ZCL_ATTR_DOOR_LOCK_USER_CODE_TEMPORARY_DISABLE_TIME_ID = 0x0031,


  ZB_ZCL_ATTR_DOOR_LOCK_SEND_PIN_OVER_THE_AIR_ID = 0x0032,

  ZB_ZCL_ATTR_DOOR_LOCK_REQUIRE_PIN_RF_ID = 0x0033,


  ZB_ZCL_ATTR_DOOR_LOCK_SECURITY_LEVEL_ID = 0x0034,

  ZB_ZCL_ATTR_DOOR_LOCK_ALARM_MASK_ID = 0x0040,

  ZB_ZCL_ATTR_DOOR_LOCK_KEYPAD_OPERATION_EVENT_MASK_ID = 0x0041,

  ZB_ZCL_ATTR_DOOR_LOCK_RF_OPERATION_EVENT_MASK_ID = 0x0042,

  ZB_ZCL_ATTR_DOOR_LOCK_MANUAL_OPERATION_EVENT_MASK_ID = 0x0043,

  ZB_ZCL_ATTR_DOOR_LOCK_RFID_OPERATION_EVENT_MASK_ID = 0x0044,

  ZB_ZCL_ATTR_DOOR_LOCK_KEYPAD_PROGRAMMING_EVENT_MASK_ID = 0x0045,

  ZB_ZCL_ATTR_DOOR_LOCK_RF_PROGRAMMING_EVENT_MASK_ID = 0x0046,

  ZB_ZCL_ATTR_DOOR_LOCK_RFID_PROGRAMMING_EVENT_MASK_ID = 0x0047,
};





enum zb_zcl_door_lock_lock_state_e
{

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_STATE_NOT_FULLY_LOCKED = 0x00,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_STATE_LOCKED = 0x01,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_STATE_UNLOCKED = 0x02,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_STATE_UNDEFINED = 0xff
};







enum zb_zcl_door_lock_lock_type_e
{

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_TYPE_DEADBOLT = 0x00,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_TYPE_MAGNETIC = 0x01,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_TYPE_OTHER = 0x02,

  ZB_ZCL_ATTR_DOOR_LOCK_LOCK_TYPE_UNDEFINED = 0xff
};







enum zb_zcl_door_lock_actuator_enabled_e
{

  ZB_ZCL_ATTR_DOOR_LOCK_ACTUATOR_ENABLED_DISABLED = 0x0b0,

  ZB_ZCL_ATTR_DOOR_LOCK_ACTUATOR_ENABLED_ENABLED = 0x0b1
};
# 254 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
enum zb_zcl_door_lock_door_state_e
{

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_OPEN = 0x00,

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_CLOSED = 0x01,

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_ERROR_JAMMED = 0x02,

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_ERROR_FORCED_OPEN = 0x03,

  ZB_ZCL_ATTR_DOOR_LOCK_DOOR_STATE_ERROR_UNSPECIFIED = 0x04
};
# 293 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
enum zb_zcl_door_lock_cmd_e
{

  ZB_ZCL_CMD_DOOR_LOCK_LOCK_DOOR = 0x00,

  ZB_ZCL_CMD_DOOR_LOCK_UNLOCK_DOOR = 0x01,

  ZB_ZCL_CMD_DOOR_LOCK_TOGGLE = 0x02,

  ZB_ZCL_CMD_DOOR_LOCK_UNLOCK_WITH_TIMEOUT = 0x03,

  ZB_ZCL_CMD_DOOR_LOCK_GET_LOG_RECORD = 0x04,

  ZB_ZCL_CMD_DOOR_LOCK_SET_PIN_CODE = 0x05,

  ZB_ZCL_CMD_DOOR_LOCK_GET_PIN_CODE = 0x06,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_PIN_CODE = 0x07,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_ALL_PIN_CODES = 0x08,

  ZB_ZCL_CMD_DOOR_LOCK_SET_USER_STATUS = 0x09,

  ZB_ZCL_CMD_DOOR_LOCK_GET_USER_STATUS = 0x0A,

  ZB_ZCL_CMD_DOOR_LOCK_SET_WEEKDAY_SCHEDULE = 0x0B,

  ZB_ZCL_CMD_DOOR_LOCK_GET_WEEKDAY_SCHEDULE = 0x0C,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_WEEKDAY_SCHEDULE = 0x0D,

  ZB_ZCL_CMD_DOOR_LOCK_SET_YEAR_DAY_SCHEDULE = 0x0E,

  ZB_ZCL_CMD_DOOR_LOCK_GET_YEAR_DAY_SCHEDULE = 0x0F,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_YEAR_DAY_SCHEDULE = 0x10,


  ZB_ZCL_CMD_DOOR_LOCK_SET_HOLIDAY_SCHEDULE = 0x11,

  ZB_ZCL_CMD_DOOR_LOCK_GET_HOLIDAY_SCHEDULE = 0x12,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_HOLIDAY_SCHEDULE = 0x13,

  ZB_ZCL_CMD_DOOR_LOCK_SET_USER_TYPE = 0x14,

  ZB_ZCL_CMD_DOOR_LOCK_GET_USER_TYPE = 0x15,

  ZB_ZCL_CMD_DOOR_LOCK_SET_RFID_CODE = 0x16,

  ZB_ZCL_CMD_DOOR_LOCK_GET_RFID_CODE = 0x17,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_RFID_CODE = 0x18,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_ALL_RFID_CODES = 0x19,
};




enum zb_zcl_door_lock_cmd_resp_e
{

  ZB_ZCL_CMD_DOOR_LOCK_LOCK_DOOR_RES = 0x00,

  ZB_ZCL_CMD_DOOR_LOCK_UNLOCK_DOOR_RES = 0x01,

  ZB_ZCL_CMD_DOOR_LOCK_TOGGLE_RESPONSE = 0x02,


  ZB_ZCL_CMD_DOOR_LOCK_UNLOCK_WITH_TIMEOUT_RESPONSE = 0x03,

  ZB_ZCL_CMD_DOOR_LOCK_GET_LOG_RECORD_RESPONSE = 0x04,

  ZB_ZCL_CMD_DOOR_LOCK_SET_PIN_CODE_RESPONSE = 0x05,

  ZB_ZCL_CMD_DOOR_LOCK_GET_PIN_CODE_RESPONSE = 0x06,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_PIN_CODE_RESPONSE = 0x07,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_ALL_PIN_CODES_RESPONSE = 0x08,

  ZB_ZCL_CMD_DOOR_LOCK_SET_USER_STATUS_RESPONSE = 0x09,

  ZB_ZCL_CMD_DOOR_LOCK_GET_USER_STATUS_RESPONSE = 0x0A,

  ZB_ZCL_CMD_DOOR_LOCK_SET_WEEKDAY_SCHEDULE_RESPONSE = 0x0B,

  ZB_ZCL_CMD_DOOR_LOCK_GET_WEEKDAY_SCHEDULE_RESPONSE = 0x0C,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_WEEKDAY_SCHEDULE_RESPONSE = 0x0D,

  ZB_ZCL_CMD_DOOR_LOCK_SET_YEAR_DAY_SCHEDULE_RESPONSE = 0x0E,

  ZB_ZCL_CMD_DOOR_LOCK_GET_YEAR_DAY_SCHEDULE_RESPONSE = 0x0F,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_YEAR_DAY_SCHEDULE_RESPONSE = 0x10,

  ZB_ZCL_CMD_DOOR_LOCK_SET_HOLIDAY_SCHEDULE_RESPONSE = 0x11,

  ZB_ZCL_CMD_DOOR_LOCK_GET_HOLIDAY_SCHEDULE_RESPONSE = 0x12,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_HOLIDAY_SCHEDULE_RESPONSE = 0x13,

  ZB_ZCL_CMD_DOOR_LOCK_SET_USER_TYPE_RESPONSE = 0x14,

  ZB_ZCL_CMD_DOOR_LOCK_GET_USER_TYPE_RESPONSE = 0x15,

  ZB_ZCL_CMD_DOOR_LOCK_SET_RFID_CODE_RESPONSE = 0x16,

  ZB_ZCL_CMD_DOOR_LOCK_GET_RFID_CODE_RESPONSE = 0x17,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_RFID_CODE_RESPONSE = 0x18,

  ZB_ZCL_CMD_DOOR_LOCK_CLEAR_ALL_RFID_CODES_RESPONSE = 0x19,


  ZB_ZCL_CMD_DOOR_LOCK_OPERATION_EVENT_NOTIFICATION_ID = 0x20,


  ZB_ZCL_CMD_DOOR_LOCK_PROGRAMMING_EVENT_NOTIFICATION = 0x21,
};
# 540 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
enum zb_zcl_door_lock_operation_event_code_e
{
  ZB_ZCL_DOOR_LOCK_OPERATION_EVENT_CODE_UNKNOWN = 0x00,
  ZB_ZCL_DOOR_LOCK_OPERATION_EVENT_CODE_LOCK = 0x01,
  ZB_ZCL_DOOR_LOCK_OPERATION_EVENT_CODE_UNLOCK = 0x02,
  ZB_ZCL_DOOR_LOCK_OPERATION_EVENT_CODE_MANUAL_LOCK = 0x0D,
  ZB_ZCL_DOOR_LOCK_OPERATION_EVENT_CODE_MANUAL_UNLOCK = 0x0E,
};
# 671 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
typedef struct zb_zcl_door_lock_read_lock_door_res_payload_s
{
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zcl_door_lock_read_lock_door_res_payload_t;
# 688 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
typedef struct zb_zcl_door_lock_read_unlock_door_res_payload_s
{
  zb_uint8_t status;
} __attribute__ ((packed)) zb_zcl_door_lock_read_unlock_door_res_payload_t;
# 747 "../../../../../../../../external/zboss/include/zcl/zb_zcl_door_lock.h"
zb_void_t zb_zcl_door_lock_init_server(void);
zb_void_t zb_zcl_door_lock_init_client(void);
# 60 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_binary_input.h" 1
# 74 "../../../../../../../../external/zboss/include/zcl/zb_zcl_binary_input.h"
enum zb_zcl_binary_input_attr_e
{


  ZB_ZCL_ATTR_BINARY_INPUT_ACTIVE_TEXT_ID = 0x0004,



  ZB_ZCL_ATTR_BINARY_INPUT_DESCRIPTION_ID = 0x001C,


  ZB_ZCL_ATTR_BINARY_INPUT_INACTIVE_TEXT_ID = 0x002E,


  ZB_ZCL_ATTR_BINARY_INPUT_OUT_OF_SERVICE_ID = 0x0051,




  ZB_ZCL_ATTR_BINARY_INPUT_POLARITY_ID = 0x0054,


  ZB_ZCL_ATTR_BINARY_INPUT_PRESENT_VALUE_ID = 0x0055,


  ZB_ZCL_ATTR_GP_ATTR_BINARY_INPUT_BATTERY_VALUE_ID = 0x0056,
  ZB_ZCL_ATTR_GP_ATTR_BINARY_INPUT_TEMPERATURE_VALUE_ID = 0x0057,
  ZB_ZCL_ATTR_GP_ATTR_BINARY_INPUT_TAMPER_VALUE_ID = 0x0058,





  ZB_ZCL_ATTR_BINARY_INPUT_RELIABILITY_ID = 0x0067,


  ZB_ZCL_ATTR_BINARY_INPUT_STATUS_FLAG_ID = 0x006F,


  ZB_ZCL_ATTR_BINARY_INPUT_APPLICATION_TYPE_ID = 0x0100,
};





enum zb_zcl_binary_input_status_flag_value_e
{
  ZB_ZCL_BINARY_INPUT_STATUS_FLAG_NORMAL = 0x00,
  ZB_ZCL_BINARY_INPUT_STATUS_FLAG_IN_ALARM = 0x01,
  ZB_ZCL_BINARY_INPUT_STATUS_FLAG_FAULT = 0x02,
  ZB_ZCL_BINARY_INPUT_STATUS_FLAG_OVERRIDEN = 0x04,
  ZB_ZCL_BINARY_INPUT_STATUS_FLAG_OUT_OF_SERVICE = 0x08,
};
# 289 "../../../../../../../../external/zboss/include/zcl/zb_zcl_binary_input.h"
zb_void_t zb_zcl_binary_input_init_server(void);
zb_void_t zb_zcl_binary_input_init_client(void);
# 61 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h" 1
# 67 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
enum zb_zcl_level_control_attr_e
{

  ZB_ZCL_ATTR_LEVEL_CONTROL_CURRENT_LEVEL_ID = 0x0000,

  ZB_ZCL_ATTR_LEVEL_CONTROL_REMAINING_TIME_ID = 0x0001,



  ZB_ZCL_ATTR_LEVEL_CONTROL_MIN_LEVEL_ID = 0x0002,


  ZB_ZCL_ATTR_LEVEL_CONTROL_MAX_LEVEL_ID = 0x0003,


  ZB_ZCL_ATTR_LEVEL_CONTROL_CURRENT_FREQUENCY_ID = 0x0004,


  ZB_ZCL_ATTR_LEVEL_CONTROL_MIN_FREQUENCY_ID = 0x0005,


  ZB_ZCL_ATTR_LEVEL_CONTROL_MAX_FREQUENCY_ID = 0x0006,

  ZB_ZCL_ATTR_LEVEL_CONTROL_ON_OFF_TRANSITION_TIME_ID = 0x0010,




  ZB_ZCL_ATTR_LEVEL_CONTROL_ON_LEVEL_ID = 0x0011,




  ZB_ZCL_ATTR_LEVEL_CONTROL_ON_TRANSITION_TIME_ID = 0x0012,



  ZB_ZCL_ATTR_LEVEL_CONTROL_OFF_TRANSITION_TIME_ID = 0x0013,


  ZB_ZCL_ATTR_LEVEL_CONTROL_DEFAULT_MOVE_RATE_ID = 0x0014,


  ZB_ZCL_ATTR_LEVEL_CONTROL_OPTIONS_ID = 0x000F,



  ZB_ZCL_ATTR_LEVEL_CONTROL_START_UP_CURRENT_LEVEL_ID = 0x4000,


  ZB_ZCL_ATTR_LEVEL_CONTROL_MOVE_STATUS_ID = 0xefff
};




enum zb_zcl_level_control_options_e
{

  ZB_ZCL_LEVEL_CONTROL_OPTIONS_EXECUTE_IF_OFF = 0,
  ZB_ZCL_LEVEL_CONTROL_OPTIONS_RESERVED = 1,
};
# 270 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
typedef struct zb_zcl_level_control_move_addr_s
{
  zb_uint16_t src_addr;
  zb_uint8_t src_endpoint;
  zb_uint8_t dst_endpoint;
  zb_uint8_t cmd_id;
  zb_uint8_t seq_number;
  zb_bool_t disable_default_response;
  zb_uint16_t profile_id;
} zb_zcl_level_control_move_addr_t;



typedef struct zb_zcl_level_control_move_variables_s
{

  zb_uint8_t curr_level;

  zb_uint8_t end_level;

  zb_bool_t is_onoff;

  zb_zcl_level_control_move_addr_t addr;

  zb_uint16_t start_time;
} zb_zcl_level_control_move_variables_t;



typedef struct zb_zcl_level_control_move_status_s
{
  zb_zcl_level_control_move_variables_t move_var;
  zb_uint8_t buf_id;
} __attribute__ ((packed)) zb_zcl_level_control_move_status_t;
# 319 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
enum zb_zcl_level_control_cmd_e
{





  ZB_ZCL_CMD_LEVEL_CONTROL_MOVE_TO_LEVEL = 0x00,

  ZB_ZCL_CMD_LEVEL_CONTROL_MOVE = 0x01,

  ZB_ZCL_CMD_LEVEL_CONTROL_STEP = 0x02,

  ZB_ZCL_CMD_LEVEL_CONTROL_STOP = 0x03,

  ZB_ZCL_CMD_LEVEL_CONTROL_MOVE_TO_LEVEL_WITH_ON_OFF = 0x04,

  ZB_ZCL_CMD_LEVEL_CONTROL_MOVE_WITH_ON_OFF = 0x05,

  ZB_ZCL_CMD_LEVEL_CONTROL_STEP_WITH_ON_OFF = 0x06,

  ZB_ZCL_CMD_LEVEL_CONTROL_STOP_WITH_ON_OFF = 0x07,



  ZB_ZCL_CMD_LEVEL_CONTROL_MOVE_TO_CLOSEST_FREQUENCY = 0x08,
};
# 373 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
typedef struct zb_zcl_level_control_req_options_s
{

  zb_uint8_t options_mask;

  zb_uint8_t options_override;
} __attribute__ ((packed)) zb_zcl_level_control_req_options_t;
# 407 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
typedef struct zb_zcl_level_control_move_to_level_req_s
{

  zb_uint8_t level;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_level_control_move_to_level_req_t;
# 540 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
enum zb_zcl_level_control_move_mode_e
{
  ZB_ZCL_LEVEL_CONTROL_MOVE_MODE_UP = 0x00,
  ZB_ZCL_LEVEL_CONTROL_MOVE_MODE_DOWN = 0x01
};


typedef struct zb_zcl_level_control_move_req_s
{

  zb_uint8_t move_mode;

  zb_uint8_t rate;
} __attribute__ ((packed)) zb_zcl_level_control_move_req_t;
# 676 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
enum zb_zcl_level_control_step_mode_e
{
  ZB_ZCL_LEVEL_CONTROL_STEP_MODE_UP = 0x00,
  ZB_ZCL_LEVEL_CONTROL_STEP_MODE_DOWN = 0x01
};


typedef struct zb_zcl_level_control_step_req_s
{

  zb_uint8_t step_mode;

  zb_uint8_t step_size;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_level_control_step_req_t;
# 896 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
typedef struct zb_zcl_level_control_set_value_param_s
{
  zb_uint8_t new_value;
} zb_zcl_level_control_set_value_param_t;
# 917 "../../../../../../../../external/zboss/include/zcl/zb_zcl_level_control.h"
zb_void_t zb_zcl_level_control_init_server(void);
zb_void_t zb_zcl_level_control_init_client(void);
# 62 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_window_covering.h" 1
# 65 "../../../../../../../../external/zboss/include/zcl/zb_zcl_window_covering.h"
enum zb_zcl_window_covering_info_attr_e
{

  ZB_ZCL_ATTR_WINDOW_COVERING_WINDOW_COVERING_TYPE_ID = 0x0000,

  ZB_ZCL_ATTR_WINDOW_COVERING_PHYSICAL_CLOSED_LIMIT_LIFT_ID = 0x0001,

  ZB_ZCL_ATTR_WINDOW_COVERING_PHY_CLOSED_LIMIT_TILT_ID = 0x0002,

  ZB_ZCL_ATTR_WINDOW_COVERING_CURRENT_POSITION_LIFT_ID = 0x0003,

  ZB_ZCL_ATTR_WINDOW_COVERING_CURRENT_POSITION_TILT_ID = 0x0004,

  ZB_ZCL_ATTR_WINDOW_COVERING_NUMBER_OF_ACTUATIONS_LIFT_ID = 0x0005,

  ZB_ZCL_ATTR_WINDOW_COVERING_NUMBER_OF_ACTUATIONS_TILT_ID = 0x0006,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_STATUS_ID = 0x0007,

  ZB_ZCL_ATTR_WINDOW_COVERING_CURRENT_POSITION_LIFT_PERCENTAGE_ID = 0x0008,

  ZB_ZCL_ATTR_WINDOW_COVERING_CURRENT_POSITION_TILT_PERCENTAGE_ID = 0x0009
};




enum zb_zcl_window_covering_window_covering_type_e
{

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_ROLLERSHADE = 0x00,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_ROLLERSHADE_2_MOTOR = 0x01,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_ROLLERSHADE_EXTERIOR = 0x02,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_ROLLERSHADE_EXTERIOR_2_MOTOR = 0x03,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_DRAPERY = 0x04,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_AWNING = 0x05,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_SHUTTER = 0x06,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_TILT_BLIND_TILT_ONLY = 0x07,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_TILT_BLIND_LIFT_AND_TILT = 0x08,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_PROJECTOR_SCREEN = 0x09
};



enum zb_zcl_window_covering_config_status_e
{

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_OPERATIONAL = 0x01,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_ONLINE = 0x02,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_REVERSE_COMMANDS = 0x04,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_LIFT_CONTROL_IS_CLOSED_LOOP = 0x08,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_TILT_CONTROL_IS_CLOSED_LOOP = 0x10,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_LIFT_ENCODER_CONTROLLED = 0x20,

  ZB_ZCL_ATTR_WINDOW_COVERING_CONFIG_TILT_ENCODER_CONTROLLED = 0x40
};




enum zb_zcl_window_covering_settings_attr_e
{

  ZB_ZCL_ATTR_WINDOW_COVERING_INSTALLED_OPEN_LIMIT_LIFT_ID = 0x0010,

  ZB_ZCL_ATTR_WINDOW_COVERING_INSTALLED_CLOSED_LIMIT_LIFT_ID = 0x0011,

  ZB_ZCL_ATTR_WINDOW_COVERING_INSTALLED_OPEN_LIMIT_TILT_ID = 0x0012,

  ZB_ZCL_ATTR_WINDOW_COVERING_INSTALLED_CLOSED_LIMIT_TILT_ID = 0x0013,

  ZB_ZCL_ATTR_WINDOW_COVERING_VELOCITY_ID = 0x0014,

  ZB_ZCL_ATTR_WINDOW_COVERING_ACCELERATION_TIME_ID = 0x0015,

  ZB_ZCL_ATTR_WINDOW_COVERING_DECELERATION_TIME_ID = 0x0016,

  ZB_ZCL_ATTR_WINDOW_COVERING_MODE_ID = 0x0017,

  ZB_ZCL_ATTR_WINDOW_COVERING_INTERMEDIATE_SETPOINTS_LIFT_ID = 0x0018,

  ZB_ZCL_ATTR_WINDOW_COVERING_INTERMEDIATE_SETPOINTS_TILT_ID = 0x0019
};



enum zb_zcl_window_covering_mode_e
{

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_REVERSED_MOTOR_DIRECTION = 0x01,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_RUN_IN_CALIBRATION_MODE = 0x02,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_MOTOR_IS_RUNNING_IN_MAINTENANCE_MODE = 0x04,

  ZB_ZCL_ATTR_WINDOW_COVERING_TYPE_LEDS_WILL_DISPLAY_FEEDBACK = 0x08
};
# 460 "../../../../../../../../external/zboss/include/zcl/zb_zcl_window_covering.h"
enum zb_zcl_window_covering_cmd_e
{

  ZB_ZCL_CMD_WINDOW_COVERING_UP_OPEN = 0x00,

  ZB_ZCL_CMD_WINDOW_COVERING_DOWN_CLOSE = 0x01,

  ZB_ZCL_CMD_WINDOW_COVERING_STOP = 0x02,

  ZB_ZCL_CMD_WINDOW_COVERING_GO_TO_LIFT_VALUE = 0x04,

  ZB_ZCL_CMD_WINDOW_COVERING_GO_TO_LIFT_PERCENTAGE = 0x05,

  ZB_ZCL_CMD_WINDOW_COVERING_GO_TO_TILT_VALUE = 0x07,

  ZB_ZCL_CMD_WINDOW_COVERING_GO_TO_TILT_PERCENTAGE = 0x08
};
# 498 "../../../../../../../../external/zboss/include/zcl/zb_zcl_window_covering.h"
typedef struct zb_zcl_go_to_lift_value_req_s
{

  zb_uint16_t lift_value;
} __attribute__ ((packed)) zb_zcl_go_to_lift_value_req_t;



typedef struct zb_zcl_go_to_lift_percentage_req_s
{

  zb_uint8_t percentage_lift_value;
} __attribute__ ((packed)) zb_zcl_go_to_lift_percentage_req_t;


typedef struct zb_zcl_go_to_tilt_value_req_s
{

  zb_uint16_t tilt_value;
} __attribute__ ((packed)) zb_zcl_go_to_tilt_value_req_t;



typedef struct zb_zcl_go_to_tilt_percentage_req_s
{

  zb_uint8_t percentage_tilt_value;
} __attribute__ ((packed)) zb_zcl_go_to_tilt_percentage_req_t;
# 701 "../../../../../../../../external/zboss/include/zcl/zb_zcl_window_covering.h"
zb_void_t zb_zcl_window_covering_init_server(void);
zb_void_t zb_zcl_window_covering_init_client(void);
# 63 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h" 1
# 67 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_attr_e
{

  ZB_ZCL_ATTR_COLOR_CONTROL_CURRENT_HUE_ID = 0x0000,

  ZB_ZCL_ATTR_COLOR_CONTROL_CURRENT_SATURATION_ID = 0x0001,

  ZB_ZCL_ATTR_COLOR_CONTROL_REMAINING_TIME_ID = 0x0002,

  ZB_ZCL_ATTR_COLOR_CONTROL_CURRENT_X_ID = 0x0003,

  ZB_ZCL_ATTR_COLOR_CONTROL_CURRENT_Y_ID = 0x0004,


  ZB_ZCL_ATTR_COLOR_CONTROL_DRIFT_COMPENSATION_ID = 0x0005,


  ZB_ZCL_ATTR_COLOR_CONTROL_COMPENSATION_TEXT_ID = 0x0006,

  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_TEMPERATURE_ID = 0x0007,

  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_MODE_ID = 0x0008,


  ZB_ZCL_ATTR_COLOR_CONTROL_OPTIONS_ID = 0x000f,


  ZB_ZCL_ATTR_COLOR_CONTROL_ENHANCED_CURRENT_HUE_ID = 0x4000,


  ZB_ZCL_ATTR_COLOR_CONTROL_ENHANCED_COLOR_MODE_ID = 0x4001,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_LOOP_ACTIVE_ID = 0x4002,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_LOOP_DIRECTION_ID = 0x4003,



  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_LOOP_TIME_ID = 0x4004,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_LOOP_START_ENHANCED_HUE_ID = 0x4005,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_LOOP_STORED_ENHANCED_HUE_ID = 0x4006,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_CAPABILITIES_ID = 0x400a,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MIN_MIREDS_ID = 0x400b,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_TEMP_PHYSICAL_MAX_MIREDS_ID = 0x400c,





  ZB_ZCL_ATTR_COLOR_CONTROL_COUPLE_COLOR_TEMP_TO_LEVEL_MIN_MIREDS_ID = 0x400d,



  ZB_ZCL_ATTR_COLOR_CONTROL_START_UP_COLOR_TEMPERATURE_MIREDS_ID = 0x4010,

  ZB_ZCL_ATTR_COLOR_CONTROL_NUMBER_OF_PRIMARIES_ID = 0x0010,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_1_X_ID = 0x0011,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_1_Y_ID = 0x0012,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_1_INTENSITY_ID = 0x0013,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_2_X_ID = 0x0015,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_2_Y_ID = 0x0016,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_2_INTENSITY_ID = 0x0017,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_3_X_ID = 0x0019,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_3_Y_ID = 0x001a,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_3_INTENSITY_ID = 0x001b,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_4_X_ID = 0x0020,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_4_Y_ID = 0x0021,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_4_INTENSITY_ID = 0x0022,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_5_X_ID = 0x0024,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_5_Y_ID = 0x0025,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_5_INTENSITY_ID = 0x0026,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_6_X_ID = 0x0028,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_6_Y_ID = 0x0029,

  ZB_ZCL_ATTR_COLOR_CONTROL_PRIMARY_6_INTENSITY_ID = 0x002a,


  ZB_ZCL_ATTR_COLOR_CONTROL_WHITE_POINT_X_ID = 0x0030,


  ZB_ZCL_ATTR_COLOR_CONTROL_WHITE_POINT_Y_ID = 0x0031,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_RX_ID = 0x0032,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_RY_ID = 0x0033,



  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_R_INTENSITY_ID = 0x0034,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_GX_ID = 0x0036,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_GY_ID = 0x0037,



  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_G_INTENSITY_ID = 0x0038,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_BX_ID = 0x003a,


  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_BY_ID = 0x003b,



  ZB_ZCL_ATTR_COLOR_CONTROL_COLOR_POINT_B_INTENSITY_ID = 0x003c,
};
# 218 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_hue_e
{

  ZB_ZCL_COLOR_CONTROL_HUE_RED = 0,


  ZB_ZCL_COLOR_CONTROL_HUE_GREEN = 85 ,


  ZB_ZCL_COLOR_CONTROL_HUE_BLUE = 169
};
# 323 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_color_mode_e
{

  ZB_ZCL_COLOR_CONTROL_COLOR_MODE_HUE_SATURATION = 0x00,

  ZB_ZCL_COLOR_CONTROL_COLOR_MODE_CURRENT_X_Y = 0x01,

  ZB_ZCL_COLOR_CONTROL_COLOR_MODE_TEMPERATURE = 0x02,
};
# 391 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_options_e
{

  ZB_ZCL_COLOR_CONTROL_OPTIONS_EXECUTE_IF_OFF = 0,
};




enum zb_zcl_color_control_enhanced_color_mode_e
{

  ZB_ZCL_COLOR_CONTROL_COLOR_EX_MODE_HUE_SATURATION = 0x00,

  ZB_ZCL_COLOR_CONTROL_COLOR_EX_MODE_CURRENT_X_Y = 0x01,

  ZB_ZCL_COLOR_CONTROL_COLOR_EX_MODE_TEMPERATURE = 0x02,

  ZB_ZCL_COLOR_CONTROL_COLOR_EX_MODE_HUE_SATURATION_EX = 0x03,
};




enum zb_zcl_color_control_color_capabilities_e
{

  ZB_ZCL_COLOR_CONTROL_CAPABILITIES_HUE_SATURATION = 1 << 0,

  ZB_ZCL_COLOR_CONTROL_CAPABILITIES_EX_HUE = 1 << 1,

  ZB_ZCL_COLOR_CONTROL_CAPABILITIES_COLOR_LOOP = 1 << 2,

  ZB_ZCL_COLOR_CONTROL_CAPABILITIES_X_Y = 1 << 3,

  ZB_ZCL_COLOR_CONTROL_CAPABILITIES_COLOR_TEMP = 1 << 4,
};
# 875 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_loop_s
{

  zb_zcl_parsed_hdr_t cmd_info;


  zb_time_t time_last;


  zb_uint16_t attr_id;

  zb_int16_t rate;

  zb_uint16_t limit;

  zb_uint16_t time_mod;


  zb_uint16_t attr_id2;

  zb_int16_t rate2;

  zb_uint16_t limit2;

  zb_uint16_t time_mod2;

} zb_zcl_color_control_move_loop_t;
# 920 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_to_loop_s
{

  zb_zcl_parsed_hdr_t cmd_info;


  zb_uint16_t attr_id;

  zb_uint16_t start_value;

  zb_uint16_t finish_value;

  zb_bool_t incr_direction;


  zb_uint16_t attr_id2;

  zb_uint16_t start_value2;

  zb_uint16_t finish_value2;


  zb_time_t start_time;

  zb_time_t transition_time;
} zb_zcl_color_control_move_to_loop_t;
# 964 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_step_loop_s
{

  zb_zcl_parsed_hdr_t cmd_info;


  zb_uint16_t attr_id;

  zb_uint16_t rate;

  zb_uint16_t limit;


  zb_time_t last_time;

  zb_time_t step_time;


  zb_uint16_t attr_id2;

  zb_uint16_t rate2;

  zb_uint16_t limit2;

} zb_zcl_color_control_step_loop_t;
# 1022 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_cmd_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE = 0x00,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_HUE = 0x01,

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_HUE = 0x02,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_SATURATION = 0x03,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_SATURATION = 0x04,

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_SATURATION = 0x05,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE_SATURATION = 0x06,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_COLOR = 0x07,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_COLOR = 0x08,

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_COLOR = 0x09,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_COLOR_TEMPERATURE = 0x0a,

  ZB_ZCL_CMD_COLOR_CONTROL_ENHANCED_MOVE_TO_HUE = 0x40,

  ZB_ZCL_CMD_COLOR_CONTROL_ENHANCED_MOVE_HUE = 0x41,

  ZB_ZCL_CMD_COLOR_CONTROL_ENHANCED_STEP_HUE = 0x42,

  ZB_ZCL_CMD_COLOR_CONTROL_ENHANCED_MOVE_TO_HUE_SATURATION = 0x43,

  ZB_ZCL_CMD_COLOR_CONTROL_COLOR_LOOP_SET = 0x44,

  ZB_ZCL_CMD_COLOR_CONTROL_STOP_MOVE_STEP = 0x47,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_COLOR_TEMPERATURE = 0x4b,

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_COLOR_TEMPERATURE = 0x4c,
};
# 1100 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_move_direction_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_STOP = 0x00,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_UP = 0x01,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_DOWN = 0x03
};



enum zb_zcl_color_control_step_mode_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_UP = 0x01,

  ZB_ZCL_CMD_COLOR_CONTROL_STEP_DOWN = 0x03
};






typedef struct zb_zcl_color_control_req_options_s
{

  zb_uint8_t options_mask;

  zb_uint8_t options_override;
} __attribute__ ((packed)) zb_zcl_color_control_req_options_t;
# 1161 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
enum zb_zcl_color_control_move_to_hue_direction_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE_SHORTEST = 0x00,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE_LONGEST = 0x01,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE_UP = 0x02,

  ZB_ZCL_CMD_COLOR_CONTROL_MOVE_TO_HUE_DOWN = 0x03
};



typedef struct zb_zcl_color_control_move_to_hue_req_s
{

  zb_uint8_t hue;

  zb_uint8_t direction;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_move_to_hue_req_t;
# 1246 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_hue_req_s
{

  zb_uint8_t move_mode;

  zb_uint8_t rate;
} __attribute__ ((packed)) zb_zcl_color_control_move_hue_req_t;
# 1313 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_step_hue_req_s
{

  zb_uint8_t step_mode;

  zb_uint8_t step_size;

  zb_uint8_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_step_hue_req_t;
# 1385 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_to_saturation_req_s
{

  zb_uint8_t saturation;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_move_to_saturation_req_t;
# 1451 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_saturation_req_s
{

  zb_uint8_t move_mode;

  zb_uint8_t rate;
} __attribute__ ((packed)) zb_zcl_color_control_move_saturation_req_t;
# 1518 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_step_saturation_req_s
{

  zb_uint8_t step_mode;

  zb_uint8_t step_size;

  zb_uint8_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_step_saturation_req_t;
# 1590 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_to_hue_saturation_req_s
{

  zb_uint8_t hue;

  zb_uint8_t saturation;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_move_to_hue_saturation_req_t;
# 1662 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_to_color_req_s
{

  zb_uint16_t color_x;

  zb_uint16_t color_y;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_move_to_color_req_t;
# 1735 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_color_req_s
{

  zb_int16_t rate_x;

  zb_int16_t rate_y;
} __attribute__ ((packed)) zb_zcl_color_control_move_color_req_t;
# 1802 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_step_color_req_s
{

  zb_uint16_t step_x;

  zb_uint16_t step_y;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_step_color_req_t;
# 1874 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_to_color_temperature_req_s
{

  zb_uint16_t color_temperature;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_move_to_color_temperature_req_t;
# 1967 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_enhanced_move_to_hue_req_s
{

  zb_uint16_t enhanced_hue;

  zb_uint8_t direction;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_enhanced_move_to_hue_req_t;
# 2039 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_enhanced_move_hue_req_s
{

  zb_uint8_t move_mode;

  zb_uint16_t rate;
} __attribute__ ((packed)) zb_zcl_color_control_enhanced_move_hue_req_t;
# 2106 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_enhanced_step_hue_req_s
{

  zb_uint8_t step_mode;

  zb_uint16_t step_size;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_enhanced_step_hue_req_t;
# 2178 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_enhanced_move_to_hue_saturation_req_s
{

  zb_uint16_t enhanced_hue;

  zb_uint8_t saturation;

  zb_uint16_t transition_time;
} __attribute__ ((packed)) zb_zcl_color_control_enhanced_move_to_hue_saturation_req_t;
# 2250 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_color_loop_set_req_s
{

  zb_uint8_t update_flags;

  zb_uint8_t action;

  zb_uint8_t direction;

  zb_uint16_t time;

  zb_uint16_t start_hue;
} __attribute__ ((packed)) zb_zcl_color_control_color_loop_set_req_t;







enum zb_zcl_color_control_color_loop_update_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_UPDATE_ACTION = 1 << 0,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_UPDATE_DIRECTION = 1 << 1,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_UPDATE_TIME = 1 << 2,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_UPDATE_START_HUE = 1 << 3,
};



enum zb_zcl_color_control_color_loop_action_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_ACTION_DEACTIVATE = 0,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_ACTION_START_HUE = 1,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_ACTION_CURRENT_HUE = 2,
};



enum zb_zcl_color_control_color_loop_direction_e
{

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_DIRECTION_DECREMENT = 0,

  ZB_ZCL_CMD_COLOR_CONTROL_LOOP_DIRECTION_INCREMENT = 1,
};



typedef struct zb_zcl_color_control_color_loop_set_s
{

  zb_zcl_parsed_hdr_t cmd_info;


  zb_time_t last_time;

} zb_zcl_color_control_color_loop_set_t;
# 2411 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_move_color_temp_req_s
{

  zb_uint8_t move_mode;

  zb_uint16_t rate;

  zb_uint16_t color_temp_min;

  zb_uint16_t color_temp_max;
} __attribute__ ((packed)) zb_zcl_color_control_move_color_temp_req_t;
# 2488 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_step_color_temp_req_s
{

  zb_uint8_t step_mode;

  zb_uint16_t step_size;

  zb_uint16_t transition_time;

  zb_uint16_t color_temp_min;

  zb_uint16_t color_temp_max;
} __attribute__ ((packed)) zb_zcl_color_control_step_color_temp_req_t;
# 2614 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_loop_element_s
{
  zb_uint8_t endpoint;
  zb_uint8_t buffer_id;

  zb_uint16_t attr_id;
  zb_int16_t value;
  zb_bool_t is_continue;


  zb_uint16_t limit;

} zb_zcl_color_control_loop_element_t;
# 2674 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
typedef struct zb_zcl_color_control_invoke_user_s
{
  zb_uint8_t endpoint;
  zb_uint16_t attr_id;
  zb_uint16_t new_value;
} zb_zcl_color_control_invoke_user_t;
# 2690 "../../../../../../../../external/zboss/include/zcl/zb_zcl_color_control.h"
zb_void_t zb_zcl_color_control_init_server(void);
zb_void_t zb_zcl_color_control_init_client(void);
# 64 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_shade_config.h" 1
# 70 "../../../../../../../../external/zboss/include/zcl/zb_zcl_shade_config.h"
enum zb_zcl_shade_config_info_attr_e
{


  ZB_ZCL_ATTR_SHADE_CONFIG_PHYSICAL_CLOSED_LIMIT_ID = 0x0000,


  ZB_ZCL_ATTR_SHADE_CONFIG_MOTOR_STEP_SIZE_ID = 0x0001,

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_ID = 0x0002
};




enum zb_zcl_shade_config_status_type_e
{

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_SHADE_OPERATIONAL = 0x00,

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_SHADE_ADJUSTING = 0x01,

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_SHADE_DIRECTION = 0x02,

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_FORWARD_DIRECTION_OF_MOTOR = 0x03,

  ZB_ZCL_ATTR_SHADE_CONFIG_STATUS_RESERVED = 0x04
};
# 143 "../../../../../../../../external/zboss/include/zcl/zb_zcl_shade_config.h"
enum zb_zcl_shade_config_settings_attr_e
{

  ZB_ZCL_ATTR_SHADE_CONFIG_CLOSED_LIMIT_ID = 0x0010,

  ZB_ZCL_ATTR_SHADE_CONFIG_MODE_ID = 0x0011
};



enum zb_zcl_shade_config_mode_e
{

  ZB_ZCL_ATTR_SHADE_CONFIG_MODE_NORMAL = 0x00,

  ZB_ZCL_ATTR_SHADE_CONFIG_MODE_CONFIGURE = 0x01,

  ZB_ZCL_ATTR_SHADE_CONFIG_MODE_RESERVED = 0x02
};


typedef struct zb_zcl_shade_set_value_param_s
{
  zb_uint16_t new_value;
  zb_bool_t is_config;
} zb_zcl_shade_set_value_param_t;

typedef struct zb_zcl_shade_get_value_param_s
{
  zb_uint16_t ret_value;
} zb_zcl_shade_get_value_param_t;
# 286 "../../../../../../../../external/zboss/include/zcl/zb_zcl_shade_config.h"
zb_void_t zb_zcl_shade_config_init_server(void);
zb_void_t zb_zcl_shade_config_init_client(void);
# 65 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_cvc_commands.h" 1
# 78 "../../../../../../../../external/zboss/include/zcl/zb_zcl_cvc_commands.h"
typedef zb_ret_t ( * zb_zcl_cvc_value_set_func_t)(zb_uint8_t endpoint, zb_uint16_t* new_value, zb_uint16_t remaining_time);




typedef struct zb_zcl_cvc_input_variables_s
{

  zb_uint16_t current_value16;

  zb_uint16_t end_value16;

  zb_uint16_t min_value16;

  zb_uint16_t max_value16;

  zb_uint8_t overlap;

  zb_uint16_t transition_time;

  zb_zcl_cvc_value_set_func_t value_set_func;

  zb_uint8_t buf_id;

  zb_callback_t after_processing_cb;
} zb_zcl_cvc_input_variables_t;



typedef struct zb_zcl_cvc_variables_s
{

  zb_zcl_cvc_input_variables_t input_var;

  zb_uint16_t delta_time;

  zb_int16_t delta_value16;

  zb_uint16_t steps_number;

  zb_uint16_t extra_inc_value_step;

  zb_uint16_t extra_inc_time_step;

  zb_time_t end_time;

  zb_uint16_t time_err;
} zb_zcl_cvc_variables_t;



typedef struct zb_zcl_cvc_alarm_variables_s
{

  zb_uint8_t endpoint_id;

  zb_uint16_t cluster_id;

  zb_uint16_t attribute_id;

  zb_uint8_t alarm_buf_id;

  zb_bool_t is_used;
} __attribute__ ((packed))
zb_zcl_cvc_alarm_variables_t;







zb_uint8_t zb_zcl_cvc_calculate_transition_values(zb_zcl_cvc_input_variables_t* input_var);
# 161 "../../../../../../../../external/zboss/include/zcl/zb_zcl_cvc_commands.h"
zb_uint8_t zb_zcl_cvc_start_alarm(zb_uint8_t endpoint_id,
                                  zb_uint16_t cluster_id,
                                  zb_uint16_t attribute_id,
                                  zb_uint8_t alarm_buf_id);







zb_uint8_t zb_zcl_cvc_stop_transition(zb_uint8_t alarm_id);
# 182 "../../../../../../../../external/zboss/include/zcl/zb_zcl_cvc_commands.h"
zb_uint8_t zb_zcl_cvc_check_transition_running(
  zb_uint8_t endpoint_id,
  zb_uint16_t cluster_id,
  zb_uint16_t attribute_id);



zb_void_t zb_zcl_init_cvc_alarm_info(void);







zb_uint16_t zb_zcl_cvc_get_remaining_time(zb_uint8_t alarm_id);
# 66 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_temp_measurement.h" 1
# 66 "../../../../../../../../external/zboss/include/zcl/zb_zcl_temp_measurement.h"
enum zb_zcl_temp_measurement_attr_e
{

  ZB_ZCL_ATTR_TEMP_MEASUREMENT_VALUE_ID = 0x0000,

  ZB_ZCL_ATTR_TEMP_MEASUREMENT_MIN_VALUE_ID = 0x0001,

  ZB_ZCL_ATTR_TEMP_MEASUREMENT_MAX_VALUE_ID = 0x0002,


  ZB_ZCL_ATTR_TEMP_MEASUREMENT_TOLERANCE_ID = 0x0003,



};
# 163 "../../../../../../../../external/zboss/include/zcl/zb_zcl_temp_measurement.h"
zb_void_t zb_zcl_temp_measurement_write_attr_hook(
  zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *new_value);
# 198 "../../../../../../../../external/zboss/include/zcl/zb_zcl_temp_measurement.h"
zb_void_t zb_zcl_temp_measurement_init_server(void);
zb_void_t zb_zcl_temp_measurement_init_client(void);
# 68 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_rel_humidity_measurement.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_rel_humidity_measurement.h"
enum zb_zcl_rel_humidity_measurement_attr_e
{

  ZB_ZCL_ATTR_REL_HUMIDITY_MEASUREMENT_VALUE_ID = 0x0000,

  ZB_ZCL_ATTR_REL_HUMIDITY_MEASUREMENT_MIN_VALUE_ID = 0x0001,

  ZB_ZCL_ATTR_REL_HUMIDITY_MEASUREMENT_MAX_VALUE_ID = 0x0002,



  ZB_ZCL_ATTR_REL_HUMIDITY_TOLERANCE_ID = 0x0003,
};
# 170 "../../../../../../../../external/zboss/include/zcl/zb_zcl_rel_humidity_measurement.h"
zb_void_t zb_zcl_rel_humidity_init_server(void);
zb_void_t zb_zcl_rel_humidity_init_client(void);
# 69 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_illuminance_measurement.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_illuminance_measurement.h"
enum zb_zcl_illuminance_measurement_attr_e
{

  ZB_ZCL_ATTR_ILLUMINANCE_MEASUREMENT_MEASURED_VALUE_ID = 0x0000,

  ZB_ZCL_ATTR_ILLUMINANCE_MEASUREMENT_MIN_MEASURED_VALUE_ID = 0x0001,

  ZB_ZCL_ATTR_ILLUMINANCE_MEASUREMENT_MAX_MEASURED_VALUE_ID = 0x0002,



  ZB_ZCL_ATTR_ILLUMINANCE_MEASUREMENT_TOLERANCE_ID = 0x0003,


  ZB_ZCL_ATTR_ILLUMINANCE_MEASUREMENT_LIGHT_SENSOR_TYPE_ID = 0x0004,
};
# 175 "../../../../../../../../external/zboss/include/zcl/zb_zcl_illuminance_measurement.h"
zb_void_t zb_zcl_illuminance_measurement_init_server(void);
zb_void_t zb_zcl_illuminance_measurement_init_client(void);
# 70 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h" 1
# 63 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_zone_table_s
{

  zb_uint8_t zone_id;

  zb_uint16_t zone_type;

  zb_ieee_addr_t zone_address;


  zb_char_t *zone_label;
} __attribute__ ((packed)) zb_zcl_ias_ace_zone_table_t;
# 93 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_attr_e
{

  ZB_ZCL_ATTR_IAS_ACE_ZONE_TABLE_LENGTH_ID = 0xeffe,

  ZB_ZCL_ATTR_IAS_ACE_ZONE_TABLE_ID = 0xefff,

};
# 152 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_cmd_e
{

  ZB_ZCL_CMD_IAS_ACE_ARM_ID = 0x00,

  ZB_ZCL_CMD_IAS_ACE_BYPASS_ID = 0x01,

  ZB_ZCL_CMD_IAS_ACE_EMERGENCY_ID = 0x02,

  ZB_ZCL_CMD_IAS_ACE_FIRE_ID = 0x03,

  ZB_ZCL_CMD_IAS_ACE_PANIC_ID = 0x04,

  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_ID_MAP_ID = 0x05,

  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_INFO_ID = 0x06,


  ZB_ZCL_CMD_IAS_ACE_GET_PANEL_STATUS_ID = 0x07,

  ZB_ZCL_CMD_IAS_ACE_GET_BYPASSED_ZONE_LIST_ID = 0x08,


  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_STATUS_ID = 0x09,
};




enum zb_zcl_ias_ace_resp_cmd_e
{

  ZB_ZCL_CMD_IAS_ACE_ARM_RESP_ID = 0x00,

  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_ID_MAP_RESP_ID = 0x01,

  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_INFO_RESP_ID = 0x02,


  ZB_ZCL_CMD_IAS_ACE_ZONE_STATUS_CHANGED_ID = 0x03,


  ZB_ZCL_CMD_IAS_ACE_PANEL_STATUS_CHANGED_ID = 0x04,


  ZB_ZCL_CMD_IAS_ACE_GET_PANEL_STATUS_RESPONSE_ID = 0x05,

  ZB_ZCL_CMD_IAS_ACE_SET_BYPASSED_ZONE_LIST_ID = 0x06,


  ZB_ZCL_CMD_IAS_ACE_BYPASS_RESPONSE_ID = 0x07,

  ZB_ZCL_CMD_IAS_ACE_GET_ZONE_STATUS_RESPONSE_ID = 0x08,
};
# 244 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_arm_mode_e
{

  ZB_ZCL_IAS_ACE_ARM_MODE_DISARM = 0x00,

  ZB_ZCL_IAS_ACE_ARM_MODE_DAY = 0x01,

  ZB_ZCL_IAS_ACE_ARM_MODE_NIGHT = 0x02,

  ZB_ZCL_IAS_ACE_ARM_MODE_ALL = 0x03,
};


typedef struct zb_zcl_ias_ace_arm_s
{

  zb_uint8_t arm_mode;

  zb_char_t arm_disarm_code[0xFF];

  zb_uint8_t zone_id;

} __attribute__ ((packed)) zb_zcl_ias_ace_arm_t;
# 336 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_bypass_s
{

  zb_uint8_t length;

  zb_uint8_t zone_id[255];

  zb_char_t arm_disarm_code[0xFF];

} __attribute__ ((packed)) zb_zcl_ias_ace_bypass_t;
# 529 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_get_zone_info_s
{

  zb_uint8_t zone_id;

} __attribute__ ((packed)) zb_zcl_ias_ace_get_zone_info_t;
# 637 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_get_zone_status_s
{

  zb_uint8_t starting_zone_id;

  zb_uint8_t max_num_zone_ids;

  zb_uint8_t zone_status_mask_flag;

  zb_uint16_t zone_status_mask;

} __attribute__ ((packed)) zb_zcl_ias_ace_get_zone_status_t;
# 714 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_arm_not_e
{

  ZB_ZCL_IAS_ACE_ARM_NOT_DISARM = 0x00,

  ZB_ZCL_IAS_ACE_ARM_NOT_DAY = 0x01,

  ZB_ZCL_IAS_ACE_ARM_NOT_NIGHT = 0x02,

  ZB_ZCL_IAS_ACE_ARM_NOT_ALL = 0x03,
};


typedef struct zb_zcl_ias_ace_arm_resp_s
{

  zb_uint8_t arm_notification;

} __attribute__ ((packed)) zb_zcl_ias_ace_arm_resp_t;
# 788 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_get_zone_id_map_resp_s
{

  zb_uint16_t zone_id_map[16];

} __attribute__ ((packed)) zb_zcl_ias_ace_get_zone_id_map_resp_t;
# 857 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_get_zone_info_resp_s
{

  zb_uint8_t zone_id;

  zb_uint16_t zone_type;

  zb_ieee_addr_t address;

  zb_char_t zone_label[0xFF];

} __attribute__ ((packed)) zb_zcl_ias_ace_get_zone_info_resp_t;
# 941 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_aud_notification_e
{

  ZB_ZCL_IAS_ACE_AUD_NOTIFICATION_MUTE = 0x00,

  ZB_ZCL_IAS_ACE_AUD_NOTIFICATION_DEF_SOUND = 0x01,

  ZB_ZCL_IAS_ACE_AUD_NOTIFICATION_MANUF_SPECIFIC = 0x80,
};


typedef struct zb_zcl_ias_ace_zone_status_changed_s
{

  zb_uint8_t zone_id;

  zb_uint16_t zone_status;

  zb_uint8_t aud_notification;

  zb_char_t zone_label[0xFF];

} __attribute__ ((packed)) zb_zcl_ias_ace_zone_status_changed_t;
# 1042 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_panel_status_e
{

  ZB_ZCL_IAS_ACE_PANEL_STATUS_DISARMED = 0x00,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMED_STAY = 0x01,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMED_NIGHT = 0x02,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMED_AWAY = 0x03,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_EXIT_DELAY = 0x04,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ENTRY_DELAY = 0x05,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_NOT_READY = 0x06,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_IN_ALARM = 0x07,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMING_STAY = 0x08,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMING_NIGHT = 0x09,

  ZB_ZCL_IAS_ACE_PANEL_STATUS_ARMING_AWAY = 0x0a,
};




enum zb_zcl_ias_ace_alarm_status_e
{

  ZB_ZCL_IAS_ACE_ALARM_STATUS_NO_ALARM = 0x00,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_BURGLAR = 0x01,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_FIRE = 0x02,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_EMERGENCY = 0x03,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_POLICE_PANIC = 0x04,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_FIRE_PANIC = 0x05,

  ZB_ZCL_IAS_ACE_ALARM_STATUS_EMERGENCY_PANIC = 0x06,
};


typedef struct zb_zcl_ias_ace_panel_status_changed_s
{

  zb_uint8_t panel_status;

  zb_uint8_t seconds_remaining;

  zb_uint8_t aud_notification;

  zb_uint8_t alarm_status;

} __attribute__ ((packed)) zb_zcl_ias_ace_panel_status_changed_t;
# 1168 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_get_panel_status_resp_s
{

  zb_uint8_t panel_status;

  zb_uint8_t seconds_remaining;

  zb_uint8_t aud_notification;

  zb_uint8_t alarm_status;

} __attribute__ ((packed)) zb_zcl_ias_ace_get_panel_status_resp_t;
# 1240 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_set_bypassed_zone_list_s
{

  zb_uint8_t length;

  zb_uint8_t zone_id[255];

} __attribute__ ((packed)) zb_zcl_ias_ace_set_bypassed_zone_list_t;
# 1365 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
enum zb_zcl_ias_ace_bypass_result_e
{

  ZB_ZCL_IAS_ACE_BYPASS_RESULT_BYPASSED = 0x00,

  ZB_ZCL_IAS_ACE_BYPASS_RESULT_NOT_BYPASSED = 0x01,


  ZB_ZCL_IAS_ACE_BYPASS_RESULT_NOT_ALLOWED = 0x02,

  ZB_ZCL_IAS_ACE_BYPASS_RESULT_INVALID_ZONE_ID = 0x03,


  ZB_ZCL_IAS_ACE_BYPASS_RESULT_UNKNOWN_ZONE_ID = 0x04,

  ZB_ZCL_IAS_ACE_BYPASS_RESULT_INVALID_ARM_CODE = 0x05,
};


typedef struct zb_zcl_ias_ace_bypass_resp_s
{

  zb_uint8_t length;

  zb_uint8_t bypass_result[255];

} __attribute__ ((packed)) zb_zcl_ias_ace_bypass_resp_t;
# 1466 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
typedef struct zb_zcl_ias_ace_zone_status_s
{

  zb_uint8_t zone_id;

  zb_uint16_t zone_status;

} __attribute__ ((packed)) zb_zcl_ias_ace_zone_status_t;


typedef struct zb_zcl_ias_ace_get_zone_status_resp_s
{

  zb_uint8_t zone_status_complete;

  zb_uint8_t length;

  zb_zcl_ias_ace_zone_status_t zone_id_status[255];

} __attribute__ ((packed)) zb_zcl_ias_ace_get_zone_status_resp_t;
# 1570 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_ace.h"
zb_void_t zb_zcl_ias_ace_init_server(void);
zb_void_t zb_zcl_ias_ace_init_client(void);
# 72 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h" 1
# 67 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
enum zb_zcl_ias_wd_attr_e
{

  ZB_ZCL_ATTR_IAS_WD_MAX_DURATION_ID = 0x0000,

};
# 123 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
enum zb_zcl_ias_wd_cmd_e
{
  ZB_ZCL_CMD_IAS_WD_START_WARNING_ID = 0x00,
  ZB_ZCL_CMD_IAS_WD_SQUAWK_ID = 0x01
};
# 146 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
enum zb_zcl_ias_wd_warning_mode_e
{

  ZB_ZCL_IAS_WD_WARNING_MODE_STOP = 0x00,

  ZB_ZCL_IAS_WD_WARNING_MODE_BURGLAR = 0x01,

  ZB_ZCL_IAS_WD_WARNING_MODE_FIRE = 0x02,

  ZB_ZCL_IAS_WD_WARNING_MODE_EMERGENCY = 0x03,

  ZB_ZCL_IAS_WD_WARNING_MODE_POLICE_PANIC = 0x04,

  ZB_ZCL_IAS_WD_WARNING_MODE_FIRE_PANIC = 0x05,

  ZB_ZCL_IAS_WD_WARNING_MODE_EMERGENCY_PANIC = 0x06,
};


enum zb_zcl_ias_wd_strobe_e
{

  ZB_ZCL_IAS_WD_STROBE_NO_STROBE = 0x00,

  ZB_ZCL_IAS_WD_STROBE_USE_STROBE = 0x01,
};


enum zb_zcl_ias_wd_siren_level_e
{

  ZB_ZCL_IAS_WD_SIREN_LEVEL_LOW = 0x00,

  ZB_ZCL_IAS_WD_SIREN_LEVEL_MEDIUM = 0x01,

  ZB_ZCL_IAS_WD_SIREN_LEVEL_HIGH = 0x02,

  ZB_ZCL_IAS_WD_SIREN_LEVEL_VERY_HIGH = 0x03,
};




enum zb_zcl_ias_wd_strobe_level_e
{

  ZB_ZCL_IAS_WD_STROBE_LEVEL_LOW = 0x00,

  ZB_ZCL_IAS_WD_STROBE_LEVEL_MEDIUM = 0x01,

  ZB_ZCL_IAS_WD_STROBE_LEVEL_HIGH = 0x02,

  ZB_ZCL_IAS_WD_STROBE_LEVEL_VERY_HIGH = 0x03,
};


typedef struct zb_zcl_ias_wd_start_warning_s
{

  zb_uint8_t status;

  zb_uint16_t duration;

  zb_uint8_t strobe_duty_cycle;

  zb_uint8_t strobe_level;
} __attribute__ ((packed)) zb_zcl_ias_wd_start_warning_t;
# 292 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
enum zb_zcl_ias_wd_squawk_mode_e
{

  ZB_ZCL_IAS_WD_SQUAWK_MODE_ARMED = 0x00,

  ZB_ZCL_IAS_WD_SQUAWK_MODE_DISARMED = 0x01,
};


enum zb_zcl_ias_wd_squawk_strobe_e
{

  ZB_ZCL_IAS_WD_SQUAWK_STROBE_NO_STROBE = 0x00,

  ZB_ZCL_IAS_WD_SQUAWK_STROBE_USE_STROBE = 0x01,
};


enum zb_zcl_ias_wd_squawk_level_e
{

  ZB_ZCL_IAS_WD_SQUAWK_LEVEL_LOW = 0x00,

  ZB_ZCL_IAS_WD_SQUAWK_LEVEL_MEDIUM = 0x01,

  ZB_ZCL_IAS_WD_SQUAWK_LEVEL_HIGH = 0x02,

  ZB_ZCL_IAS_WD_SQUAWK_LEVEL_VERY_HIGH = 0x03,
};


typedef struct zb_zcl_ias_wd_squawk_s
{

  zb_uint8_t status;
} __attribute__ ((packed)) zb_zcl_ias_wd_squawk_t;
# 397 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
typedef struct zb_zcl_ias_wd_start_warning_value_param_s
{
  zb_uint8_t warning_mode;
  zb_uint8_t strobe;
  zb_uint8_t siren_level;
  zb_uint16_t duration;
  zb_uint8_t strobe_duty_cycle;
  zb_uint8_t strobe_level;
} zb_zcl_ias_wd_start_warning_value_param_t;


typedef struct zb_zcl_ias_wd_start_warning_user_app_schedule_e
{
  zb_zcl_parsed_hdr_t cmd_info;

  zb_zcl_ias_wd_start_warning_value_param_t param;

} zb_zcl_ias_wd_start_warning_user_app_schedule_t;
# 433 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
typedef struct zb_zcl_ias_wd_squawk_value_param_s
{
  zb_uint8_t squawk_mode;
  zb_uint8_t strobe;
  zb_uint8_t squawk_level;
} zb_zcl_ias_wd_squawk_value_param_t;


typedef struct zb_zcl_ias_wd_squawk_user_app_schedule_e
{
  zb_zcl_parsed_hdr_t cmd_info;

  zb_zcl_ias_wd_squawk_value_param_t param;

} zb_zcl_ias_wd_squawk_user_app_schedule_t;
# 463 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_wd.h"
zb_void_t zb_zcl_ias_wd_init_server(void);
zb_void_t zb_zcl_ias_wd_init_client(void);
# 73 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h" 1
# 59 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
zb_void_t zb_zcl_ias_zone_write_attr_hook(zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *new_value);
# 72 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
enum zb_zcl_ias_zone_attr_e
{

  ZB_ZCL_ATTR_IAS_ZONE_ZONESTATE_ID = 0x0000,

  ZB_ZCL_ATTR_IAS_ZONE_ZONETYPE_ID = 0x0001,

  ZB_ZCL_ATTR_IAS_ZONE_ZONESTATUS_ID = 0x0002,

  ZB_ZCL_ATTR_IAS_ZONE_IAS_CIE_ADDRESS_ID = 0x0010,

  ZB_ZCL_ATTR_IAS_ZONE_ZONEID_ID = 0x0011,

  ZB_ZCL_ATTR_IAS_ZONE_NUMBER_OF_ZONE_SENSITIVITY_LEVELS_SUPPORTED_ID = 0x0012,

  ZB_ZCL_ATTR_IAS_ZONE_CURRENT_ZONE_SENSITIVITY_LEVEL_ID = 0x0013,

  ZB_ZCL_ATTR_CUSTOM_ZGP_CALIBRATION = 0x8000,
  ZB_ZCL_ATTR_CUSTOM_ZGP_CLOUD_ACK = 0x8003,
  ZB_ZCL_ATTR_CUSTOM_CIE_EP = 0xE001,
  ZB_ZCL_ATTR_CUSTOM_CIE_SHORT_ADDR = 0xE002,


  ZB_ZCL_ATTR_IAS_ZONE_INT_CTX_ID = 0xeffe,
};




enum zb_zcl_ias_zone_zonestate_e
{

    ZB_ZCL_IAS_ZONE_ZONESTATE_NOT_ENROLLED = 0,


    ZB_ZCL_IAS_ZONE_ZONESTATE_ENROLLED = 1,
};







enum zb_zcl_ias_zone_zonetype_e
{

    ZB_ZCL_IAS_ZONE_ZONETYPE_STANDARD_CIE = 0x0000,


    ZB_ZCL_IAS_ZONE_ZONETYPE_MOTION = 0x000d,


    ZB_ZCL_IAS_ZONE_ZONETYPE_CONTACT_SWITCH = 0x0015,


    ZB_ZCL_IAS_ZONE_ZONETYPE_FIRE_SENSOR = 0x0028,


    ZB_ZCL_IAS_ZONE_ZONETYPE_WATER_SENSOR = 0x002a,


    ZB_ZCL_IAS_ZONE_ZONETYPE_GAS_SENSOR = 0x002b,


    ZB_ZCL_IAS_ZONE_ZONETYPE_PERSONAL_EMERGENCY = 0x002c,


    ZB_ZCL_IAS_ZONE_ZONETYPE_VIBRATION_MOVEMENT = 0x002d,


    ZB_ZCL_IAS_ZONE_ZONETYPE_REMOTE_CONTROL = 0x010f,


    ZB_ZCL_IAS_ZONE_ZONETYPE_KEY_FOB = 0x0115,


    ZB_ZCL_IAS_ZONE_ZONETYPE_KEYPAD = 0x021d,


    ZB_ZCL_IAS_ZONE_ZONETYPE_STANDARD_WARNING = 0x0225,


    ZB_ZCL_IAS_ZONE_ZONETYPE_MANUF_SPEC = 0x8000,


    ZB_ZCL_IAS_ZONE_ZONETYPE_INVALID = 0xffff,

};




enum zb_zcl_ias_zone_zonestatus_e
{

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_ALARM1 = 1 << 0,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_ALARM2 = 1 << 1,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_TAMPER = 1 << 2,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_BATTERY = 1 << 3,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_SUPERVISION = 1 << 4,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_RESTORE = 1 << 5,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_TROUBLE = 1 << 6,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_AC_MAINS = 1 << 7,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_TEST = 1 << 8,

  ZB_ZCL_IAS_ZONE_ZONE_STATUS_BATTERY_DEFECT = 1 << 9,
};
# 364 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
enum zb_zcl_ias_zone_cmd_e
{
  ZB_ZCL_CMD_IAS_ZONE_ZONE_ENROLL_RESPONSE_ID = 0x00,


  ZB_ZCL_CMD_IAS_ZONE_INITIATE_NORMAL_OPERATION_MODE_ID = 0x01,

  ZB_ZCL_CMD_IAS_ZONE_INITIATE_TEST_MODE_ID = 0x02,
};





enum zb_zcl_ias_zone_resp_cmd_e
{
  ZB_ZCL_CMD_IAS_ZONE_ZONE_STATUS_CHANGE_NOT_ID = 0x00,

  ZB_ZCL_CMD_IAS_ZONE_ZONE_ENROLL_REQUEST_ID = 0x01

};
# 404 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
typedef struct zb_zcl_ias_zone_init_test_mode_ha_s
{

  zb_uint8_t test_mode_duration;

  zb_uint8_t current_zone_sens_level;
} __attribute__ ((packed)) zb_zcl_ias_zone_init_test_mode_t;
# 488 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
typedef struct zb_zcl_ias_zone_status_change_not_s
{

  zb_uint16_t zone_status;

  zb_uint8_t extended_status;

  zb_uint8_t zone_id;

  zb_uint16_t delay;
} __attribute__ ((packed)) zb_zcl_ias_zone_status_change_not_t;
# 561 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
typedef struct zb_zcl_ias_zone_enroll_request_s
{

  zb_uint16_t zone_type;

  zb_uint16_t manufacturer_code;
} __attribute__ ((packed)) zb_zcl_ias_zone_enroll_request_t;
# 624 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
enum zb_zcl_ias_zone_enroll_responce_code_e
{

  ZB_ZCL_IAS_ZONE_ENROLL_RESPONCE_CODE_SUCCESS = 0x00,

  ZB_ZCL_IAS_ZONE_ENROLL_RESPONCE_CODE_NOT_SUPPORTED = 0x01,

  ZB_ZCL_IAS_ZONE_ENROLL_RESPONCE_CODE_NO_ENROLL = 0x02,

  ZB_ZCL_IAS_ZONE_ENROLL_RESPONCE_CODE_TOO_MANY_ZONES = 0x03,
};



typedef struct zb_zcl_ias_zone_enroll_res_s
{

  zb_uint8_t code;

  zb_uint8_t zone_id;
} __attribute__ ((packed)) zb_zcl_ias_zone_enroll_res_t;
# 732 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
zb_void_t zb_zcl_ias_zone_change_status(zb_uint8_t param);



typedef struct zb_zcl_ias_zone_status_param_s
{
  zb_uint16_t bits;
  zb_bool_t is_set;
  zb_uint8_t endpoint;

} zb_zcl_ias_zone_status_param_t;
# 778 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
typedef struct zb_zcl_ias_zone_notification_param_s
{
  zb_uint8_t ep;
  zb_uint16_t status_val;
  zb_uint16_t delay;
}
zb_zcl_ias_zone_notification_param_t;
# 806 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
zb_bool_t zb_zcl_ias_zone_set_status(
  zb_uint8_t ep,
  zb_uint16_t new_val,
  zb_uint16_t delay,
  zb_uint8_t buf_param);

enum zb_zcl_general_cb_params_e
{
  ZB_ZCL_VALID_CIE_ADDR_SET = 1,
  ZB_ZCL_CURR_ZONE_SENSITIVITY_LEVEL_SET = 2,
  ZB_ZCL_INIT_TEST_MODE = 3,
  ZB_ZCL_INIT_NORMAL_MODE = 4,
};

typedef zb_ret_t ( * zb_ias_zone_app_callback_t)(zb_uint8_t param, zb_uint16_t general_val);

typedef struct zb_zcl_ias_zone_int_ctx_s
{
  zb_callback_t process_result_cb;
  zb_ias_zone_app_callback_t general_cb;
  zb_uint8_t restore_current_zone_sens_level;
  zb_uint8_t new_current_zone_sens_level;
}
zb_zcl_ias_zone_int_ctx_t;



typedef struct zb_zcl_ias_zone_enroll_response_value_param_s
{
  zb_uint8_t enroll_response;
  zb_uint8_t zone_id;
} zb_zcl_ias_zone_enroll_response_value_param_t;


typedef struct zb_zcl_ias_zone_enroll_response_user_app_schedule_e
{

  zb_zcl_parsed_hdr_t cmd_info;

  zb_zcl_ias_zone_enroll_response_value_param_t param;
} zb_zcl_ias_zone_enroll_response_user_app_schedule_t;
# 863 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ias_zone.h"
zb_void_t zb_zcl_ias_zone_register_cb(
    zb_uint8_t endpoint,
    zb_callback_t process_result_cb,
    zb_ias_zone_app_callback_t general_cb);






zb_bool_t zb_zcl_ias_zone_check_attr_notify(
  zb_uint8_t buf_param);




zb_void_t zb_zcl_ias_zone_send_status_change_not(zb_uint8_t param);






zb_void_t zb_zcl_ias_zone_init_server(void);
zb_void_t zb_zcl_ias_zone_init_client(void);



zb_bool_t zb_zcl_process_ias_zone_specific_commands(zb_uint8_t param);
# 74 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_diagnostics.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_diagnostics.h"
typedef struct zb_zcl_diagnostics_data_s
{

  zb_uint16_t numberOfResets;

  zb_uint16_t macRxBcast;

  zb_uint16_t macTxBcast;

  zb_uint16_t macTxUcast;

  zb_uint16_t apsTxBcast;

  zb_uint16_t apsTxUcastSuccess;

  zb_uint16_t apsTxUcastFail;

  zb_uint16_t joinIndication;

  zb_uint16_t averageMACRetryPerAPSMessageSent;

  zb_uint16_t packetBufferAllocateFeatures;

  zb_uint8_t lastMessageLQI;

  zb_int8_t lastMessageRSSI;
} zb_zcl_diagnostics_data_t;




extern zb_zcl_diagnostics_data_t diagnostics_data;





enum zb_zcl_diagnostics_attr_e
{

  ZB_ZCL_ATTR_DIAGNOSTICS_NUMBER_OF_RESETS_ID = 0x0000,

  ZB_ZCL_ATTR_DIAGNOSTICS_PERSISTENT_MEMORY_WRITES_ID = 0x0001,

  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_RX_BCAST_ID = 0x0100,

  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_TX_BCAST_ID = 0x0101,


  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_RX_UCAST_ID = 0x0102,

  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_TX_UCAST_ID = 0x0103,


  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_TX_UCAST_RETRY_ID = 0x0104,


  ZB_ZCL_ATTR_DIAGNOSTICS_MAC_TX_UCAST_FAIL_ID = 0x0105,


  ZB_ZCL_ATTR_DIAGNOSTICS_APS_RX_BCAST_ID = 0x0106,

  ZB_ZCL_ATTR_DIAGNOSTICS_APS_TX_BCAST_ID = 0x0107,


  ZB_ZCL_ATTR_DIAGNOSTICS_APS_RX_UCAST_ID = 0x0108,

  ZB_ZCL_ATTR_DIAGNOSTICS_APS_TX_UCAST_SUCCESS_ID = 0x0109,


  ZB_ZCL_ATTR_DIAGNOSTICS_APS_TX_UCAST_RETRY_ID = 0x010A,

  ZB_ZCL_ATTR_DIAGNOSTICS_APS_TX_UCAST_FAIL_ID = 0x010b,


  ZB_ZCL_ATTR_DIAGNOSTICS_ROUTE_DISC_INITIATED_ID = 0x010C,


  ZB_ZCL_ATTR_DIAGNOSTICS_NEIGHBOR_ADDED_ID = 0x010D,


  ZB_ZCL_ATTR_DIAGNOSTICS_NEIGHBOR_REMOVED_ID = 0x010E,


  ZB_ZCL_ATTR_DIAGNOSTICS_NEIGHBOR_STALE_ID = 0x010F,

  ZB_ZCL_ATTR_DIAGNOSTICS_JOIN_INDICATION_ID = 0x0110,

  ZB_ZCL_ATTR_DIAGNOSTICS_CHILD_MOVED_ID = 0x0111,



  ZB_ZCL_ATTR_DIAGNOSTICS_NWKFC_FAILURE_ID = 0x0112,



  ZB_ZCL_ATTR_DIAGNOSTICS_APSFC_FAILURE_ID = 0x0113,




  ZB_ZCL_ATTR_DIAGNOSTICS_APS_UNAUTHORIZED_KEY_ID = 0x0114,


  ZB_ZCL_ATTR_DIAGNOSTICS_NWK_DECRYPT_FAILURES_ID = 0x0115,


  ZB_ZCL_ATTR_DIAGNOSTICS_APS_DECRYPT_FAILURES_ID = 0x0116,

  ZB_ZCL_ATTR_DIAGNOSTICS_PACKET_BUFFER_ALLOCATE_FAILURES_ID = 0x0117,

  ZB_ZCL_ATTR_DIAGNOSTICS_RELAYED_UCAST_ID = 0x0118,
  ZB_ZCL_ATTR_DIAGNOSTICS_PHYTOMACQUEUELIMITREACHED_ID = 0x0119,



  ZB_ZCL_ATTR_DIAGNOSTICS_PACKET_VALIDATEDROPCOUNT_ID = 0x011A,

  ZB_ZCL_ATTR_DIAGNOSTICS_AVERAGE_MAC_RETRY_PER_APS_ID = 0x011b,

  ZB_ZCL_ATTR_DIAGNOSTICS_LAST_LQI_ID = 0x011c,

  ZB_ZCL_ATTR_DIAGNOSTICS_LAST_RSSI_ID = 0x011d,
};
# 424 "../../../../../../../../external/zboss/include/zcl/zb_zcl_diagnostics.h"
zb_void_t zb_zcl_diagnostics_inc(zb_uint16_t attr_id, zb_uint8_t value);
# 440 "../../../../../../../../external/zboss/include/zcl/zb_zcl_diagnostics.h"
zb_void_t zb_zcl_diagnostics_init_server(void);
zb_void_t zb_zcl_diagnostics_init_client(void);
# 75 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h" 1
# 66 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
enum zb_zcl_custom_cluster_attr_e
{
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_U8_ID = 0x0001,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_S16_ID = 0x0002,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_24BIT_ID = 0x0003,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_32BITMAP_ID = 0x0004,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_IEEE_ID = 0x0005,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_CHAR_STRING_ID = 0x0006,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_UTC_TIME_ID = 0x0007,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_OCTET_STRING_ID = 0x0008,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_BOOL_ID = 0x0009,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_128_BIT_KEY_ID = 0x000a,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_U16_ID = 0x000b,
  ZB_ZCL_CUSTOM_CLUSTER_ATTR_U32_ID = 0x000c
};
# 106 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
enum zb_zcl_custom_cluster_cmd_e
{
  ZB_ZCL_CUSTOM_CLUSTER_CMD1_ID = 0x21,
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_ID = 0x22,
  ZB_ZCL_CUSTOM_CLUSTER_CMD3_ID = 0x23
};


enum zb_zcl_custom_cluster_resp_e
{
  ZB_ZCL_CUSTOM_CLUSTER_CMD1_RESP_ID = 0xF1,
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_RESP_ID = 0xF2
};



enum zb_zcl_custom_cluster_cmd1_mode_e
{
  ZB_ZCL_CUSTOM_CLUSTER_CMD1_MODE1 = 0x01,
  ZB_ZCL_CUSTOM_CLUSTER_CMD1_MODE2 = 0x02
};

typedef struct zb_zcl_custom_cluster_cmd1_req_s
{
  zb_uint8_t mode;
  zb_uint8_t value;
}
__attribute__ ((packed)) zb_zcl_custom_cluster_cmd1_req_t;
# 178 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
typedef struct zb_zcl_custom_cluster_cmd1_resp_s
{
  zb_uint8_t status;
}
__attribute__ ((packed)) zb_zcl_custom_cluster_cmd1_resp_t;
# 225 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
enum zb_zcl_custom_cluster_cmd2_param_e
{
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_PARAM1 = 0x01,
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_PARAM2 = 0x02,
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_PARAM3 = 0x03,
  ZB_ZCL_CUSTOM_CLUSTER_CMD2_PARAM4 = 0x04
};

typedef struct zb_zcl_custom_cluster_cmd2_req_s
{
  zb_uint8_t param;
  zb_uint16_t value;
}
__attribute__ ((packed)) zb_zcl_custom_cluster_cmd2_req_t;
# 286 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
typedef struct zb_zcl_custom_cluster_cmd2_resp_s
{
  zb_uint8_t status;
}
__attribute__ ((packed)) zb_zcl_custom_cluster_cmd2_resp_t;
# 333 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
typedef struct zb_zcl_custom_cluster_cmd3_req_s
{
  zb_char_t zcl_str[11];
}
__attribute__ ((packed)) zb_zcl_custom_cluster_cmd3_req_t;
# 491 "../../../../../../../../external/zboss/include/zcl/zb_zcl_custom_cluster.h"
zb_void_t zb_zcl_custom_attr_init_server(void);
zb_void_t zb_zcl_custom_attr_init_client(void);
# 77 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h"
typedef zb_bool_t (*zb_zcl_time_set_real_time_clock_t)(zb_uint32_t time);
# 75 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h"
zb_void_t zb_zcl_set_real_time_clock_callback(zb_zcl_time_set_real_time_clock_t cb);




enum time_server_authoritative_level_e
{
  ZB_ZCL_TIME_SERVER_NOT_CHOSEN = 0,
  ZB_ZCL_TIME_HAS_SYNCHRONIZED_BIT,
  ZB_ZCL_TIME_HAS_MASTER_BIT,
  ZB_ZCL_TIME_HAS_MASTER_AND_SUPERSEDING_BITS,
  ZB_ZCL_TIME_COORDINATOR_WITH_MASTER_AND_SUPERSEDING_BITS
};


typedef struct zb_zcl_time_sync_payload_s
{

  zb_uint32_t time;

  zb_uint16_t addr;

  zb_uint8_t endpoint;



  zb_uint8_t level;
} zb_zcl_time_sync_payload_t;
# 124 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h"
enum zb_zcl_time_attr_e
{

  ZB_ZCL_ATTR_TIME_TIME_ID = 0x0000,

  ZB_ZCL_ATTR_TIME_TIME_STATUS_ID = 0x0001,

  ZB_ZCL_ATTR_TIME_TIME_ZONE_ID = 0x0002,

  ZB_ZCL_ATTR_TIME_DST_START_ID = 0x0003,

  ZB_ZCL_ATTR_TIME_DST_END_ID = 0x0004,

  ZB_ZCL_ATTR_TIME_DST_SHIFT_ID = 0x0005,

  ZB_ZCL_ATTR_TIME_STANDARD_TIME_ID = 0x0006,

  ZB_ZCL_ATTR_TIME_LOCAL_TIME_ID = 0x0007,

  ZB_ZCL_ATTR_TIME_LAST_SET_TIME_ID = 0x0008,

  ZB_ZCL_ATTR_TIME_VALID_UNTIL_TIME_ID = 0x0009
};



enum zb_zcl_time_time_status_e
{

  ZB_ZCL_TIME_MASTER = 0,

  ZB_ZCL_TIME_SYNCHRONIZED = 1,

  ZB_ZCL_TIME_MASTER_ZONE_DST = 2,

  ZB_ZCL_TIME_SUPERSEDING = 3
};
# 356 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h"
typedef struct zb_zcl_time_attrs_s
{




  zb_uint32_t time;




  zb_uint8_t time_status;




  zb_int32_t time_zone;




  zb_uint32_t dst_start;




  zb_uint32_t dst_end;




  zb_uint32_t dst_shift;




  zb_uint32_t standard_time;




  zb_uint32_t local_time;




  zb_uint32_t last_set_time;




  zb_uint32_t valid_until_time;
} zb_zcl_time_attrs_t;
# 426 "../../../../../../../../external/zboss/include/zcl/zb_zcl_time.h"
zb_void_t zb_zcl_time_update_current_time(zb_uint8_t endpoint);

zb_void_t zb_zcl_time_init_server(void);
zb_void_t zb_zcl_time_init_client(void);
# 79 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_dehumidification_control.h" 1
# 65 "../../../../../../../../external/zboss/include/zcl/zb_zcl_dehumidification_control.h"
enum zb_zcl_dehumidification_control_attr_e
{


  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_RELATIVE_HUMIDITY_ID = 0x0000,

  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_DEHUMIDIFICATION_COOLING_ID = 0x0001,

  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_RHDEHUMIDIFICATION_SETPOINT_ID = 0x0010,


  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_RELATIVE_HUMIDITY_MODE_ID = 0x0011,


  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_DEHUMIDIFICATION_LOCKOUT_ID = 0x0012,

  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_DEHUMIDIFICATION_HYSTERESIS_ID = 0x0013,

  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_DEHUMIDIFICATION_MAX_COOL_ID = 0x0014,


  ZB_ZCL_ATTR_DEHUMIDIFICATION_CONTROL_RELATIVE_HUMIDITY_DISPLAY_ID = 0x0015,
};
# 198 "../../../../../../../../external/zboss/include/zcl/zb_zcl_dehumidification_control.h"
zb_void_t zb_zcl_dehumidification_control_init_server(void);
zb_void_t zb_zcl_dehumidification_control_init_client(void);
# 80 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_el_measurement.h" 1
# 62 "../../../../../../../../external/zboss/include/zcl/zb_zcl_el_measurement.h"
enum zb_zcl_electrical_measurement_attr_e
{

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASUREMENT_TYPE_ID = 0x0000,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_ID = 0x0100,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_MIN_ID = 0x0101,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_MAX_ID = 0x0102,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_ID = 0x0103,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_MIN_ID = 0x0104,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_MAX_ID = 0x0105,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DCPOWER_ID = 0x0106,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_POWER_MIN_ID = 0x0107,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_POWER_MAX_ID = 0x0108,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_MULTIPLIER_ID = 0x0200,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_DIVISOR_ID = 0x0201,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_MULTIPLIER_ID = 0x0202,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_DIVISOR_ID = 0x0203,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_POWER_MULTIPLIER_ID = 0x0204,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_POWER_DIVISOR_ID = 0x0205,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_FREQUENCY_ID = 0x0300,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_FREQUENCY_MIN_ID = 0x0301,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_FREQUENCY_MAX_ID = 0x0302,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_NEUTRAL_CURRENT_ID = 0x0303,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_TOTAL_ACTIVE_POWER_ID = 0x0304,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_TOTAL_REACTIVE_POWER_ID = 0x0305,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_TOTAL_APPARENT_POWER_ID = 0x0306,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED1ST_HARMONIC_CURRENT_ID = 0x0307,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED3RD_HARMONIC_CURRENT_ID = 0x0308,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED5TH_HARMONIC_CURRENT_ID = 0x0309,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED7TH_HARMONIC_CURRENT_ID = 0x030a,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED9TH_HARMONIC_CURRENT_ID = 0x030b,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED11TH_HARMONIC_CURRENT_ID = 0x030c,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE1ST_HARMONIC_CURRENT_ID = 0x030d,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE3RD_HARMONIC_CURRENT_ID = 0x030e,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE5TH_HARMONIC_CURRENT_ID = 0x030f,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE7TH_HARMONIC_CURRENT_ID = 0x0310,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE9TH_HARMONIC_CURRENT_ID = 0x0311,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_MEASURED_PHASE11TH_HARMONIC_CURRENT_ID = 0x0312,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_FREQUENCY_MULTIPLIER_ID = 0x0400,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_FREQUENCY_DIVISOR_ID = 0x0401,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_POWER_MULTIPLIER_ID = 0x0402,



  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_POWER_DIVISOR_ID = 0x0403,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_HARMONIC_CURRENT_MULTIPLIER_ID = 0x0404,



  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_PHASE_HARMONIC_CURRENT_MULTIPLIER_ID = 0x0405,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_LINE_CURRENT_ID = 0x0501,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_CURRENT_ID = 0x0502,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_CURRENT_ID = 0x0503,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSVOLTAGE_ID = 0x0505,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MIN_ID = 0x0506,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MAX_ID = 0x0507,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSCURRENT_ID = 0x0508,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MIN_ID = 0x0509,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MAX_ID = 0x050a,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_ID = 0x050B,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MIN_ID = 0x050c,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MAX_ID = 0x050d,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_POWER_ID = 0x050e,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_APPARENT_POWER_ID = 0x050F,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_POWER_FACTOR_ID = 0x0510,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMSVOLTAGE_MEASUREMENT_PERIOD_ID = 0x0511,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_OVER_VOLTAGE_COUNTER_ID = 0x0512,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_ID = 0x0513,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_OVER_VOLTAGE_PERIOD_ID = 0x0514,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_ID = 0x0515,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SAG_PERIOD_ID = 0x0516,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SWELL_PERIOD_ID = 0x0517,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACVOLTAGE_MULTIPLIER_ID = 0x0600,



  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACVOLTAGE_DIVISOR_ID = 0x0601,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACCURRENT_MULTIPLIER_ID = 0x0602,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACCURRENT_DIVISOR_ID = 0x0603,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACPOWER_MULTIPLIER_ID = 0x0604,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACPOWER_DIVISOR_ID = 0x0605,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_OVERLOAD_ALARMS_MASK_ID = 0x0700,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_VOLTAGE_OVERLOAD_ID = 0x0701,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_DC_CURRENT_OVERLOAD_ID = 0x0702,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_ALARMS_MASK_ID = 0x0800,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_VOLTAGE_OVERLOAD_ID = 0x0801,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_CURRENT_OVERLOAD_ID = 0x0802,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_ACTIVE_POWER_OVERLOAD_ID = 0x0803,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AC_REACTIVE_POWER_OVERLOAD_ID = 0x0804,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_OVER_VOLTAGE_ID = 0x0805,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_UNDER_VOLTAGE_ID = 0x0806,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_OVER_VOLTAGE_ID = 0x0807,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_UNDER_VOLTAGE_ID = 0x0808,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SAG_ID = 0x0809,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SWELL_ID = 0x080a,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_LINE_CURRENT_PH_B_ID = 0x0901,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_CURRENT_PH_B_ID = 0x0902,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_CURRENT_PH_B_ID = 0x0903,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSVOLTAGE_PHB_ID = 0x0905,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MIN_PH_B_ID = 0x0906,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MAX_PH_B_ID = 0x0907,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSCURRENT_PHB_ID = 0x0908,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MIN_PH_B_ID = 0x0909,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MAX_PH_B_ID = 0x090a,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_PHB_ID = 0x090B,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MIN_PH_B_ID = 0x090c,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MAX_PH_B_ID = 0x090d,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_POWER_PH_B_ID = 0x090e,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_APPARENT_POWER_PHB_ID = 0x090F,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_POWER_FACTOR_PH_B_ID = 0x0910,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMSVOLTAGE_MEASUREMENT_PERIOD_PHB_ID = 0x0911,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_OVER_VOLTAGE_COUNTER_PH_B_ID = 0x0912,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_PH_B_ID = 0x0913,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_OVER_VOLTAGE_PERIOD_PH_B_ID = 0x0914,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_PH_B_ID = 0x0915,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SAG_PERIOD_PH_B_ID = 0x0916,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SWELL_PERIOD_PH_B_ID = 0x0917,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_LINE_CURRENT_PH_C_ID = 0x0a01,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_CURRENT_PH_C_ID = 0x0a02,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_CURRENT_PH_C_ID = 0x0a03,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSVOLTAGE_PHC_ID = 0x0A05,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MIN_PH_C_ID = 0x0a06,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_MAX_PH_C_ID = 0x0a07,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMSCURRENT_PHC_ID = 0x0A08,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MIN_PH_C_ID = 0x0a09,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_CURRENT_MAX_PH_C_ID = 0x0a0a,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_PHC_ID = 0x0A0B,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MIN_PH_C_ID = 0x0a0c,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_ACTIVE_POWER_MAX_PH_C_ID = 0x0a0d,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_REACTIVE_POWER_PH_C_ID = 0x0a0e,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_APPARENT_POWER_PHC_ID = 0x0A0F,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_POWER_FACTOR_PH_C_ID = 0x0a10,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMSVOLTAGE_MEASUREMENT_PERIOD_PHC_ID = 0x0A11,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_OVER_VOLTAGE_COUNTER_PH_C_ID = 0x0a12,


  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_AVERAGE_RMS_UNDER_VOLTAGE_COUNTER_PH_C_ID = 0x0a13,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_OVER_VOLTAGE_PERIOD_PH_C_ID = 0x0a14,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_EXTREME_UNDER_VOLTAGE_PERIOD_PH_C_ID = 0x0a15,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SAG_PERIOD_PH_C_ID = 0x0a16,

  ZB_ZCL_ATTR_ELECTRICAL_MEASUREMENT_RMS_VOLTAGE_SWELL_PERIOD_PH_C_ID = 0x0a17,
};



enum zb_zcl_electrical_measurement_measurement_type_e
{

  ZB_ZCL_ELECTRICAL_MEASUREMENT_ACTIVE_MEASUREMENT = 0x00000001,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_REACTIVE_MEASUREMENT = 0x00000002,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_APPARENT_MEASUREMENT = 0x00000004,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_PHASE_A_MEASUREMENT = 0x00000008,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_PHASE_B_MEASUREMENT = 0x00000010,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_PHASE_C_MEASUREMENT = 0x00000020,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_DC_MEASUREMENT = 0x00000040,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_HARMONIC_MEASUREMENT = 0x00000080,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_POWER_QUALITY_MEASUREMENT = 0x00000100,

  ZB_ZCL_ELECTRICAL_MEASUREMENT_RESERVED = 0x00000200
};
# 765 "../../../../../../../../external/zboss/include/zcl/zb_zcl_el_measurement.h"
enum zb_zcl_on_off_srv_cmd_e
{

  ZB_ZCL_CMD_ELECTRICAL_MEASUREMENT_GET_PROFILE_INFO_RESPONSE_COMMAND = 0x00,

  ZB_ZCL_CMD_ELECTRICAL_MEASUREMENT_GET_MEASUREMENT_PROFILE_RESPONSE_COMMAND = 0x01,
};




enum zb_zcl_on_off_cli_cmd_e
{

  ZB_ZCL_CMD_ELECTRICAL_MEASUREMENT_GET_PROFILE_INFO_COMMAND = 0x00,

  ZB_ZCL_CMD_ELECTRICAL_MEASUREMENT_GET_MEASUREMENT_PROFILE_COMMAND = 0x01,
};
# 883 "../../../../../../../../external/zboss/include/zcl/zb_zcl_el_measurement.h"
zb_void_t zb_zcl_el_measurement_init_server(void);
zb_void_t zb_zcl_el_measurement_init_client(void);
# 81 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_fan_control.h" 1
# 63 "../../../../../../../../external/zboss/include/zcl/zb_zcl_fan_control.h"
enum zb_zcl_fan_control_attr_e
{

  ZB_ZCL_ATTR_FAN_CONTROL_FAN_MODE_ID = 0x0000,

  ZB_ZCL_ATTR_FAN_CONTROL_FAN_MODE_SEQUENCE_ID = 0x0001
};



enum zb_zcl_fan_control_fan_mode_e
{

  ZB_ZCL_FAN_CONTROL_FAN_MODE_OFF = 0x00,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_LOW = 0x01,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_MEDIUM = 0x02,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_HIGH = 0x03,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_ON = 0x04,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_AUTO = 0x05,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SMART = 0x06,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_RESERVED = 0x07
};



enum zb_zcl_fan_control_fan_mode_sequence_e
{

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_LOW_MED_HIGH = 0x00,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_LOW_HIGH = 0x01,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_LOW_MED_HIGH_AUTO = 0x02,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_LOW_HIGH_AUTO = 0x03,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_ON_AUTO = 0x04,

  ZB_ZCL_FAN_CONTROL_FAN_MODE_SEQUENCE_RESERVED = 0x05
};
# 168 "../../../../../../../../external/zboss/include/zcl/zb_zcl_fan_control.h"
zb_void_t zb_zcl_fan_control_init_server(void);
zb_void_t zb_zcl_fan_control_init_client(void);
# 82 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h" 1
# 57 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
enum zb_zcl_en50523_appl_ev_and_alerts_recv_cmd_e
{
  ZB_ZCL_CMD_EN50523_APPL_EV_AND_ALERTS_GET_ALERTS_ID = 0x00,
};





enum zb_zcl_en50523_appl_ev_and_alerts_send_cmd_e
{

  ZB_ZCL_CMD_EN50523_APPL_EV_AND_ALERTS_GET_ALERTS_RESP_ID = 0x00,

  ZB_ZCL_CMD_EN50523_APPL_EV_AND_ALERTS_ALERTS_NOTIFICATION_ID = 0x01,

  ZB_ZCL_CMD_EN50523_APPL_EV_AND_ALERTS_EVENT_NOTIFICATION_ID = 0x02,
};
# 122 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
enum zb_zcl_en50523_appl_ev_and_alerts_alerts_type_e
{
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERTS_TYPE_UNSTRUCTURED = 0x00,
};


enum zb_zcl_en50523_appl_ev_and_alerts_alert_category_e
{
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERT_CATEGORY_WARNING = 0x01,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERT_CATEGORY_DANGER = 0x02,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERT_CATEGORY_FAILURE = 0x03,
};


enum zb_zcl_en50523_appl_ev_and_alerts_alert_presence_e
{
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERT_RECOVERY = 0x00,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERT_PRESENCE = 0x01,
};
# 179 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
typedef struct zb_zcl_en50523_appl_ev_and_alerts_alert_struct_s
{

  zb_uint8_t alert[3];
} __attribute__ ((packed)) zb_zcl_en50523_appl_ev_and_alerts_alert_struct_t;


typedef struct zb_zcl_en50523_appl_ev_and_alerts_get_alerts_resp_s
{

  zb_uint8_t alerts_count;

  zb_zcl_en50523_appl_ev_and_alerts_alert_struct_t alert_struct[15];

} __attribute__ ((packed)) zb_zcl_en50523_appl_ev_and_alerts_get_alerts_resp_t;
# 271 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
typedef struct zb_zcl_en50523_appl_ev_and_alerts_alerts_notif_s
{

  zb_uint8_t alerts_count;

  zb_zcl_en50523_appl_ev_and_alerts_alert_struct_t alert_struct[15];

} __attribute__ ((packed)) zb_zcl_en50523_appl_ev_and_alerts_alerts_notif_t;
# 362 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
enum zb_zcl_en50523_appl_ev_and_alerts_event_identification_e
{
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_ID_END_OF_CYCLE = 0x01,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_ID_TEMP_REACHED = 0x04,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_ID_END_OF_COOKING = 0x05,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_ID_SWITCHING_OFF = 0x06,
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_ID_WRONG_DATA = 0xf7,
};





typedef struct zb_zcl_en50523_appl_ev_and_alerts_event_notif_s
{
  zb_uint8_t event_header;
  zb_uint8_t event_identification;

} __attribute__ ((packed)) zb_zcl_en50523_appl_ev_and_alerts_event_notif_t;
# 439 "../../../../../../../../external/zboss/include/zcl/zb_zcl_en50523_appliance_events_and_alerts.h"
zb_void_t zb_zcl_en50523_appliance_events_and_alerts_init_server(void);
zb_void_t zb_zcl_en50523_appliance_events_and_alerts_init_client(void);
# 84 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h" 1
# 65 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
enum zb_zcl_metering_srv_attr_set_e
{
  ZB_ZCL_METERING_SET_READ_INFO = 0x00,
  ZB_ZCL_METERING_SET_TOU_INFORMATION = 0x01,
  ZB_ZCL_METERING_SET_METER_STATUS = 0x02,
  ZB_ZCL_METERING_SET_FORMATTING = 0x03,
  ZB_ZCL_METERING_SET_HISTORICAL_CONSUMPTION = 0x04,
  ZB_ZCL_METERING_SET_LOAD_PROFILE_CONFIGURATION = 0x05,
  ZB_ZCL_METERING_SET_SUPPLY_LIMIT = 0x06,
  ZB_ZCL_METERING_SET_BLOCK_INFORMATION_DELIVERED = 0x07,
  ZB_ZCL_METERING_SET_ALARMS = 0x08,
  ZB_ZCL_METERING_SET_BLOCK_INFORMATION_RECEIVED = 0x09,
  ZB_ZCL_METERING_SET_METER_BILLING = 0x0A,
  ZB_ZCL_METERING_SET_SUPPLY_CONTROL = 0x0B,
  ZB_ZCL_METERING_SET_ALTERNATIVE_HISTORICAL_CONSUMPTION = 0x0C,
  ZB_ZCL_METERING_SET_FOUR_QUADRANT_ELECTRICITY = 0x0D,
};



enum zb_zcl_metering_attr_e
{

  ZB_ZCL_ATTR_METERING_CURRENT_SUMMATION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_READ_INFO << 8) | (0x00 & 0xFF)),


  ZB_ZCL_ATTR_METERING_CURRENT_SUMMATION_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_MAX_DEMAND_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_MAX_DEMAND_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_DFT_SUMMATION_ID,

  ZB_ZCL_ATTR_METERING_DAILY_FREEZE_TIME_ID,

  ZB_ZCL_ATTR_METERING_POWER_FACTOR_ID,

  ZB_ZCL_ATTR_METERING_READING_SNAPSHOT_TIME_ID,





  ZB_ZCL_ATTR_METERING_CURRENT_MAX_DEMAND_DELIVERED_TIME_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_MAX_DEMAND_RECEIVED_TIME_ID,


  ZB_ZCL_ATTR_METERING_DEFAULT_UPDATE_PERIOD_ID,


  ZB_ZCL_ATTR_METERING_FAST_POLL_UPDATE_PERIOD_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_BLOCK_PERIOD_CONSUMPTION_DELIVERED_ID,


  ZB_ZCL_ATTR_METERING_DAILY_CONSUMPTION_TARGET_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_BLOCK_ID,

  ZB_ZCL_ATTR_METERING_PROFILE_INTERVAL_PERIOD_ID,



  ZB_ZCL_ATTR_METERING_PRESET_READING_TIME_ID = ((ZB_ZCL_METERING_SET_READ_INFO << 8) | (0x11 & 0xFF)),
  ZB_ZCL_ATTR_METERING_SUMMATION_DELIVERED_PER_REPORT_ID,

  ZB_ZCL_ATTR_METERING_FLOW_RESTRICTION_ID,


  ZB_ZCL_ATTR_METERING_SUPPLY_STATUS_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_INLET_ENERGY_CARRIER_SUMMATION_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_OUTLET_ENERGY_CARRIER_SUMMATION_ID,

  ZB_ZCL_ATTR_METERING_INLET_TEMPERATURE_ID,
  ZB_ZCL_ATTR_METERING_OUTLET_TEMPERATURE_ID,
  ZB_ZCL_ATTR_METERING_CONTROL_TEMPERATURE_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_INLET_ENERGY_CARRIER_DEMAND_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_OUTLET_ENERGY_CARRIER_DEMAND_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_BLOCK_PERIOD_CONSUMPTION_DELIVERED_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_BLOCK_PERIOD_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_BLOCK_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_DFT_SUMMATION_RECEIVED_ID,



  ZB_ZCL_ATTR_METERING_ACTIVE_REGISTER_TIER_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_ACTIVE_REGISTER_TIER_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_LAST_BLOCK_SWITCH_TIME_ID,





  ZB_ZCL_ATTR_METERING_CURRENT_TIER1_SUMMATION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_TOU_INFORMATION << 8) | (0x00 & 0xFF)),


  ZB_ZCL_ATTR_METERING_CURRENT_TIER1_SUMMATION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_TIER2_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER2_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER3_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER3_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER4_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER4_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER5_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER5_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER6_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER6_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER7_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER7_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER8_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER8_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER9_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER9_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER10_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER10_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER11_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER11_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER12_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER12_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER13_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER13_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER14_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER14_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER15_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER15_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER16_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER16_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER17_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER17_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER18_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER18_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER19_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER19_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER20_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER20_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER21_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER21_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER22_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER22_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER23_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER23_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER24_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER24_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER25_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER25_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER26_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER26_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER27_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER27_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER28_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER28_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER29_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER29_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER30_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER30_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER31_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER31_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER32_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER32_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER33_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER33_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER34_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER34_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER35_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER35_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER36_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER36_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER37_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER37_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER38_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER38_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER39_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER39_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER40_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER40_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER41_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER41_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER42_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER42_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER43_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER43_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER44_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER44_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER45_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER45_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER46_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER46_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER47_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER47_SUMMATION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER48_SUMMATION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_CURRENT_TIER48_SUMMATION_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CPP1_SUMMATION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_TOU_INFORMATION << 8) | (0xFC & 0xFF)),



  ZB_ZCL_ATTR_METERING_CPP2_SUMMATION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_TOU_INFORMATION << 8) | (0xFE & 0xFF)),






  ZB_ZCL_ATTR_METERING_STATUS_ID = ((ZB_ZCL_METERING_SET_METER_STATUS << 8) | (0x00 & 0xFF)),





  ZB_ZCL_ATTR_METERING_REMAINING_BATTERY_LIFE_ID,

  ZB_ZCL_ATTR_METERING_HOURS_IN_OPERATION_ID,
  ZB_ZCL_ATTR_METERING_HOURS_IN_FAULT_ID,

  ZB_ZCL_ATTR_METERING_EXTENDED_STATUS_ID,





  ZB_ZCL_ATTR_METERING_REMAINING_BATTERY_LIFE_DAYS_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_METER_ID_ID,

  ZB_ZCL_ATTR_METERING_AMBIENT_CONSUMPTION_INDICATOR_ID,


  ZB_ZCL_ATTR_METERING_SERVICE_DISCONNECT_REASON_ID,

  ZB_ZCL_ATTR_METERING_LINKY_MODE_OF_OPERATION_ID,






  ZB_ZCL_ATTR_METERING_UNIT_OF_MEASURE_ID = ((ZB_ZCL_METERING_SET_FORMATTING << 8) | (0x00 & 0xFF)),


  ZB_ZCL_ATTR_METERING_MULTIPLIER_ID,

  ZB_ZCL_ATTR_METERING_DIVISOR_ID,


  ZB_ZCL_ATTR_METERING_SUMMATION_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_DEMAND_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_HISTORICAL_CONSUMPTION_FORMATTING_ID,


  ZB_ZCL_ATTR_METERING_METERING_DEVICE_TYPE_ID,


  ZB_ZCL_ATTR_METERING_SITE_ID_ID,

  ZB_ZCL_ATTR_METERING_METER_SERIAL_NUMBER_ID,

  ZB_ZCL_ATTR_METERING_ENERGY_CARRIER_UNIT_OF_MEASURE_ID,

  ZB_ZCL_ATTR_METERING_ENERGY_CARRIER_SUMMATION_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_ENERGY_CARRIER_DEMAND_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_TEMPERATURE_UNIT_OF_MEASURE_ID,


  ZB_ZCL_ATTR_METERING_TEMPERATURE_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_MODULE_SERIAL_NUMBER_ID,

  ZB_ZCL_ATTR_METERING_OPERATING_TARIFF_LABEL_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_OPERATING_TARIFF_LABEL_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CUSTOMER_ID_NUMBER_ID,

  ZB_ZCL_ATTR_METERING_ALTERNATIVE_UNIT_OF_MEASURE_ID,

  ZB_ZCL_ATTR_METERING_ALTERNATIVE_DEMAND_FORMATTING_ID,

  ZB_ZCL_ATTR_METERING_ALTERNATIVE_CONSUMPTION_FORMATTING_ID,






  ZB_ZCL_ATTR_METERING_INSTANTANEOUS_DEMAND_ID = ((ZB_ZCL_METERING_SET_HISTORICAL_CONSUMPTION << 8) | (0x00 & 0xFF)),

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_CONSUMPTION_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_CONSUMPTION_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_CONSUMPTION_DELIVERED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_PARTIAL_PROFILE_INTERVAL_START_TIME_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_PARTIAL_PROFILE_INTERVAL_START_TIME_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_PARTIAL_PROFILE_INTERVAL_VALUE_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_PARTIAL_PROFILE_INTERVAL_VALUE_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_PRESSURE_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MIN_PRESSURE_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_PRESSURE_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MIN_PRESSURE_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_DEMAND_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_DEMAND_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_MONTH_MAX_DEMAND_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_YEAR_MAX_DEMAND_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_ENERGY_CARRIER_DEMAND_ID,




  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_ENERGY_CARRIER_DEMAND_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_MONTH_MAX_ENERGY_CARRIER_DEMAND_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_MONTH_MIN_ENERGY_CARRIER_DEMAND_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_YEAR_MAX_ENERGY_CARRIER_DEMAND_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_YEAR_MIN_ENERGY_CARRIER_DEMAND_ID,



  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY2_CONSUMPTION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_HISTORICAL_CONSUMPTION << 8) | (0x20 & 0xFF)),


  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY2_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY3_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY3_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY4_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY4_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY5_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY5_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY6_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY6_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY7_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY7_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY8_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY8_CONSUMPTION_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_WEEK_CONSUMPTION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_HISTORICAL_CONSUMPTION << 8) | (0x30 & 0xFF)),


  ZB_ZCL_ATTR_METERING_CURRENT_WEEK_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK_CONSUMPTION_DELIVERED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK2_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK2_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK3_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK3_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK4_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK4_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK5_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_WEEK5_CONSUMPTION_RECEIVED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_MONTH_CONSUMPTION_DELIVERED_ID = ((ZB_ZCL_METERING_SET_HISTORICAL_CONSUMPTION << 8) | (0x40 & 0xFF)),


  ZB_ZCL_ATTR_METERING_CURRENT_MONTH_CONSUMPTION_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH_CONSUMPTION_DELIVERED_ID,



  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH_CONSUMPTION_RECEIVED_ID,



  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH2_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH2_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH3_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH3_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH4_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH4_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH5_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH5_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH6_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH6_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH7_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH7_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH8_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH8_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH9_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH9_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH10_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH10_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH11_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH11_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH12_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH12_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH13_CONSUMPTION_DELIVERED_ID,
  ZB_ZCL_ATTR_METERING_PREVIOUS_MONTH13_CONSUMPTION_RECEIVED_ID,
  ZB_ZCL_ATTR_METERING_HISTORICAL_FREEZE_TIME_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_DEMAND_DELIVERED_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_DEMAND_DELIVERED_TIME_ID,

  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_DEMAND_RECEIVED_ID,


  ZB_ZCL_ATTR_METERING_CURRENT_DAY_MAX_DEMAND_RECEIVED_TIME_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_DEMAND_DELIVERED_ID,


  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_DEMAND_DELIVERED_TIME_ID,

  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_DEMAND_RECEIVED_ID,



  ZB_ZCL_ATTR_METERING_PREVIOUS_DAY_MAX_DEMAND_RECEIVED_TIME_ID,






  ZB_ZCL_ATTR_METERING_MAX_NUMBER_OF_PERIODS_DELIVERED_ID = ((ZB_ZCL_METERING_SET_LOAD_PROFILE_CONFIGURATION << 8) | (0x00 & 0xFF)),
# 546 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
  ZB_ZCL_ATTR_METERING_CURRENT_DEMAND_DELIVERED_ID = ((ZB_ZCL_METERING_SET_SUPPLY_LIMIT << 8) | (0x00 & 0xFF)),

  ZB_ZCL_ATTR_METERING_DEMAND_LIMIT_ID,



  ZB_ZCL_ATTR_METERING_DEMAND_INTEGRATION_PERIOD_ID,


  ZB_ZCL_ATTR_METERING_NUMBER_OF_DEMAND_SUBINTERVALS_ID,





  ZB_ZCL_ATTR_METERING_DEMAND_LIMIT_ARM_DURATION_ID,


  ZB_ZCL_ATTR_METERING_LOAD_LIMIT_SUPPLY_STATE_ID,

  ZB_ZCL_ATTR_METERING_LOAD_LIMIT_COUNTER_ID,

  ZB_ZCL_ATTR_METERING_SUPPLY_TAMPER_STATE_ID,

  ZB_ZCL_ATTR_METERING_SUPPLY_DEPLETION_STATE_ID,

  ZB_ZCL_ATTR_METERING_SUPPLY_UNCONTROLLED_FLOW_STATE_ID,






  ZB_ZCL_ATTR_METERING_GENERIC_ALARM_MASK_ID = ((ZB_ZCL_METERING_SET_ALARMS << 8) | (0x00 & 0xFF)),






  ZB_ZCL_ATTR_METERING_ELECTRICITY_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_GENERIC_FLOW_PRESSURE_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_WATER_SPECIFIC_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_HEAT_AND_COOLING_SPECIFIC_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_GAS_SPECIFIC_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_EXTENDED_GENERIC_ALARM_MASK_ID,
  ZB_ZCL_ATTR_METERING_MANUFACTURER_ALARM_MASK_ID,
# 602 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
  ZB_ZCL_ATTR_METERING_CURRENT_ACTIVE_SUMMATION_Q1_ID = ((ZB_ZCL_METERING_SET_FOUR_QUADRANT_ELECTRICITY << 8) | (0x00 & 0xFF)),



  ZB_ZCL_ATTR_METERING_CURRENT_ACTIVE_SUMMATION_Q2_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_ACTIVE_SUMMATION_Q3_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_ACTIVE_SUMMATION_Q4_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_REACTIVE_SUMMATION_Q1_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_REACTIVE_SUMMATION_Q2_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_REACTIVE_SUMMATION_Q3_ID,



  ZB_ZCL_ATTR_METERING_CURRENT_REACTIVE_SUMMATION_Q4_ID



};






enum zb_zcl_metering_block_e
{
  ZB_ZCL_METERING_BLOCK_NOT_USED = 0x00,
  ZB_ZCL_METERING_BLOCK_1 = 0x01,
  ZB_ZCL_METERING_BLOCK_2 = 0x02,
  ZB_ZCL_METERING_BLOCK_3 = 0x03,
  ZB_ZCL_METERING_BLOCK_4 = 0x04,
  ZB_ZCL_METERING_BLOCK_5 = 0x05,
  ZB_ZCL_METERING_BLOCK_6 = 0x06,
  ZB_ZCL_METERING_BLOCK_7 = 0x07,
  ZB_ZCL_METERING_BLOCK_8 = 0x08,
  ZB_ZCL_METERING_BLOCK_9 = 0x09,
  ZB_ZCL_METERING_BLOCK_10 = 0x0A,
  ZB_ZCL_METERING_BLOCK_11 = 0x0B,
  ZB_ZCL_METERING_BLOCK_12 = 0x0C,
  ZB_ZCL_METERING_BLOCK_13 = 0x0D,
  ZB_ZCL_METERING_BLOCK_14 = 0x0E,
  ZB_ZCL_METERING_BLOCK_15 = 0x0F,
  ZB_ZCL_METERING_BLOCK_16 = 0x10,

};






enum zb_zcl_metering_supply_status_e
{
  ZB_ZCL_SUPPLY_STATUS_OFF = 0x00,
  ZB_ZCL_SUPPLY_STATUS_ARMED = 0x01,
  ZB_ZCL_SUPPLY_STATUS_ON = 0x02

};






enum zb_zcl_metering_status_electricity_e
{
  ZB_ZCL_METERING_ELECTRICITY_CHECK_METER = 1 << 0,

  ZB_ZCL_METERING_ELECTRICITY_LOW_BATTERY = 1 << 1,
  ZB_ZCL_METERING_ELECTRICITY_TAMPER_DETECT = 1 << 2,
  ZB_ZCL_METERING_ELECTRICITY_POWER_FAILURE = 1 << 3,
  ZB_ZCL_METERING_ELECTRICITY_POWER_QUALITY = 1 << 4,

  ZB_ZCL_METERING_ELECTRICITY_LEAK_DETECT = 1 << 5,
  ZB_ZCL_METERING_ELECTRICITY_SERVICE_DISCONNECT_OPEN = 1 << 6,
  ZB_ZCL_METERING_ELECTRICITY_RESERVED = 1 << 7
};






enum zb_zcl_metering_status_gas_e
{
  ZB_ZCL_METERING_GAS_CHECK_METER = 1 << 0,

  ZB_ZCL_METERING_GAS_LOW_BATTERY = 1 << 1,
  ZB_ZCL_METERING_GAS_TAMPER_DETECT = 1 << 2,
  ZB_ZCL_METERING_GAS_RESERVED = 1 << 3,
  ZB_ZCL_METERING_GAS_LOW_PRESSURE = 1 << 4,

  ZB_ZCL_METERING_GAS_LEAK_DETECT = 1 << 5,
  ZB_ZCL_METERING_GAS_SERVICE_DISCONNECT = 1 << 6,

  ZB_ZCL_METERING_GAS_REVERSE_FLOW = 1 << 7

};






enum zb_zcl_metering_status_water_e
{
  ZB_ZCL_METERING_WATER_CHECK_METER = 1 << 0,

  ZB_ZCL_METERING_WATER_LOW_BATTERY = 1 << 1,
  ZB_ZCL_METERING_WATER_TAMPER_DETECT = 1 << 2,
  ZB_ZCL_METERING_WATER_PIPE_EMTPY = 1 << 3,

  ZB_ZCL_METERING_WATER_LOW_PRESSURE = 1 << 4,

  ZB_ZCL_METERING_WATER_LEAK_DETECT = 1 << 5,
  ZB_ZCL_METERING_WATER_SERVICE_DISCONNECT = 1 << 6,

  ZB_ZCL_METERING_WATER_REVERSE_FLOW = 1 << 7

};






enum zb_zcl_metering_status_heat_cooling_e
{
  ZB_ZCL_METERING_HCOOL_CHECK_METER = 1 << 0,

  ZB_ZCL_METERING_HCOOL_LOW_BATTERY = 1 << 1,
  ZB_ZCL_METERING_HCOOL_TAMPER_DETECT = 1 << 2,
  ZB_ZCL_METERING_HCOOL_TEMPERATURE_SENSOR = 1 << 3,

  ZB_ZCL_METERING_HCOOL_BURST_DETECT = 1 << 4,
  ZB_ZCL_METERING_HCOOL_LEAK_DETECT = 1 << 5,
  ZB_ZCL_METERING_HCOOL_SERVICE_DISCONNECT = 1 << 6,

  ZB_ZCL_METERING_HCOOL_FLOW_SENSOR = 1 << 7
};






enum zb_zcl_metering_extstatus_general_e
{
  ZB_ZCL_METERING_METER_COVER_REMOVED = 1 << 0,

  ZB_ZCL_METERING_STRONG_MAGNETIC_FIELD_DETECTED = 1 << 1,

  ZB_ZCL_METERING_BATTERY_FAILURE = 1 << 2,

  ZB_ZCL_METERING_PROGRAM_MEMORY_ERROR = 1 << 3,

  ZB_ZCL_METERING_RAM_ERROR = 1 << 4,

  ZB_ZCL_METERING_NV_MEMORY_ERROR = 1 << 5,


  ZB_ZCL_METERING_MEASUREMENT_SYSTEM_ERROR = 1 << 6,

  ZB_ZCL_METERING_WATCHDOG_ERROR = 1 << 7,

  ZB_ZCL_METERING_SUPPLY_DISCONNECT_FAILURE = 1 << 8,


  ZB_ZCL_METERING_SUPPLY_CONNECT_FAILURE = 1 << 9,


  ZB_ZCL_METERING_MEASUREMENT_SW_CHANGED = 1 << 10,

  ZB_ZCL_METERING_CLOCK_INVALID = 1 << 11,

  ZB_ZCL_METERING_TEMPERATURE_EXCEEDED = 1 << 12,


  ZB_ZCL_METERING_MOISTURE_DETECTED = 1 << 13



};






enum zb_zcl_metering_extstatus_electricity_e
{
  ZB_ZCL_METERING_ELECTRICITY_TERMINAL_COVER_REMOVED = 1L << 24,

  ZB_ZCL_METERING_ELECTRICITY_INCORRECT_POLARITY = 1L << 25,

  ZB_ZCL_METERING_ELECTRICITY_CURRENT_WITH_NO_VOLTAGE = 1L << 26,


  ZB_ZCL_METERING_ELECTRICITY_LIMIT_THRESHOLD_EXCEEDED = 1L << 27,

  ZB_ZCL_METERING_ELECTRICITY_UNDER_VOLTAGE = 1L << 28,


  ZB_ZCL_METERING_ELECTRICITY_OVER_VOLTAGE = 1L << 29,


  ZB_ZCL_METERING_ELECTRICITY_BIDIRECTION_OPERATION = 1L << 30,


  ZB_ZCL_METERING_ELECTRICITY_ACTIVE_POWER_RECEIVED = -2147483648LL


};






enum zb_zcl_metering_extstatus_gas_e
{
  ZB_ZCL_METERING_GAS_BATTERY_COVER_REMOVED = 1L << 24,

  ZB_ZCL_METERING_GAS_TILT_TAMPER = 1L << 25,


  ZB_ZCL_METERING_GAS_EXCESS_FLOW = 1L << 26


};






enum zb_zcl_metering_low_medium_high_status_e
{
  ZB_ZCL_METERING_STATUS_LOW = 0x00,
  ZB_ZCL_METERING_STATUS_MEDIUM = 0x01,
  ZB_ZCL_METERING_STATUS_HIGH = 0x02,
};






enum zb_zcl_metering_unit_of_measure_e
{
  ZB_ZCL_METERING_UNIT_KW_KWH_BINARY = 0x00,
  ZB_ZCL_METERING_UNIT_M3_M3H_BINARY = 0x01,
  ZB_ZCL_METERING_UNIT_FT3_FT3H_BINARY = 0x02,
  ZB_ZCL_METERING_UNIT_CCF_CCFH_BINARY = 0x03,
  ZB_ZCL_METERING_UNIT_USGL_USGLH_BINARY = 0x04,
  ZB_ZCL_METERING_UNIT_IMPGL_IMPGLH_BINARY = 0x05,
  ZB_ZCL_METERING_UNIT_BTU_BTUH_BINARY = 0x06,
  ZB_ZCL_METERING_UNIT_L_LH_BINARY = 0x07,
  ZB_ZCL_METERING_UNIT_KPAG_BINARY = 0x08,
  ZB_ZCL_METERING_UNIT_KPAA_BINARY = 0x09,
  ZB_ZCL_METERING_UNIT_MCF_MCFH_BINARY = 0x0A,
  ZB_ZCL_METERING_UNIT_UNITLESS_BINARY = 0x0B,
  ZB_ZCL_METERING_UNIT_MJ_MJS_BINARY = 0x0C,
  ZB_ZCL_METERING_UNIT_KVAR_KVARH_BINARY = 0x0D,

  ZB_ZCL_METERING_UNIT_BINARY_RESERVED = 0x0E,


  ZB_ZCL_METERING_UNIT_KW_KWH_BCD = 0x80,
  ZB_ZCL_METERING_UNIT_M3_M3H_BCD = 0x81,
  ZB_ZCL_METERING_UNIT_FT3_FT3H_BCD = 0x82,
  ZB_ZCL_METERING_UNIT_CCF_CCFH_BCD = 0x83,
  ZB_ZCL_METERING_UNIT_USGL_USGLH_BCD = 0x84,
  ZB_ZCL_METERING_UNIT_IMPGL_IMPGLH_BCD = 0x85,
  ZB_ZCL_METERING_UNIT_BTU_BTUH_BCD = 0x86,
  ZB_ZCL_METERING_UNIT_L_LH_BCD = 0x87,
  ZB_ZCL_METERING_UNIT_KPAG_BCD = 0x88,
  ZB_ZCL_METERING_UNIT_KPAA_BCD = 0x89,
  ZB_ZCL_METERING_UNIT_MCF_MCFH_BCD = 0x8A,
  ZB_ZCL_METERING_UNIT_UNITLESS_BCD = 0x8B,
  ZB_ZCL_METERING_UNIT_MJ_MJS_BCD = 0x8C,
  ZB_ZCL_METERING_UNIT_KVAR_KVARH_BCD = 0x8D,

  ZB_ZCL_METERING_UNIT_BCD_RESERVED = 0x8E
};





enum zb_zcl_metering_device_type_e
{
  ZB_ZCL_METERING_ELECTRIC_METERING = 0,
  ZB_ZCL_METERING_GAS_METERING = 1,
  ZB_ZCL_METERING_WATER_METERING = 2,
  ZB_ZCL_METERING_PRESSURE_METERING = 4,
  ZB_ZCL_METERING_HEAT_METERING = 5,
  ZB_ZCL_METERING_COOLING_METERING = 6,
  ZB_ZCL_METERING_EUMD = 7,
  ZB_ZCL_METERING_PV_GENERATION_METERING = 8,
  ZB_ZCL_METERING_WIND_TURBINE_GENERATION_METERING = 9,
  ZB_ZCL_METERING_WATER_TURBINE_GENERATION_METERING = 10,
  ZB_ZCL_METERING_MICRO_GENERATION_METERING = 11,
  ZB_ZCL_METERING_SOLAR_HOT_WATER_GENERATION_METERING = 12,
  ZB_ZCL_METERING_ELECTRIC_METERING_ELEMENT_PHASE1 = 13,
  ZB_ZCL_METERING_ELECTRIC_METERING_ELEMENT_PHASE2 = 14,
  ZB_ZCL_METERING_ELECTRIC_METERING_ELEMENT_PHASE3 = 15,



  ZB_ZCL_METERING_MIRRORED_ELECTRIC_METERING = 127,
  ZB_ZCL_METERING_MIRRORED_GAS_METERING = 128,
  ZB_ZCL_METERING_MIRRORED_WATER_METERING = 129,

  ZB_ZCL_METERING_MIRRORED_PRESSURE_METERING = 131,
  ZB_ZCL_METERING_MIRRORED_HEAT_METERING = 132,
  ZB_ZCL_METERING_MIRRORED_COOLING_METERING = 133,
  ZB_ZCL_METERING_MIRRORED_EUMD = 134,
  ZB_ZCL_METERING_MIRRORED_PV_GENERATION_METERING = 135,
  ZB_ZCL_METERING_MIRRORED_WIND_TURBINE_GENERATION_METERING = 136,
  ZB_ZCL_METERING_MIRRORED_WATER_TURBINE_GENERATION_METERING = 137,
  ZB_ZCL_METERING_MIRRORED_MICRO_GENERATION_METERING = 138,
  ZB_ZCL_METERING_MIRRORED_SOLAR_HOT_WATER_GENERATION_METERING = 139,
  ZB_ZCL_METERING_MIRRORED_ELECTRIC_METERING_ELEMENT_PHASE1 = 140,
  ZB_ZCL_METERING_MIRRORED_ELECTRIC_METERING_ELEMENT_PHASE2 = 141,
  ZB_ZCL_METERING_MIRRORED_ELECTRIC_METERING_ELEMENT_PHASE3 = 142,


  ZB_ZCL_METERING_RESERVED = 143
};






enum zb_zcl_metering_temperature_unit_of_measure_e
{
  ZB_ZCL_METERING_TEMPERATURE_UNIT_KELVIN_BINARY = 0x00,
  ZB_ZCL_METERING_TEMPERATURE_UNIT_CELSIUS_BINARY = 0x01,
  ZB_ZCL_METERING_TEMPERATURE_UNIT_FAHRENHEIT_BINARY = 0x02,

  ZB_ZCL_METERING_TEMPERATURE_UNIT_KELVIN_BCD = 0x80,
  ZB_ZCL_METERING_TEMPERATURE_UNIT_CELSIUS_BCD = 0x81,
  ZB_ZCL_METERING_TEMPERATURE_UNIT_FAHRENHEIT_BCD = 0x82,

};






enum zb_zcl_metering_generic_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_CHECK_METER = 0x00,
  ZB_ZCL_METERING_ALARM_LOW_BATTERY = 0x01,
  ZB_ZCL_METERING_ALARM_TAMPER_DETECT = 0x02,
  ZB_ZCL_METERING_ALARM_ELECTRICITY_POWER_FAILURE = 0x03,
  ZB_ZCL_METERING_ALARM_WATER_PIPE_EMPTY = 0x03,
  ZB_ZCL_METERING_ALARM_HEAT_TEMPERATURE_SENSOR = 0x03,
  ZB_ZCL_METERING_ALARM_COOLING_TEMPERATURE_SENSOR = 0x03,
  ZB_ZCL_METERING_ALARM_ELECTRICITY_POWER_QUALITY = 0x04,
  ZB_ZCL_METERING_ALARM_GAS_LOW_PRESSURE = 0x04,
  ZB_ZCL_METERING_ALARM_WATER_LOW_PRESSURE = 0x04,
  ZB_ZCL_METERING_ALARM_HEAT_BURST_DETECT = 0x04,
  ZB_ZCL_METERING_ALARM_COOLING_BURST_DETECT = 0x04,
  ZB_ZCL_METERING_ALARM_LEAK_DETECT = 0x05,
  ZB_ZCL_METERING_ALARM_SERVICE_DISCONNECT = 0x06,
  ZB_ZCL_METERING_ALARM_ELECTRICITY_RESERVED = 0x07,
  ZB_ZCL_METERING_ALARM_GAS_REVERSE_FLOW = 0x07,
  ZB_ZCL_METERING_ALARM_WATER_REVERSE_FLOW = 0x07,
  ZB_ZCL_METERING_ALARM_HEAT_FLOW_SENSOR = 0x07,
  ZB_ZCL_METERING_ALARM_COOLING_FLOW_SENSOR = 0x07,
  ZB_ZCL_METERING_ALARM_METER_COVER_REMOVED = 0x08,
  ZB_ZCL_METERING_ALARM_METER_COVER_CLOSED = 0x09,
  ZB_ZCL_METERING_ALARM_STRONG_MAGNETIC_FIELD = 0x0A,
  ZB_ZCL_METERING_ALARM_NO_STRONG_MAGNETIC_FIELD = 0x0B,
  ZB_ZCL_METERING_ALARM_BATTERY_FAILURE = 0x0C,
  ZB_ZCL_METERING_ALARM_PROGRAM_MEMORY_ERROR = 0x0D,
  ZB_ZCL_METERING_ALARM_RAM_ERROR = 0x0E,
  ZB_ZCL_METERING_ALARM_NV_MEMORY_ERROR = 0x0F
};






enum zb_zcl_metering_electricity_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_LOW_VOLTAGE_L1 = 0x10,
  ZB_ZCL_METERING_ALARM_HIGH_VOLTAGE_L1 = 0x11,
  ZB_ZCL_METERING_ALARM_LOW_VOLTAGE_L2 = 0x12,
  ZB_ZCL_METERING_ALARM_HIGH_VOLTAGE_L2 = 0x13,
  ZB_ZCL_METERING_ALARM_LOW_VOLTAGE_L3 = 0x14,
  ZB_ZCL_METERING_ALARM_HIGH_VOLTAGE_L3 = 0x15,
  ZB_ZCL_METERING_ALARM_OVER_CURRENT_L1 = 0x16,
  ZB_ZCL_METERING_ALARM_OVER_CURRENT_L2 = 0x17,
  ZB_ZCL_METERING_ALARM_OVER_CURRENT_L3 = 0x18,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_LOW_L1 = 0x19,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_HIGH_L1 = 0x1A,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_LOW_L2 = 0x1B,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_HIGH_L2 = 0x1C,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_LOW_L3 = 0x1D,
  ZB_ZCL_METERING_ALARM_FREQUENCY_TOO_HIGH_L3 = 0x1E,
  ZB_ZCL_METERING_ALARM_GROUND_FAULT = 0x1F,
  ZB_ZCL_METERING_ALARM_ELECTRIC_TAMPER_DETECT = 0x20,
  ZB_ZCL_METERING_ALARM_INCORRECT_POLARITY = 0x21,
  ZB_ZCL_METERING_ALARM_CURRENT_NO_VOLTAGE = 0x22,
  ZB_ZCL_METERING_ALARM_UNDER_VOLTAGE = 0x23,
  ZB_ZCL_METERING_ALARM_OVER_VOLTAGE = 0x24,
  ZB_ZCL_METERING_ALARM_NORMAL_VOLTAGE = 0x25,
  ZB_ZCL_METERING_ALARM_PF_BELOW_THRESHOLD = 0x26,
  ZB_ZCL_METERING_ALARM_PF_ABOVE_THRESHOLD = 0x27,
  ZB_ZCL_METERING_ALARM_TERMINAL_COVER_REMOVED = 0x28,
  ZB_ZCL_METERING_ALARM_TERMINAL_COVER_CLOSED = 0x29,
};







enum zb_zcl_metering_generic_flow_pressure_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_BURST_DETECT = 0x30,
  ZB_ZCL_METERING_ALARM_PRESSURE_TOO_LOW = 0x31,
  ZB_ZCL_METERING_ALARM_PRESSURE_TOO_HIGH = 0x32,
  ZB_ZCL_METERING_ALARM_FLOW_SENSOR_COMMUNICATION_ERROR = 0x33,
  ZB_ZCL_METERING_ALARM_FLOW_SENSOR_MEASUREMENT_FAULT = 0x34,
  ZB_ZCL_METERING_ALARM_FLOW_SENSOR_REVERSE_FLOW = 0x35,
  ZB_ZCL_METERING_ALARM_FLOW_SENSOR_AIR_DETECT = 0x36,
  ZB_ZCL_METERING_ALARM_PIPE_EMPTY = 0x37,
};






enum zb_zcl_metering_heat_and_cooling_specific_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_INLET_TEMPERATURE_SENSOR_FAULT = 0x50,
  ZB_ZCL_METERING_ALARM_OUTLET_TEMPERATURE_SENSOR_FAULT = 0x51,
};






enum zb_zcl_metering_gas_specific_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_TILT_TAMPER = 0x60,
  ZB_ZCL_METERING_ALARM_BATTERY_COVER_REMOVED = 0x61,
  ZB_ZCL_METERING_ALARM_BATTERY_COVER_CLOSED = 0x62,
  ZB_ZCL_METERING_ALARM_EXCESS_FLOW = 0x63,
  ZB_ZCL_METERING_ALARM_TILT_TAMPER_ENDED = 0x64,
};






enum zb_zcl_metering_extended_generic_alarm_group_e
{
  ZB_ZCM_METERING_ALARM_MEASUREMENT_SYSTEM_ERROR = 0x70,
  ZB_ZCM_METERING_ALARM_WATCHDOG_ERROR = 0x71,
  ZB_ZCM_METERING_ALARM_SUPPLY_DISCONNECT_FAILURE = 0x72,
  ZB_ZCM_METERING_ALARM_SUPPLY_CONNECT_FAILURE = 0x73,
  ZB_ZCM_METERING_ALARM_MEASUREMENT_SOFTWARE_CHANGED = 0x74,
  ZB_ZCM_METERING_ALARM_DST_ENABLED = 0x75,
  ZB_ZCM_METERING_ALARM_DST_DISABLED = 0x76,
  ZB_ZCM_METERING_ALARM_CLOCK_ADJ_BACKWARD = 0x77,

  ZB_ZCM_METERING_ALARM_CLOCK_ADJ_FORWARD = 0x78,

  ZB_ZCM_METERING_ALARM_CLOCK_INVALID = 0x79,
  ZB_ZCM_METERING_ALARM_COMMUNICATION_ERROR_HAN = 0x7A,
  ZB_ZCM_METERING_ALARM_COMMUNICATION_OK_HAN = 0x7B,
  ZB_ZCM_METERING_ALARM_METER_FRAUD_ATTEMPT = 0x7C,
  ZB_ZCM_METERING_ALARM_POWER_LOSS = 0x7D,
  ZB_ZCM_METERING_ALARM_UNUSUAL_HAN_TRAFFIC = 0x7E,
  ZB_ZCM_METERING_ALARM_UNEXPECTED_CLOCK_CHANGE = 0x7F,
  ZB_ZCM_METERING_ALARM_COMMS_USING_UNAUTHENTICATED_COMPONENT = 0x80,
  ZB_ZCM_METERING_ALARM_ERROR_REG_CLEAR = 0x81,
  ZB_ZCM_METERING_ALARM_ALARM_REG_CLEAR = 0x82,
  ZB_ZCM_METERING_ALARM_UNEXPECTED_HW_RESET = 0x83,
  ZB_ZCM_METERING_ALARM_UNEXPECTED_PROGRAM_EXECUTION = 0x84,
  ZB_ZCM_METERING_ALARM_EVENTLOG_CLEARED = 0x85,
  ZB_ZCM_METERING_ALARM_LIMIT_THRESHOLD_EXCEEDED = 0x86,
  ZB_ZCM_METERING_ALARM_LIMIT_THRESHOLD_OK = 0x87,
  ZB_ZCM_METERING_ALARM_LIMIT_THRESHOLD_CHANGED = 0x88,
  ZB_ZCM_METERING_ALARM_MAXIMUM_DEMAND_EXCEEDED = 0x89,
  ZB_ZCM_METERING_ALARM_PROFILE_CLEARED = 0x8A,
  ZB_ZCM_METERING_ALARM_SAMPLING_BUFFER_CLEARED = 0x8B,
  ZB_ZCM_METERING_ALARM_BATTERY_WARNING = 0x8C,
  ZB_ZCM_METERING_ALARM_WRONG_SIGNATURE = 0x8D,
  ZB_ZCM_METERING_ALARM_NO_SIGNATURE = 0x8E,
  ZB_ZCM_METERING_ALARM_UNAUTHORISED_ACTION_FROM_HAN = 0x8F,
  ZB_ZCM_METERING_ALARM_FAST_POLLING_START = 0x90,
  ZB_ZCM_METERING_ALARM_FAST_POLLING_END = 0x91,
  ZB_ZCM_METERING_ALARM_METER_REPORTING_INTERVAL_CHANGED = 0x92,
  ZB_ZCM_METERING_ALARM_DISCONNECT_DUE_TO_LOAD_LIMIT = 0x93,
  ZB_ZCM_METERING_ALARM_METER_SUPPLY_STATUS_REGISTER_CHANGED = 0x94,
  ZB_ZCM_METERING_ALARM_METER_ALARM_STATUS_REGISTER_CHANGED = 0x95,
  ZB_ZCM_METERING_ALARM_EXTENDED_METER_ALARM_STATUS_REGISTER_CHANGED = 0x96,
};







enum zb_zcl_metering_manufacturer_specific_alarm_group_e
{
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_A = 0xB0,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_B = 0xB1,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_C = 0xB2,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_D = 0xB3,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_E = 0xB4,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_F = 0xB5,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_G = 0xB6,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_H = 0xB7,
  ZB_ZCL_METERING_ALARM_MANUFACTURER_SPECIFIC_I = 0xB8,
};





enum zb_zcl_metering_service_disconnect_reasons_e
{
  ZB_ZCL_METERING_REASON_ON = 0x00,
  ZB_ZCL_METERING_REASON_OFF_DUE_TO_OVER_POWER = 0x01,
  ZB_ZCL_METERING_REASON_OFF_DUE_TO_OVER_VOLTAGE = 0x02,
  ZB_ZCL_METERING_REASON_OFF_DUE_TO_REMOTE_DNO_LOAD_CONTROL = 0x03,
  ZB_ZCL_METERING_REASON_OFF_BY_OTHER_REMOTE_COMMAND = 0x04,
  ZB_ZCL_METERING_REASON_OFF_DUE_TO_OVERHEATING_SHORT_CIRCUIT = 0x05,

  ZB_ZCL_METERING_REASON_OFF_DUE_TO_OVERHEATING_OTHER = 0x06,

};
# 1234 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
typedef enum zb_zcl_metering_cli_cmd_e
{


  ZB_ZCL_METERING_CLI_CMD_GET_PROFILE = 0x00,

  ZB_ZCL_METERING_CLI_CMD_REQUEST_MIRROR_RESPONSE,





  ZB_ZCL_METERING_CLI_CMD_MIRROR_REMOVED,





  ZB_ZCL_METERING_CLI_CMD_REQUEST_FAST_POLL_MODE,

  ZB_ZCL_METERING_CLI_CMD_SCHEDULE_SNAPSHOT,




  ZB_ZCL_METERING_CLI_CMD_TAKE_SNAPSHOT,



  ZB_ZCL_METERING_CLI_CMD_GET_SNAPSHOT,


  ZB_ZCL_METERING_CLI_CMD_START_SAMPLING,




  ZB_ZCL_METERING_CLI_CMD_GET_SAMPLED_DATA,



  ZB_ZCL_METERING_CLI_CMD_MIRROR_REPORT_ATTRIBUTE_RESPONSE,




  ZB_ZCL_METERING_CLI_CMD_RESET_LOAD_LIMIT_COUNTER,




  ZB_ZCL_METERING_CLI_CMD_CHANGE_SUPPLY,





  ZB_ZCL_METERING_CLI_CMD_LOCAL_CHANGE_SUPPLY,





  ZB_ZCL_METERING_CLI_CMD_SET_SUPPLY_STATUS,




  ZB_ZCL_METERING_CLI_CMD_SET_UNCONTROLLED_FLOW_THRESHOLD,


} zb_zcl_metering_cli_cmd_t;





typedef enum zb_zcl_metering_srv_cmd_e
{

  ZB_ZCL_METERING_SRV_CMD_GET_PROFILE_RESPONSE = 0x00,

  ZB_ZCL_METERING_SRV_CMD_REQUEST_MIRROR,



  ZB_ZCL_METERING_SRV_CMD_REMOVE_MIRROR,



  ZB_ZCL_METERING_SRV_CMD_REQUEST_FAST_POLL_MODE_RESPONSE,

  ZB_ZCL_METERING_SRV_CMD_SCHEDULE_SNAPSHOT_RESPONSE,




  ZB_ZCL_METERING_SRV_CMD_TAKE_SNAPSHOT_RESPONSE,




  ZB_ZCL_METERING_SRV_CMD_PUBLISH_SNAPSHOT,



  ZB_ZCL_METERING_SRV_CMD_GET_SAMPLED_DATA_RESPONSE,




  ZB_ZCL_METERING_SRV_CMD_CONFIGURE_MIRROR,






  ZB_ZCL_METERING_SRV_CMD_CONFIGURE_NOTIFICATION_SCHEME,





  ZB_ZCL_METERING_SRV_CMD_CONFIGURE_NOTIFICATION_FLAG,







  ZB_ZCL_METERING_SRV_CMD_GET_NOTIFIED_MESSAGE,





  ZB_ZCL_METERING_SRV_CMD_SUPPLY_STATUS_RESPONSE,



  ZB_ZCL_METERING_SRV_CMD_START_SAMPLING_RESPONSE,


} zb_zcl_metering_srv_cmd_t;
# 1401 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
enum zb_zcl_metering_interval_channel_e
{
  ZB_ZCL_METERING_CONSUMPTION_DELIVERED = 0,
  ZB_ZCL_METERING_CONSUMPTION_RECEIVED = 1,
  ZB_ZCL_METERING_REACTIVE_CONSUMPTION_DELIVERED = 2,
  ZB_ZCL_METERING_REACTIVE_CONSUMPTION_RECEIVED = 3,

};





typedef struct zb_zcl_metering_get_profile_payload_s
{




  zb_uint8_t interval_channel;



  zb_uint32_t end_time;

  zb_uint8_t number_of_periods;
} __attribute__ ((packed)) zb_zcl_metering_get_profile_payload_t;






enum zb_zcl_metering_status_field_e
{
  ZB_ZCL_METERING_SUCCESS = 0x00,
  ZB_ZCL_METERING_UNDEFINED_INTERVAL_CHANNEL_REQUESTED = 0x01,
  ZB_ZCL_METERING_INTERVAL_CHANNEL_NOT_SUPPORTED = 0x02,
  ZB_ZCL_METERING_INVALID_END_TIME = 0x03,
  ZB_ZCL_METERING_MORE_PERIODS_REQUESTED_THAN_CAN_BE_RETURNED = 0x04,
  ZB_ZCL_METERING_NO_INTERVALS_AVAILABLE_FOR_THE_REQUESTED_TIME = 0x05
};





enum zb_zcl_metering_profile_interval_period_e
{
   ZB_ZCl_METERING_INTERVAL_PERIOD_DAILY = 0,
   ZB_ZCl_METERING_INTERVAL_PERIOD_60_MINUTES = 1,
   ZB_ZCl_METERING_INTERVAL_PERIOD_30_MINUTES = 2,
   ZB_ZCl_METERING_INTERVAL_PERIOD_15_MINUTES = 3,
   ZB_ZCl_METERING_INTERVAL_PERIOD_10_MINUTES = 4,
   ZB_ZCl_METERING_INTERVAL_PERIOD_7_5_MINUTES = 5,
   ZB_ZCl_METERING_INTERVAL_PERIOD_5_MINUTES = 6,
   ZB_ZCl_METERING_INTERVAL_PERIOD_2_5_MINUTES = 7,
   ZB_ZCl_METERING_INTERVAL_PERIOD_1_MINUTE = 8
};







typedef struct zb_zcl_metering_get_profile_response_payload_s
{



  zb_uint32_t end_time;



  zb_uint8_t status;




  zb_uint8_t profile_interval_period;


  zb_uint8_t number_of_periods_delivered;






  zb_uint24_t *intervals;
} __attribute__ ((packed)) zb_zcl_metering_get_profile_response_payload_t;





typedef struct zb_zcl_metering_request_fast_poll_mode_payload_s
{


  zb_uint8_t fast_poll_update_period;


  zb_uint8_t duration_in_minutes;
} __attribute__ ((packed)) zb_zcl_metering_request_fast_poll_mode_payload_t;





typedef struct zb_zcl_metering_request_fast_poll_mode_response_payload_s
{


  zb_uint8_t applied_update_period_in_seconds;



  zb_uint32_t fast_poll_mode_end_time;
} __attribute__ ((packed)) zb_zcl_metering_request_fast_poll_mode_response_payload_t;





typedef struct zb_zcl_metering_get_sampled_data_response_payload_s
{



  zb_uint16_t sample_id;

  zb_uint32_t sample_start_time;

  zb_uint8_t sample_type;

  zb_uint16_t sample_request_interval;



  zb_uint16_t number_of_samples;



  zb_uint24_t *samples;
} __attribute__ ((packed)) zb_zcl_metering_get_sampled_data_response_payload_t;





enum zb_zcl_metering_sample_type_e
{
  ZB_ZCL_METERING_SAMPLE_TYPE_CONSUMPTION_DELIVERED = 0,
  ZB_ZCL_METERING_SAMPLE_TYPE_CONSUMPTION_RECEIVED = 1,
  ZB_ZCL_METERING_SAMPLE_TYPE_REACTIVE_CONSUMPTION_DELIVERED = 2,
  ZB_ZCL_METERING_SAMPLE_TYPE_REACTIVE_CONSUMPTION_RECEIVED = 3,
  ZB_ZCL_METERING_SAMPLE_TYPE_INSTANTANEOUS_DEMAND = 4
};





typedef struct zb_zcl_metering_get_sampled_data_payload_s
{



  zb_uint16_t sample_id;

  zb_uint32_t earliest_sample_time;

  zb_uint8_t sample_type;



  zb_uint16_t number_of_samples;
} __attribute__ ((packed)) zb_zcl_metering_get_sampled_data_payload_t;





typedef struct zb_zcl_metering_get_snapshot_payload_s
{



  zb_uint32_t earliest_start_time;



  zb_uint32_t latest_end_time;



  zb_uint8_t snapshot_offset;

  zb_uint32_t snapshot_cause;
} __attribute__ ((packed)) zb_zcl_metering_get_snapshot_payload_t;





enum zb_zcl_metering_snapshot_cause_e
{
  ZB_ZCL_METERING_CAUSE_GENERAL = 0,
  ZB_ZCL_METERING_CAUSE_END_OF_BILLING_PERIOD = 1,
  ZB_ZCL_METERING_CAUSE_END_OF_BLOCK_PERIOD = 2,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_TARIFF_INFORMATION = 3,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_PRICE_MATRIX = 4,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_BLOCK_THRESHOLDS = 5,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_CV = 6,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_CF = 7,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_CALENDAR = 8,
  ZB_ZCL_METERING_CAUSE_CRITICAL_PEAK_PRICING = 9,
  ZB_ZCL_METERING_CAUSE_MANUALLY_TRIGGERED_FROM_CLIENT = 10,
  ZB_ZCL_METERING_CAUSE_END_OF_RESOLVE_PERIOD = 11,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_TENANCY = 12,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_SUPPLIER = 13,
  ZB_ZCL_METERING_CAUSE_CHANGE_OF_METER_MODE = 14,
  ZB_ZCL_METERING_CAUSE_DEBT_PAYMENT = 15,
  ZB_ZCL_METERING_CAUSE_SCHEDULED_SNAPSHOT = 16,
  ZB_ZCL_METERING_CAUSE_OTA_FIRMWARE_DOWNLOAD = 17
};





enum zb_zcl_metering_snapshot_payload_type_e
{
  ZB_ZCL_METERING_TOU_DELIVERED_REGISTERS = 0,
  ZB_ZCL_METERING_TOU_RECEIVED_REGISTERS = 1,
  ZB_ZCL_METERING_BLOCK_TIER_DELIVERED = 2,
  ZB_ZCL_METERING_BLOCK_TIER_RECEIVED = 3,
  ZB_ZCL_METERING_TOU_DELIVERED_NO_BILLING = 4,
  ZB_ZCL_METERING_TOU_RECEIVED_NO_BILLING = 5,
  ZB_ZCL_METERING_BLOCK_TIER_DELIVERED_NO_BILLING = 6,
  ZB_ZCL_METERING_BLOCK_TIER_RECEIVED_NO_BILLING = 7,
  ZB_ZCL_METERING_DATA_UNAVAILABLE = 128,
};





typedef struct zb_zcl_metering_tou_delivered_payload_s
{



  zb_uint48_t current_summation_delivered;

  zb_uint32_t bill_to_date_delivered;



  zb_uint32_t bill_to_date_time_stamp_delivered;



  zb_uint32_t projected_bill_delivered;



  zb_uint32_t projected_bill_time_stamp_delivered;



  zb_uint8_t bill_delivered_trailing_digit;

  zb_uint8_t number_of_tiers_in_use;




  zb_uint48_t *tier_summation;
} __attribute__ ((packed)) zb_zcl_metering_tou_delivered_payload_t;





typedef struct zb_zcl_metering_tou_received_payload_s
{



  zb_uint48_t current_summation_received;

  zb_uint32_t bill_to_date_received;



  zb_uint32_t bill_to_date_time_stamp_received;



  zb_uint32_t projected_bill_received;



  zb_uint32_t projected_bill_time_stamp_received;



  zb_uint8_t bill_received_trailing_digit;



  zb_uint8_t number_of_tiers_in_use;




  zb_uint48_t *tier_summation;
} __attribute__ ((packed)) zb_zcl_metering_tou_received_payload_t;





typedef struct zb_zcl_metering_block_delivered_payload_s
{



  zb_uint48_t current_summation_delivered;

  zb_uint32_t bill_to_date_delivered;



  zb_uint32_t bill_to_date_time_stamp_delivered;



  zb_uint32_t projected_bill_delivered;



  zb_uint32_t projected_bill_time_stamp_delivered;



  zb_uint8_t bill_delivered_trailing_digit;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;



  zb_uint8_t number_of_tiers_and_block_thresholds_in_use;




  zb_uint48_t *tier_block_summation;
} __attribute__ ((packed)) zb_zcl_metering_block_delivered_payload_t;





typedef struct zb_zcl_metering_block_received_payload_s
{



  zb_uint48_t current_summation_received;

  zb_uint32_t bill_to_date_received;



  zb_uint32_t bill_to_date_time_stamp_received;



  zb_uint32_t projected_bill_received;



  zb_uint32_t projected_bill_time_stamp_received;



  zb_uint8_t bill_received_trailing_digit;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;



  zb_uint8_t number_of_tiers_and_block_thresholds_in_use;



  zb_uint48_t *tier_block_summation;
} __attribute__ ((packed)) zb_zcl_metering_block_received_payload_t;





typedef struct zb_zcl_metering_tou_delivered_no_billing_payload_s
{



  zb_uint48_t current_summation_delivered;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;
} __attribute__ ((packed)) zb_zcl_metering_tou_delivered_no_billing_payload_t;





typedef struct zb_zcl_metering_tou_received_no_billing_payload_s
{



  zb_uint48_t current_summation_received;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;
} __attribute__ ((packed)) zb_zcl_metering_tou_received_no_billing_payload_t;





typedef struct zb_zcl_metering_block_tier_delivered_no_billing_payload_s
{



  zb_uint48_t current_summation_delivered;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;



  zb_uint8_t number_of_tiers_and_block_thresholds_in_use;




  zb_uint48_t *tier_block_summation;
} __attribute__ ((packed)) zb_zcl_metering_block_tier_delivered_no_billing_payload_t;





typedef struct zb_zcl_metering_block_tier_received_no_billing_payload_s
{



  zb_uint48_t current_summation_received;

  zb_uint8_t number_of_tiers_in_use;



  zb_uint48_t *tier_summation;



  zb_uint8_t number_of_tiers_and_block_thresholds_in_use;



  zb_uint48_t *tier_block_summation;
} __attribute__ ((packed)) zb_zcl_metering_block_tier_received_no_billing_payload_t;





typedef union zb_zcl_metering_snapshot_sub_payload_s
{


  zb_zcl_metering_tou_delivered_payload_t tou_delivered;


  zb_zcl_metering_tou_received_payload_t tou_received;


  zb_zcl_metering_block_delivered_payload_t block_delivered;


  zb_zcl_metering_block_received_payload_t block_received;


  zb_zcl_metering_tou_delivered_no_billing_payload_t tou_delivered_no_billing;


  zb_zcl_metering_tou_received_no_billing_payload_t tou_received_no_billing;


  zb_zcl_metering_block_tier_delivered_no_billing_payload_t block_tier_delivered_no_billing;


  zb_zcl_metering_block_tier_received_no_billing_payload_t block_tier_received_no_billing;

} __attribute__ ((packed)) zb_zcl_metering_snapshot_sub_payload_t;





typedef struct zb_zcl_metering_publish_snapshot_payload_s
{

  zb_uint32_t snapshot_id;

  zb_uint32_t snapshot_time;



  zb_uint8_t total_snapshots_found;



  zb_uint8_t command_index;



  zb_uint8_t total_number_of_commands;

  zb_uint32_t snapshot_cause;



  zb_uint8_t snapshot_payload_type;


  zb_zcl_metering_snapshot_sub_payload_t snapshot_sub_payload;
} __attribute__ ((packed)) zb_zcl_metering_publish_snapshot_payload_t;
# 1979 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_get_snapshot(zb_uint8_t param, zb_addr_u *dst_addr,
                                                zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                                zb_uint8_t src_ep,
                                                zb_zcl_metering_get_snapshot_payload_t *payload,
                                                zb_callback_t cb);
# 1997 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_get_sampled_data(zb_uint8_t param, zb_addr_u *dst_addr,
                                                    zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                                    zb_uint8_t src_ep,
                                                    zb_zcl_metering_get_sampled_data_payload_t *payload,
                                                    zb_callback_t cb);
# 2015 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_request_fast_poll_mode(zb_uint8_t param, zb_addr_u *dst_addr,
                                                          zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                                          zb_uint8_t src_ep,
                                                          zb_zcl_metering_request_fast_poll_mode_payload_t *payload,
                                                          zb_callback_t cb);
# 2033 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_get_profile(zb_uint8_t param, zb_addr_u *dst_addr,
                                               zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                               zb_uint8_t src_ep, zb_zcl_metering_get_profile_payload_t *payload,
                                               zb_callback_t cb);
# 2050 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_publish_snapshot(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                    enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                    zb_uint8_t src_ep,
                                                    const zb_zcl_metering_publish_snapshot_payload_t *pl,
                                                    zb_callback_t cb);
# 2070 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_request_fast_poll_mode_response(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                                   enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                                   zb_uint8_t src_ep,
                                                                   const zb_zcl_metering_request_fast_poll_mode_response_payload_t *pl,
                                                                   zb_uint8_t pl_size, zb_callback_t cb);
# 2090 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_get_profile_response(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                        enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                        zb_uint8_t src_ep, const zb_zcl_metering_get_profile_response_payload_t *pl,
                                                        zb_uint8_t pl_size, zb_callback_t cb);
# 2109 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_send_cmd_get_sampled_data_response(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                             enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                             zb_uint8_t src_ep,
                                                             const zb_zcl_metering_get_sampled_data_response_payload_t *pl,
                                                             zb_uint8_t pl_size, zb_callback_t cb);
# 2328 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
typedef struct zb_zcl_metering_attrs_s
{




  zb_uint48_t curr_summ_delivered;




  zb_uint8_t status;




  zb_uint8_t unit_of_measure;




  zb_uint8_t summation_formatting;




  zb_uint8_t device_type;
} zb_zcl_metering_attrs_t;
# 2372 "../../../../../../../../external/zboss/include/zcl/zb_zcl_metering.h"
zb_void_t zb_zcl_metering_init_server(void);
zb_void_t zb_zcl_metering_init_client(void);
# 85 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h" 1
# 62 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
zb_void_t zb_zcl_thermostat_init(void);
# 72 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
enum zb_zcl_thermostat_attr_e
{

  ZB_ZCL_ATTR_THERMOSTAT_LOCAL_TEMPERATURE_ID = 0x0000,


  ZB_ZCL_ATTR_THERMOSTAT_OUTDOOR_TEMPERATURE_ID = 0x0001,


  ZB_ZCL_ATTR_THERMOSTAT_OCCUPANCY_ID = 0x0002,


  ZB_ZCL_ATTR_THERMOSTAT_ABS_MIN_HEAT_SETPOINT_LIMIT_ID = 0x0003,


  ZB_ZCL_ATTR_THERMOSTAT_ABS_MAX_HEAT_SETPOINT_LIMIT_ID = 0x0004,


  ZB_ZCL_ATTR_THERMOSTAT_ABS_MIN_COOL_SETPOINT_LIMIT_ID = 0x0005,


  ZB_ZCL_ATTR_THERMOSTAT_ABS_MAX_COOL_SETPOINT_LIMIT_ID = 0x0006,



  ZB_ZCL_ATTR_THERMOSTAT_PI_COOLING_DEMAND_ID = 0x0007,


  ZB_ZCL_ATTR_THERMOSTAT_PI_HEATING_DEMAND_ID = 0x0008,


  ZB_ZCL_ATTR_THERMOSTAT_HVAC_SYSTEM_TYPE_CONFIGURATION_ID = 0x0009,

  ZB_ZCL_ATTR_THERMOSTAT_LOCAL_TEMPERATURE_CALIBRATION_ID = 0x0010,

  ZB_ZCL_ATTR_THERMOSTAT_OCCUPIED_COOLING_SETPOINT_ID = 0x0011,

  ZB_ZCL_ATTR_THERMOSTAT_OCCUPIED_HEATING_SETPOINT_ID = 0x0012,

  ZB_ZCL_ATTR_THERMOSTAT_UNOCCUPIED_COOLING_SETPOINT_ID = 0x0013,

  ZB_ZCL_ATTR_THERMOSTAT_UNOCCUPIED_HEATING_SETPOINT_ID = 0x0014,


  ZB_ZCL_ATTR_THERMOSTAT_MIN_HEAT_SETPOINT_LIMIT_ID = 0x0015,


  ZB_ZCL_ATTR_THERMOSTAT_MAX_HEAT_SETPOINT_LIMIT_ID = 0x0016,


  ZB_ZCL_ATTR_THERMOSTAT_MIN_COOL_SETPOINT_LIMIT_ID = 0x0017,


  ZB_ZCL_ATTR_THERMOSTAT_MAX_COOL_SETPOINT_LIMIT_ID = 0x0018,


  ZB_ZCL_ATTR_THERMOSTAT_MIN_SETPOINT_DEAD_BAND_ID = 0x0019,



  ZB_ZCL_ATTR_THERMOSTAT_REMOTE_SENSING_ID = 0x001a,

  ZB_ZCL_ATTR_THERMOSTAT_CONTROL_SEQUENCE_OF_OPERATION_ID = 0x001b,

  ZB_ZCL_ATTR_THERMOSTAT_SYSTEM_MODE_ID = 0x001c,

  ZB_ZCL_ATTR_THERMOSTAT_ALARM_MASK_ID = 0x001d,

  ZB_ZCL_ATTR_THERMOSTAT_RUNNING_MODE_ID = 0x001e,

  ZB_ZCL_ATTR_THERMOSTAT_START_OF_WEEK_ID = 0x0020,


  ZB_ZCL_ATTR_THERMOSTAT_NUMBER_OF_WEEKLY_TRANSITIONS_ID = 0x0021,


  ZB_ZCL_ATTR_THERMOSTAT_NUMBER_OF_DAILY_TRANSITIONS_ID = 0x0022,

  ZB_ZCL_ATTR_THERMOSTAT_TEMPERATURE_SETPOINT_HOLD_ID = 0x0023,


  ZB_ZCL_ATTR_THERMOSTAT_TEMPERATURE_SETPOINT_HOLD_DURATION_ID = 0x0024,


  ZB_ZCL_ATTR_THERMOSTAT_THERMOSTAT_PROGRAMMING_OPERATION_MODE_ID = 0x0025,


  ZB_ZCL_ATTR_THERMOSTAT_THERMOSTAT_RUNNING_STATE_ID = 0x0029,



  ZB_ZCL_ATTR_THERMOSTAT_SETPOINT_CHANGE_SOURCE_ID = 0x0030,



  ZB_ZCL_ATTR_THERMOSTAT_SETPOINT_CHANGE_AMOUNT_ID = 0x0031,


  ZB_ZCL_ATTR_THERMOSTAT_SETPOINT_CHANGE_SOURCE_TIMESTAMP_ID = 0x0032,





  ZB_ZCL_ATTR_THERMOSTAT_OCCUPIED_SETBACK_ID = 0x0034,



  ZB_ZCL_ATTR_THERMOSTAT_OCCUPIED_SETBACK_MIN_ID = 0x0035,



  ZB_ZCL_ATTR_THERMOSTAT_OCCUPIED_SETBACK_MAX_ID = 0x0036,






  ZB_ZCL_ATTR_THERMOSTAT_UNOCCUPIED_SETBACK_ID = 0x0037,


  ZB_ZCL_ATTR_THERMOSTAT_UNOCCUPIED_SETBACK_MIN_ID = 0x0038,


  ZB_ZCL_ATTR_THERMOSTAT_UNOCCUPIED_SETBACK_MAX_ID = 0x0039,



  ZB_ZCL_ATTR_THERMOSTAT_EMERGENCY_HEAT_DELTA_ID = 0x003a,


  ZB_ZCL_ATTR_THERMOSTAT_AC_TYPE_ID = 0x0040,


  ZB_ZCL_ATTR_THERMOSTAT_AC_CAPACITY_ID = 0x0041,

  ZB_ZCL_ATTR_THERMOSTAT_AC_REFRIGERANT_TYPE_ID = 0x0042,

  ZB_ZCL_ATTR_THERMOSTAT_AC_COMPRESSOR_TYPE_ID = 0x0043,

  ZB_ZCL_ATTR_THERMOSTAT_AC_ERROR_CODE_ID = 0x0044,

  ZB_ZCL_ATTR_THERMOSTAT_AC_LOUVER_POSITION_ID = 0x0045,


  ZB_ZCL_ATTR_THERMOSTAT_AC_COIL_TEMPERATURE_ID = 0x0046,

  ZB_ZCL_ATTR_THERMOSTAT_AC_CAPACITY_FORMAT_ID = 0x0047,
};



enum zb_zcl_thermostat_control_sequence_of_operation_e
{

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_COOLING_ONLY = 0x00,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_COOLING_WITH_REHEAT = 0x01,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_HEATING_ONLY = 0x02,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_HEATING_WITH_REHEAT = 0x03,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_COOLING_AND_HEATING_4_PIPES = 0x04,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_COOLING_AND_HEATING_4_PIPES_WITH_REHEAT = 0x05,

  ZB_ZCL_THERMOSTAT_CONTROL_SEQ_OF_OPERATION_RESERVED = 0x06
};



enum zb_zcl_thermostat_system_mode_e
{

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_OFF = 0x00,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_AUTO = 0x01,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_COOL = 0x03,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_HEAT = 0x04,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_EMERGENCY_HEATING = 0x05,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_PRECOOLING = 0x06,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_FAN_ONLY = 0x07,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_DRY = 0x08,

  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_SLEEP = 0x09,


  ZB_ZCL_THERMOSTAT_SYSTEM_MODE_RESERVED = 0x0a
};



enum zb_zcl_thermostat_ac_louver_position_e
{
  ZB_ZCL_THERMOSTAT_LOUVER_FULLY_CLOSED = 0x01,
  ZB_ZCL_THERMOSTAT_LOUVER_FULLY_OPENED = 0x02,
  ZB_ZCL_THERMOSTAT_LOUVER_QUARTER_OPEN = 0x03,
  ZB_ZCL_THERMOSTAT_LOUVER_HALF_OPEN = 0x04,
  ZB_ZCL_THERMOSTAT_LOUVER_THREE_QUARTERS_OPEN = 0x05,
};



enum zb_zcl_thermostat_start_of_week_e
{

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_SUNDAY = 0x00,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_MONDAY = 0x01,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_TUESDAY = 0x02,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_WEDNESDAY = 0x03,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_THURSDAY = 0x04,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_FRIDAY = 0x05,

  ZB_ZCL_THERMOSTAT_START_OF_WEEK_SATURDAY = 0x06,
};
# 565 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
enum zb_zcl_thermostat_cmd_e
{

  ZB_ZCL_CMD_THERMOSTAT_SETPOINT_RAISE_LOWER = 0x00,

  ZB_ZCL_CMD_THERMOSTAT_SET_WEEKLY_SCHEDULE = 0x01,

  ZB_ZCL_CMD_THERMOSTAT_GET_WEEKLY_SCHEDULE = 0x02,

  ZB_ZCL_CMD_THERMOSTAT_CLEAR_WEEKLY_SCHEDULE = 0x03,

  ZB_ZCL_CMD_THERMOSTAT_GET_RELAY_STATUS_LOG = 0x04
};




enum zb_zcl_thermostat_cmd_resp_ha_e
{

  ZB_ZCL_CMD_THERMOSTAT_GET_WEEKLY_SCHEDULE_RESP = 0x00,

  ZB_ZCL_CMD_THERMOSTAT_GET_RELAY_STATUS_LOG_RESP = 0x01
};
# 804 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_setpoint_raise_lower_req_s
{
  zb_uint8_t mode;
  zb_int8_t amount;
} __attribute__ ((packed)) zb_zcl_thermostat_setpoint_raise_lower_req_t;



enum zb_zcl_thermostat_setpoint_raise_lower_mode_e
{

  ZB_ZCL_THERMOSTAT_SETPOINT_RAISE_LOWER_MODE_HEAT = 0x00,

  ZB_ZCL_THERMOSTAT_SETPOINT_RAISE_LOWER_MODE_COOL = 0x01,

  ZB_ZCL_THERMOSTAT_SETPOINT_RAISE_LOWER_MODE_BOTH = 0x02,

  ZB_ZCL_THERMOSTAT_SETPOINT_RAISE_LOWER_MODE_RESERVED = 0x03
};
# 881 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_weekly_schedule_point_pair_s
{
  zb_uint16_t transition_time;
  zb_uint16_t heat_set_point;
  zb_uint16_t cool_set_point;
} __attribute__ ((packed)) zb_zcl_thermostat_weekly_schedule_point_pair_t;
# 898 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
enum zb_zcl_thermostat_weekly_schedule_mode_for_seq_e
{

  ZB_ZCL_THERMOSTAT_WEEKLY_SCHEDULE_MODE_FOR_SEQ_HEAT = 0x01,

  ZB_ZCL_THERMOSTAT_WEEKLY_SCHEDULE_MODE_FOR_SEQ_COOL = 0x02,

  ZB_ZCL_THERMOSTAT_WEEKLY_SCHEDULE_MODE_FOR_SEQ_BOTH = 0x03,

  ZB_ZCL_THERMOSTAT_WEEKLY_SCHEDULE_MODE_FOR_SEQ_RESERVED = 0x04
};
# 977 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_set_weekly_schedule_req_s
{
  zb_uint8_t num_of_transitions;
  zb_uint8_t day_of_week;
  zb_uint8_t mode_for_seq;
} __attribute__ ((packed)) zb_zcl_thermostat_set_weekly_schedule_req_t;
# 1077 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_get_weekly_schedule_req_s
{
  zb_uint8_t days_to_return;
  zb_uint8_t mode_to_return;
} __attribute__ ((packed)) zb_zcl_thermostat_get_weekly_schedule_req_t;
# 1142 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_get_weekly_schedule_resp_s
{
  zb_uint8_t num_of_transitions;
  zb_uint8_t day_of_week;
  zb_uint8_t mode_for_seq;
} __attribute__ ((packed)) zb_zcl_thermostat_get_weekly_schedule_resp_t;
# 1262 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_get_relay_status_log_resp_s
{
  zb_uint16_t time_of_day;
  zb_uint8_t relay_status;
  zb_int16_t local_temperature;
  zb_uint8_t humidity_in_percentage;
  zb_int16_t set_point;
  zb_uint16_t unread_entries;
} __attribute__ ((packed)) zb_zcl_thermostat_get_relay_status_log_resp_t;
# 1395 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_weekly_schedule_record_s
{
  zb_uint8_t days;
  zb_uint32_t start_time;
  zb_uint8_t mode;
  zb_uint16_t heat_setpoint;
  zb_uint16_t cool_setpoint;
}
zb_zcl_thermostat_weekly_schedule_record_t;
# 1412 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat.h"
typedef struct zb_zcl_thermostat_context_s
{
  zb_zcl_thermostat_weekly_schedule_record_t schedule_table[20];
  zb_uint8_t setpoint_mode;
}
zb_zcl_thermostat_context_t;



typedef struct zb_zcl_thermostat_value_param_s
{
  zb_uint8_t mode;
  zb_uint16_t heat_setpoint;
  zb_uint16_t cool_setpoint;
} zb_zcl_thermostat_value_param_t;




zb_void_t zb_zcl_thermostat_init(void);
zb_uint8_t zb_zcl_thermostat_get_current_day_of_week(zb_uint8_t start_of_week);

zb_void_t zb_zcl_thermostat_init_server(void);
zb_void_t zb_zcl_thermostat_init_client(void);
# 86 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat_ui_config.h" 1
# 62 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat_ui_config.h"
enum zb_zcl_thermostat_ui_config_attr_e
{

  ZB_ZCL_ATTR_THERMOSTAT_UI_CONFIG_TEMPERATURE_DISPLAY_MODE_ID = 0x0000,

  ZB_ZCL_ATTR_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_ID = 0x0001,



  ZB_ZCL_ATTR_THERMOSTAT_UI_CONFIG_SCHEDULE_PROGRAMMING_VISIBILITY_ID = 0x0002,
};



enum zb_zcl_thermostat_ui_config_temperature_display_mode_e
{

  ZB_ZCL_THERMOSTAT_UI_CONFIG_TEMPERATURE_DISPLAY_MODE_IN_C = 0x00,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_TEMPERATURE_DISPLAY_MODE_IN_F = 0x01,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_TEMPERATURE_DISPLAY_MODE_RESERVED = 0x02
};



enum zb_zcl_thermostat_ui_config_keypad_lockout_e
{

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_NO_LOCKOUT = 0x00,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_LEVEL_1 = 0x01,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_LEVEL_2 = 0x02,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_LEVEL_3 = 0x03,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_LEVEL_4 = 0x04,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_LEVEL_5 = 0x05,

  ZB_ZCL_THERMOSTAT_UI_CONFIG_KEYPAD_LOCKOUT_RESERVED = 0x06
};
# 166 "../../../../../../../../external/zboss/include/zcl/zb_zcl_thermostat_ui_config.h"
zb_void_t zb_zcl_thermostat_ui_config_init_server(void);
zb_void_t zb_zcl_thermostat_ui_config_init_client(void);
# 87 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_occupancy_sensing.h" 1
# 64 "../../../../../../../../external/zboss/include/zcl/zb_zcl_occupancy_sensing.h"
enum zb_zcl_occupancy_sensing_attr_e
{

  ZB_ZCL_ATTR_OCCUPANCY_SENSING_OCCUPANCY_ID = 0x0000,

  ZB_ZCL_ATTR_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_ID = 0x0001,


  ZB_ZCL_ATTR_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_BITMAP_ID = 0x0002,

  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PIR_OCC_TO_UNOCC_DELAY_ID = 0x0010,

  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PIR_UNOCC_TO_OCC_DELAY_ID = 0x0011,

  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PIR_UNOCC_TO_OCC_THRESHOLD_ID = 0x0012,



  ZB_ZCL_ATTR_OCCUPANCY_SENSING_ULTRASONIC_OCCUPIED_TO_UNOCCUPIED_DELAY_ID = 0x0020,



  ZB_ZCL_ATTR_OCCUPANCY_SENSING_ULTRASONIC_UNOCCUPIED_TO_OCCUPIED_DELAY_ID = 0x0021,




  ZB_ZCL_ATTR_OCCUPANCY_SENSING_ULTRASONIC_UNOCCUPIED_TO_OCCUPIED_THRESHOLD_ID = 0x0022,



  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PHYSICAL_CONTACT_OCCUPIED_TO_UNOCCUPIED_DELAY_ID = 0x0030,



  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PHYSICAL_CONTACT_UNOCCUPIED_TO_OCCUPIED_DELAY_ID = 0x0031,




  ZB_ZCL_ATTR_OCCUPANCY_SENSING_PHYSICAL_CONTACT_UNOCCUPIED_TO_OCCUPIED_THRESHOLD_ID = 0x0032,


  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_REPORTING_MODE_ID = 0x8001,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_DEBUG_MODE_ID = 0x8002,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_SENSING_INTERVAL_ID = 0x8003,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_MAX_NBR_CONFIRM_PINGS_ID = 0x8004,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_CONFIRM_PING_DELAY_ID = 0x8005,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_NBR_CONFIRM_PINGS_TO_VALID_ID = 0x8006,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_LOCAL_TEMPERATURE_OVERRIDE_ID = 0x8007,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_REMOTE_TEMPERATURE_VALUE_ID = 0x8008,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_HUMIDITY_COMPENSATION_ID = 0x800A,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_TRANDUCER_SENSITIVITY_CALIBRATION_SOURCE_ID = 0x800B,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_TRANDUCER_SENSITIVITY_CALIBRATION_OVERRIDE_VALUE_ID = 0x800C,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_SENSOR_TIME_VS_GAIN_LUT_ID = 0x800D,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_LEARN_ID = 0x800E,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_RINGDOWN_DISTANCE_ID = 0x800F,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_REFERENCE_FLOOR_DISTANCE_ID = 0x8010,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_DETECTION_ALGORITHM_SELECTOR_ID = 0x8011,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_FLOOR_DEADBAND_ID = 0x8012,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_MAIN_OBJECT_DEADBAND_ID = 0x8013,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_DETECTION_THRESHOLD_ID = 0x8014,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_FORCE_REPORT_ID = 0x801C,


  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_LOCAL_TEMPERATURE_VALUE_ID = 0x8009,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_CONFIDENCE_ID = 0x8015,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_ECHO_RETURN_ARRAY_ID = 0x8017,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_RX_SAMPLES_ARRAY_1_ID = 0x8018,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_RX_SAMPLES_ARRAY_2_ID = 0x8019,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_RX_SAMPLES_ARRAY_3_ID = 0x801A,
  ZB_ZCL_ATTR_OCCUPANCY_SENSING_CUSTOM_RX_SAMPLES_ARRAY_4_ID = 0x801B


};
# 170 "../../../../../../../../external/zboss/include/zcl/zb_zcl_occupancy_sensing.h"
enum zb_zcl_occupancy_sensing_occupancy_e
{

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_UNOCCUPIED = 0,

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_OCCUPIED = 1
};
# 190 "../../../../../../../../external/zboss/include/zcl/zb_zcl_occupancy_sensing.h"
enum zb_zcl_occupancy_sensing_occupancy_sensor_type_e
{

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_PIR = 0,

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_ULTRASONIC = 1,

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_PIR_AND_ULTRASONIC = 2,

  ZB_ZCL_OCCUPANCY_SENSING_OCCUPANCY_SENSOR_TYPE_RESERVED = 3
};


enum zb_zcl_custom_reporting_mode_type_e
{
  ZB_ZCL_CUSTOM_OCCUPANCY_SENSING_REPORING_MODE_TYPE_REGULAR_REPORTING = 0,
  ZB_ZCL_CUSTOM_OCCUPANCY_SENSING_REPORING_MODE_TYPE_LOW_POWER_REPORTING = 1
};


enum zb_zcl_custom_debug_mode_type_e
{
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_DEBUG_MODE_TYPE_SHORT = 0,
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_DEBUG_MODE_TYPE_ENHANCED = 1,
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_DEBUG_MODE_TYPE_DEBUG = 2
};

enum zb_zcl_custom_learn_type_e
{
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_LEARN_NOT_YET_PERFORMED = 0,
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_LEARN_IN_PROGRESS = 1,
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_LEARN_FINISHED_WITH_A_FAILURE = 2,
  ZB_ZCL_OCCUPANCY_SENSING_CUSTOM_LEARN_FINISHED_SUCCSESSFULLY = 3
};
# 88 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_meter_identification.h" 1
# 62 "../../../../../../../../external/zboss/include/zcl/zb_zcl_meter_identification.h"
enum zb_zcl_meter_identification_attr_e
{

  ZB_ZCl_ATTR_METER_IDENTIFICATION_COMPANY_NAME = 0x0000,






  ZB_ZCl_ATTR_METER_IDENTIFICATION_METER_TYPE_ID = 0x0001,



  ZB_ZCl_ATTR_METER_IDENTIFICATION_DATA_QUALITY_ID = 0x0004,



  ZB_ZCl_ATTR_METER_IDENTIFICATION_CUSTOMER_NAME = 0x0005,




  ZB_ZCl_ATTR_METER_IDENTIFICATION_MODEL = 0x0006,





  ZB_ZCl_ATTR_METER_IDENTIFICATION_PART_NUMBER = 0x0007,





  ZB_ZCl_ATTR_METER_IDENTIFICATION_PRODUCT_REVISION = 0x0008,






  ZB_ZCl_ATTR_METER_IDENTIFICATION_SOFTWARE_REVISION = 0x000A,





  ZB_ZCl_ATTR_METER_IDENTIFICATION_UTILITY_NAME = 0x000B,




  ZB_ZCl_ATTR_METER_IDENTIFICATION_POD = 0x000C,






  ZB_ZCl_ATTR_METER_IDENTIFICATION_AVAILABLE_POWER = 0x000D,
# 131 "../../../../../../../../external/zboss/include/zcl/zb_zcl_meter_identification.h"
  ZB_ZCl_ATTR_METER_IDENTIFICATION_POWER_THRESHOLD = 0x000E



};





typedef enum zb_zcl_meter_identification_meter_type_e
{
  ZB_ZCL_METER_TYPE_UTILITY_PRIMARY = 0x0000,
  ZB_ZCL_METER_TYPE_UTILITY_PRODUCTION = 0x0001,
  ZB_ZCL_METER_TYPE_UTILITY_SECONDARY = 0x0002,
  ZB_ZCL_METER_TYPE_PRIVATE_PRIMARY = 0x0100,
  ZB_ZCL_METER_TYPE_PRIVATE_PRODUCTION = 0x0101,
  ZB_ZCL_METER_TYPE_PRIVATE_SECONDARY = 0x0102,
  ZB_ZCL_METER_TYPE_GENERIC = 0x0110
} zb_zcl_meter_identification_meter_type_t;





typedef enum zb_zcl_meter_identification_data_quality_e
{
  ZB_ZCL_DATA_QUALITY_ALL_DATA_CERTIFIED = 0x0000,
  ZB_ZCL_DATA_QUALITY_ONLY_INSTANTANEOUS_POWER_NOT_CERTIFIED = 0x0001,
  ZB_ZCL_DATA_QUALITY_ONLY_CUMULATED_CONSUMPTION_NOT_CERTIFIED = 0x0002,
  ZB_ZCL_DATA_QUALITY_NOT_CERTIFIED_DATA = 0x0003
} zb_zcl_meter_identification_data_quality_t;
# 285 "../../../../../../../../external/zboss/include/zcl/zb_zcl_meter_identification.h"
zb_void_t zb_zcl_meter_identification_init_server(void);
zb_void_t zb_zcl_meter_identification_init_client(void);
# 89 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h" 1
# 67 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_void_t zb_zcl_poll_control_write_attr_hook(zb_uint8_t endpoint, zb_uint16_t attr_id, zb_uint8_t *new_value);







zb_void_t zb_zcl_poll_control_start(zb_uint8_t param, zb_uint8_t endpoint);
# 85 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_uint8_t zb_zcl_poll_control_stop(void);





zb_void_t zb_zcl_poll_control_start_check_in(zb_uint8_t param);
# 100 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_void_t zb_zcl_poll_controll_register_cb(zb_callback_t cb);
# 114 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
enum zb_zcl_poll_control_attr_e
{

  ZB_ZCL_ATTR_POLL_CONTROL_CHECKIN_INTERVAL_ID = 0x0000,

  ZB_ZCL_ATTR_POLL_CONTROL_LONG_POLL_INTERVAL_ID = 0x0001,

  ZB_ZCL_ATTR_POLL_CONTROL_SHORT_POLL_INTERVAL_ID = 0x0002,

  ZB_ZCL_ATTR_POLL_CONTROL_FAST_POLL_TIMEOUT_ID = 0x0003,

  ZB_ZCL_ATTR_POLL_CONTROL_CHECKIN_INTERVAL_MIN_ID = 0x0004,

  ZB_ZCL_ATTR_POLL_CONTROL_LONG_POLL_INTERVAL_MIN_ID = 0x0005,

  ZB_ZCL_ATTR_POLL_CONTROL_FAST_POLL_TIMEOUT_MAX_ID = 0x0006,


  ZB_ZCL_ATTR_POLL_CONTROL_STATUS_DATA_ID = 0xefff,

  ZB_ZCL_ATTR_POLL_CONTROL_ADDR_DATA_ID = 0xeffe,
};
# 263 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
typedef struct zb_zcl_poll_control_client_status_s
{

  zb_bool_t is_poll_mode;

  zb_uint16_t fast_poll_timeout;

} __attribute__ ((packed)) zb_zcl_poll_control_client_status_t;






typedef struct zb_zcl_poll_control_srv_cfg_data_s
{

  zb_uint16_t poll_addr;

  zb_uint8_t poll_ep;

  zb_bitfield_t sending_cmd:4;

  zb_bitfield_t fast_poll_mode:1;
}
zb_zcl_poll_control_srv_cfg_data_t;
# 345 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
enum zb_zcl_poll_control_cmd_e
{
  ZB_ZCL_CMD_POLL_CONTROL_CHECK_IN_ID = 0x00
};




enum zb_zcl_poll_control_resp_cmd_e
{
  ZB_ZCL_CMD_POLL_CONTROL_CHECK_IN_RESPONSE_ID = 0x00,
  ZB_ZCL_CMD_POLL_CONTROL_FAST_POLL_STOP_ID = 0x01,
  ZB_ZCL_CMD_POLL_CONTROL_SET_LONG_POLL_INTERVAL_ID = 0x02,
  ZB_ZCL_CMD_POLL_CONTROL_SET_SHORT_POLL_INTERVAL_ID = 0x03,
};
# 402 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
typedef struct zb_zcl_poll_control_check_in_cli_param_s
{
  zb_uint16_t fast_poll_timeout;
  zb_uint16_t short_addr;
  zb_uint8_t ep;
}
zb_zcl_poll_control_check_in_cli_param_t;
# 441 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
typedef struct zb_zcl_poll_control_check_in_res_s
{

  zb_uint8_t is_start;

  zb_uint16_t timeout;
} __attribute__ ((packed)) zb_zcl_poll_control_check_in_res_t;
# 528 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
typedef struct zb_zcl_poll_control_set_long_poll_interval_req_s
{

  zb_uint32_t interval;
} __attribute__ ((packed)) zb_zcl_poll_control_set_long_poll_interval_t;
# 585 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
typedef struct zb_zcl_poll_control_set_short_poll_interval_req_s
{

  zb_uint16_t interval;
} __attribute__ ((packed)) zb_zcl_poll_control_set_short_poll_interval_t;
# 650 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_void_t zb_zcl_poll_control_set_client_addr(zb_uint8_t local_ep, zb_uint16_t addr, zb_uint8_t ep);






zb_void_t zb_zcl_poll_control_stop_fast_poll(zb_uint8_t endpoint);
# 666 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_void_t zb_zcl_set_fast_poll_timeout(zb_uint8_t ep, zb_uint16_t fast_poll_timeout);







zb_void_t zb_zcl_poll_control_save_nvram(zb_uint8_t param);
# 683 "../../../../../../../../external/zboss/include/zcl/zb_zcl_poll_control.h"
zb_uint8_t zb_zcl_get_cmd_list_poll_control(zb_bool_t is_client_generated, zb_uint8_t **cmd_list);





zb_void_t zb_zcl_poll_control_init_server(void);
zb_void_t zb_zcl_poll_control_init_client(void);
# 91 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h" 1
# 73 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_file_header_s
{
  zb_uint32_t file_id;
  zb_uint16_t header_version;
  zb_uint16_t header_length;
  zb_uint16_t fc;
  zb_uint16_t manufacturer_code;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint16_t stack_version;
  zb_char_t header_string[32];
  zb_uint32_t total_image_size;
# 94 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
} __attribute__ ((packed)) zb_zcl_ota_upgrade_file_header_t;





typedef struct zb_zcl_ota_upgrade_file_header_optional_s
{
  zb_uint8_t credential_version;


  zb_uint16_t min_hw_version;
  zb_uint16_t max_hw_version;
} __attribute__ ((packed)) zb_zcl_ota_upgrade_file_header_optional_t;
# 124 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
enum zb_zcl_ota_upgrade_file_header_fc_e
{

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_FC_CREDENTIAL_VER = 1 << 0,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_FC_DEVICE_SPECIFIC = 1 << 1,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_FC_HW_VER = 1 << 2,
};







enum zb_zcl_ota_upgrade_file_header_image_type_e
{

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_IMAGE_MANUF_SPEC_MAX = 0xffbf,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_IMAGE_SECURITY_CRED = 0xffc0,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_IMAGE_CONFIG = 0xffc1,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_IMAGE_LOG = 0xffc2,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_IMAGE_WILD_CARD = 0xffff,
};
# 186 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
enum zb_zcl_ota_upgrade_file_header_stack_version_e
{

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_STACK_2006 = 0x0000,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_STACK_2007 = 0x0001,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_STACK_PRO = 0x0002,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_STACK_IP = 0x0003,
};




enum zb_zcl_ota_upgrade_file_header_security_version_e
{

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_SECURITY_VER_SE1_0 = 0x00,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_SECURITY_VER_SE1_1 = 0x01,

  ZB_ZCL_OTA_UPGRADE_FILE_HEADER_SECURITY_VER_SE2_0 = 0x02,
};
# 236 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_sub_element_s
{
  zb_uint16_t tag_id;
  zb_uint32_t length;
  zb_uint8_t value[1];

} __attribute__ ((packed)) zb_zcl_ota_upgrade_sub_element_t;





enum zb_zcl_ota_upgrade_sub_element_tags_e
{

  ZB_ZCL_OTA_UPGRADE_FILE_TAG_UPGRADE_IMAGE = 0x0000,

  ZB_ZCL_OTA_UPGRADE_FILE_TAG_ECDSA = 0x0001,

  ZB_ZCL_OTA_UPGRADE_FILE_TAG_ECDSA_CERT = 0x0002,

  ZB_ZCL_OTA_UPGRADE_FILE_TAG_MANUF_MIN = 0xf000,

  ZB_ZCL_OTA_UPGRADE_FILE_TAG_MANUF_MAX = 0xffff,
};



typedef struct zb_zcl_ota_upgrade_ecdsa_s
{
  zb_uint16_t tag_id;
  zb_uint32_t length;
  zb_ieee_addr_t address;
  zb_uint8_t value[42];

} __attribute__ ((packed)) zb_zcl_ota_upgrade_ecdsa_t;
# 282 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_ecdsa_signing_s
{
  zb_uint16_t tag_id;
  zb_uint32_t length;
  zb_uint8_t certificate[48];

} __attribute__ ((packed)) zb_zcl_ota_upgrade_ecdsa_signing_t;
# 299 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_ecdsa_certificate_s
{
  zb_uint16_t tag_id;
  zb_uint32_t length;
  zb_uint8_t hash[16];

} __attribute__ ((packed)) zb_zcl_ota_upgrade_ecdsa_ertificate_t;
# 329 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef zb_uint8_t* (*zb_zcl_ota_upgrade_next_data_ind_t)(zb_uint8_t index, zb_uint32_t offset, zb_uint8_t size);
# 339 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
zb_void_t zb_zcl_ota_upgrade_init_server(zb_uint8_t endpoint, zb_zcl_ota_upgrade_next_data_ind_t next_data_ind_cb);


typedef struct zb_zcl_ota_upgrade_server_insert_file_s
{
  zb_uint8_t endpoint;
  zb_uint8_t index;
  zb_uint8_t *ota_file;

  zb_uint32_t upgrade_time;

} zb_zcl_ota_upgrade_server_insert_file_t;







zb_ret_t zb_zcl_ota_upgrade_insert_file(zb_uint8_t param);
# 374 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_server_remove_file_s
{
  zb_uint8_t endpoint;
  zb_uint8_t index;

} zb_zcl_ota_upgrade_server_remove_file_t;







zb_ret_t zb_zcl_ota_upgrade_remove_file(zb_uint8_t param);
# 400 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_data_s
{
  zb_zcl_ota_upgrade_file_header_t *file_header;
  zb_uint32_t upgrade_time;

} zb_zcl_ota_upgrade_data_t;


typedef struct zb_zcl_ota_upgrade_server_variable_s
{
  zb_uint8_t *query_jitter;


  zb_uint32_t *current_time;



  zb_uint8_t table_length;
  zb_zcl_ota_upgrade_data_t *table;

} zb_zcl_ota_upgrade_server_variable_t;
# 438 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_srv_query_img_param_s
{
  zb_zcl_addr_t *zcl_addr;
  zb_uint16_t image_type;
  zb_uint16_t manufacturer_code;
  zb_uint32_t version;
  zb_uint8_t *table_idx;
}
  __attribute__ ((packed)) zb_zcl_ota_upgrade_srv_query_img_param_t;

typedef struct zb_zcl_ota_upgrade_srv_upgrade_end_param_s
{
  zb_zcl_addr_t *zcl_addr;
  zb_uint16_t image_type;
  zb_uint32_t version;
}
  __attribute__ ((packed)) zb_zcl_ota_upgrade_srv_upgrade_end_param_t;
# 465 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
zb_void_t zb_zcl_ota_upgrade_init_client(zb_uint8_t param);



zb_void_t zb_zcl_ota_upgrade_stop_client(void);






zb_void_t zb_zcl_ota_upgrade_resume_client(zb_uint8_t param, zb_uint8_t upgrade_status);





zb_void_t zb_zcl_ota_upgrade_set_query_interval(zb_uint8_t endpoint, zb_uint16_t interval);







zb_void_t zb_zcl_ota_upgrade_file_upgraded(zb_uint8_t endpoint);


typedef struct zb_zcl_ota_upgrade_client_variable_s
{

  zb_uint32_t download_file_size;
  zb_uint16_t timer_query;
  zb_uint16_t timer_counter;
  zb_uint16_t hw_version;
  zb_uint8_t max_data_size;
  zb_uint8_t img_block_req_sent;
  zb_uint8_t pending_img_block_resp;
} zb_zcl_ota_upgrade_client_variable_t;






enum zb_zcl_ota_upgrade_attr_e
{

  ZB_ZCL_ATTR_OTA_UPGRADE_SERVER_ID = 0x0000,

  ZB_ZCL_ATTR_OTA_UPGRADE_FILE_OFFSET_ID = 0x0001,

  ZB_ZCL_ATTR_OTA_UPGRADE_FILE_VERSION_ID = 0x0002,

  ZB_ZCL_ATTR_OTA_UPGRADE_STACK_VERSION_ID = 0x0003,

  ZB_ZCL_ATTR_OTA_UPGRADE_DOWNLOADED_FILE_VERSION_ID = 0x0004,

  ZB_ZCL_ATTR_OTA_UPGRADE_DOWNLOADED_STACK_VERSION_ID = 0x0005,

  ZB_ZCL_ATTR_OTA_UPGRADE_IMAGE_STATUS_ID = 0x0006,

  ZB_ZCL_ATTR_OTA_UPGRADE_MANUFACTURE_ID = 0x0007,

  ZB_ZCL_ATTR_OTA_UPGRADE_IMAGE_TYPE_ID = 0x0008,

  ZB_ZCL_ATTR_OTA_UPGRADE_MIN_BLOCK_REQUE_ID = 0x0009,

  ZB_ZCL_ATTR_OTA_UPGRADE_IMAGE_STAMP_ID = 0x000a,


  ZB_ZCL_ATTR_OTA_UPGRADE_UPGRADE_ACTIVATION_POLICY_ID = 0x000b,


  ZB_ZCL_ATTR_OTA_UPGRADE_UPGRADE_TIMEOUT_POLICY_ID = 0x000c,



  ZB_ZCL_ATTR_OTA_UPGRADE_SERVER_ENDPOINT_ID = 0xfff3,

  ZB_ZCL_ATTR_OTA_UPGRADE_SERVER_ADDR_ID = 0xfff2,

  ZB_ZCL_ATTR_OTA_UPGRADE_CLIENT_DATA_ID = 0xfff1,


  ZB_ZCL_ATTR_OTA_UPGRADE_SERVER_DATA_ID = 0xfff0,
};
# 573 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
enum zb_zcl_ota_upgrade_image_status_e
{

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_NORMAL = 0x00,

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_DOWNLOADING = 0x01,

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_DOWNLOADED = 0x02,

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_WAITING_UPGRADE = 0x03,

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_COUNT_DOWN = 0x04,

  ZB_ZCL_OTA_UPGRADE_IMAGE_STATUS_WAIT_FOR_MORE = 0x05,
};
# 803 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
enum zb_zcl_ota_upgrade_cmd_e
{
  ZB_ZCL_CMD_OTA_UPGRADE_QUERY_NEXT_IMAGE_ID = 0x01,
  ZB_ZCL_CMD_OTA_UPGRADE_IMAGE_BLOCK_ID = 0x03,
  ZB_ZCL_CMD_OTA_UPGRADE_IMAGE_PAGE_ID = 0x04,
  ZB_ZCL_CMD_OTA_UPGRADE_UPGRADE_END_ID = 0x06,
  ZB_ZCL_CMD_OTA_UPGRADE_QUERY_SPECIFIC_FILE_ID = 0x08,
};




enum zb_zcl_ota_upgrade_resp_cmd_e
{
  ZB_ZCL_CMD_OTA_UPGRADE_IMAGE_NOTIFY_ID = 0x00,
  ZB_ZCL_CMD_OTA_UPGRADE_QUERY_NEXT_IMAGE_RESP_ID = 0x02,
  ZB_ZCL_CMD_OTA_UPGRADE_IMAGE_BLOCK_RESP_ID = 0x05,
  ZB_ZCL_CMD_OTA_UPGRADE_UPGRADE_END_RESP_ID = 0x07,
  ZB_ZCL_CMD_OTA_UPGRADE_QUERY_SPECIFIC_FILE_RESP_ID = 0x09,
};
# 855 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
  typedef struct zb_zcl_ota_upgrade_query_next_image_s
{
  zb_uint8_t fc;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint16_t hw_version;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_query_next_image_t;




enum zb_zcl_ota_upgrade_query_next_image_fc_e
{

  ZB_ZCL_OTA_UPGRADE_QUERY_NEXT_IMAGE_HW_VERSION = 1 << 0,
};
# 955 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_image_block_s
{
  zb_uint8_t fc;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint32_t file_offset;
  zb_uint8_t data_size_max;

  zb_ieee_addr_t node_addr;
  zb_uint16_t block_delay;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_image_block_t;




enum zb_zcl_ota_upgrade_image_block_fc_e
{

  ZB_ZCL_OTA_UPGRADE_QUERY_IMAGE_BLOCK_IEEE_PRESENT = 1 << 0,

  ZB_ZCL_OTA_UPGRADE_QUERY_IMAGE_BLOCK_DELAY_PRESENT = 1 << 1,
};
# 1070 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_image_page_s
{
  zb_uint8_t fc;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint32_t file_offset;
  zb_uint8_t data_size_max;
  zb_uint16_t page_size;
  zb_uint16_t response_spacing;

  zb_ieee_addr_t node_addr;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_image_page_t;




enum zb_zcl_ota_upgrade_image_page_fc_e
{

  ZB_ZCL_OTA_UPGRADE_QUERY_IMAGE_PAGE_IEEE_PRESENT = 1 << 0,
};
# 1176 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
  typedef struct zb_zcl_ota_upgrade_upgrade_end_s
{
  zb_uint8_t status;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_upgrade_end_t;
# 1249 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
  typedef struct zb_zcl_ota_upgrade_query_specific_file_s
{
  zb_ieee_addr_t node_addr;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint16_t stack_version;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_query_specific_file_t;
# 1323 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_image_notify_s
{
  zb_uint8_t payload_type;
  zb_uint8_t query_jitter;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_image_notify_t;




enum zb_zcl_ota_upgrade_image_notify_payload_type_e
{

  ZB_ZCL_OTA_UPGRADE_IMAGE_NOTIFY_PAYLOAD_JITTER = 0x00,

  ZB_ZCL_OTA_UPGRADE_IMAGE_NOTIFY_PAYLOAD_JITTER_CODE = 0x01,

  ZB_ZCL_OTA_UPGRADE_IMAGE_NOTIFY_PAYLOAD_JITTER_CODE_IMAGE = 0x02,

  ZB_ZCL_OTA_UPGRADE_IMAGE_NOTIFY_PAYLOAD_JITTER_CODE_IMAGE_VER = 0x03,
};
# 1421 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
  typedef struct zb_zcl_ota_upgrade_query_next_image_res_s
{
  zb_uint8_t status;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint32_t image_size;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_query_next_image_res_t;
# 1503 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_image_block_res_s
{

  zb_uint8_t status;
  union
  {
    struct
    {
      zb_uint16_t manufacturer;
      zb_uint16_t image_type;
      zb_uint32_t file_version;
      zb_uint32_t file_offset;
      zb_uint8_t data_size;
      zb_uint8_t *image_data;

    } __attribute__ ((packed)) success;

    struct
    {
      zb_uint32_t current_time;
      zb_uint32_t request_time;
      zb_uint16_t delay;

    } __attribute__ ((packed)) wait_for_data;

  } response;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_image_block_res_t;
# 1681 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_upgrade_end_res_s
{
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint32_t current_time;
  zb_uint32_t upgrade_time;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_upgrade_end_res_t;
# 1753 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
  typedef struct zb_zcl_ota_upgrade_query_specific_file_res_s
{
  zb_uint8_t status;
  zb_uint16_t manufacturer;
  zb_uint16_t image_type;
  zb_uint32_t file_version;
  zb_uint32_t image_size;

} __attribute__ ((packed)) zb_zcl_ota_upgrade_query_specific_file_res_t;
# 1836 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_value_param_s
{
  zb_uint8_t upgrade_status;
  union
  {
    struct zb_zcl_ota_upgrade_start_s
    {
      zb_uint16_t manufacturer;
      zb_uint16_t image_type;
      zb_uint32_t file_version;
      zb_uint32_t file_length;
    } start;
    struct zb_zcl_ota_upgrade_receive_s
    {
      zb_uint32_t file_offset;
      zb_uint8_t data_length;
      zb_uint8_t *block_data;
    } receive;

  } upgrade;

} zb_zcl_ota_upgrade_value_param_t;



enum zb_zcl_ota_upgrade_status_e
{
  ZB_ZCL_OTA_UPGRADE_STATUS_START,
  ZB_ZCL_OTA_UPGRADE_STATUS_APPLY,
  ZB_ZCL_OTA_UPGRADE_STATUS_RECEIVE,
  ZB_ZCL_OTA_UPGRADE_STATUS_FINISH,
  ZB_ZCL_OTA_UPGRADE_STATUS_ABORT,
  ZB_ZCL_OTA_UPGRADE_STATUS_CHECK,
  ZB_ZCL_OTA_UPGRADE_STATUS_OK,
  ZB_ZCL_OTA_UPGRADE_STATUS_ERROR,
  ZB_ZCL_OTA_UPGRADE_STATUS_REQUIRE_MORE_IMAGE,
  ZB_ZCL_OTA_UPGRADE_STATUS_BUSY,


};
# 2018 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
zb_void_t zb_zcl_ota_upgrade_set_ota_status(zb_uint8_t endpoint, zb_uint8_t status);

zb_uint8_t zb_zcl_ota_upgrade_get_ota_status(zb_uint8_t endpoint);

zb_void_t zb_zcl_ota_upgrade_send_upgrade_end_req(zb_uint8_t param, zb_uint8_t status);

zb_void_t zb_zcl_ota_restart_after_rejoin(zb_uint8_t endpoint);

void zb_zcl_ota_set_file_size(zb_uint8_t endpoint, zb_uint32_t size);

zb_uint16_t zb_zcl_ota_upgrade_get16(zb_uint8_t endpoint, zb_uint16_t attr_id);

zb_uint32_t zb_zcl_ota_upgrade_get32(zb_uint8_t endpoint, zb_uint16_t attr_id);
# 2039 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
zb_void_t zcl_ota_abort(zb_uint8_t endpoint, zb_uint8_t param);




zb_uint8_t zb_zcl_get_cmd_list_ota_upgrade(zb_bool_t is_client_generated, zb_uint8_t **cmd_list);
# 2053 "../../../../../../../../external/zboss/include/zcl/zb_zcl_ota_upgrade.h"
typedef struct zb_zcl_ota_upgrade_cli_ctx_s
{
  zb_zcl_parsed_hdr_t cmd_info_2;
  zb_zcl_ota_upgrade_image_block_res_t payload_2;
  zb_uint_t resend_retries;
  zb_uint8_t ota_restart_after_rejoin;
} zb_zcl_ota_upgrade_cli_ctx_t;




zb_void_t zb_zcl_ota_upgrade_init_srv(void);
zb_void_t zb_zcl_ota_upgrade_init_cli(void);
# 92 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h" 1
# 76 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_srv_attr_set_e
{
  ZB_ZCL_PRICE_SET_TIER_LABEL = 0x00,
  ZB_ZCL_PRICE_SET_BLOCK_THRESHOLD = 0x01,
  ZB_ZCL_PRICE_SET_BLOCK_PERIOD = 0x02,
  ZB_ZCL_PRICE_SET_COMMODITY = 0x03,
  ZB_ZCL_PRICE_SET_BLOCK_PRICE_INFORMATION = 0x04,
  ZB_ZCL_PRICE_SET_EXTENDED_PRICE_INFORMATION = 0x05,
  ZB_ZCL_PRICE_SET_TARIFF_INFORMATION = 0x06,
  ZB_ZCL_PRICE_SET_BILLING_INFORMATION = 0x07,
  ZB_ZCL_PRICE_SET_CREDIT_PAYMENT = 0x08,




  ZB_ZCL_PRICE_SET_RECEIVED_TIER_LABEL = 0x80,
  ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_THRESHOLD = 0x81,
  ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_PERIOD = 0x82,



  ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_PRICE_INFORMATION = 0x84,
  ZB_ZCL_PRICE_SET_RECEIVED_EXTENDED_PRICE_INFORMATION = 0x85,
  ZB_ZCL_PRICE_SET_RECEIVED_TARIFF_INFORMATION = 0x86,
  ZB_ZCL_PRICE_SET_RECEIVED_BILLING_INFORMATION = 0x87,


};
# 114 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_tier_label_e
{



  ZB_ZCL_ATTR_PRICE_SRV_TIER1_PRICE_LABEL = ((ZB_ZCL_PRICE_SET_TIER_LABEL << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER16_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER17_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER18_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER19_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER20_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER21_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER22_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER23_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER24_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER25_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER26_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER27_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER28_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER29_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER30_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER31_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER32_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER33_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER34_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER35_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER36_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER37_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER38_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER39_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER40_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER41_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER42_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER43_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER44_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER45_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER46_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER47_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_TIER48_PRICE_LABEL,
};
# 200 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_set_block_threshold_e
{



  ZB_ZCL_ATTR_PRICE_SRV_BLOCK1_THRESHOLD = ((ZB_ZCL_PRICE_SET_BLOCK_THRESHOLD << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_BLOCK15_THRESHOLD,






  ZB_ZCL_ATTR_PRICE_SRV_BLOCK_THRESHOLD_COUNT,





  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK15_THRESHOLD,




  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK_THRESHOLD_COUNT,

  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK1_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK15_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK_THRESHOLD_COUNT,
};
# 543 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_block_period_e
{



  ZB_ZCL_ATTR_PRICE_SRV_START_OF_BLOCK_PERIOD = ((ZB_ZCL_PRICE_SET_BLOCK_PERIOD << 8) | (0x00 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_BLOCK_PERIOD_DURATION,




  ZB_ZCL_ATTR_PRICE_SRV_THRESHOLD_MULTIPLIER,






  ZB_ZCL_ATTR_PRICE_SRV_THRESHOLD_DIVISOR,




  ZB_ZCL_ATTR_PRICE_SRV_BLOCK_PERIOD_DURATION_TYPE,

};
# 622 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_block_period_duration_type_e
{
  ZB_ZCL_PRICE_BLOCK_PERIOD_DURATION_TYPE_MINUTES = 0x00,
  ZB_ZCL_PRICE_BLOCK_PERIOD_DURATION_TYPE_DAYS = 0x01,
  ZB_ZCL_PRICE_BLOCK_PERIOD_DURATION_TYPE_WEEKS = 0x02,
  ZB_ZCL_PRICE_BLOCK_PERIOD_DURATION_TYPE_MONTHS = 0x03,
} zb_zcl_price_block_period_duration_type_t;
# 645 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_calorific_value_unit_values_e
{
  ZB_ZCL_PRICE_CALORIFIC_VALUE_UNIT_MJ_M3 = 0x01,
  ZB_ZCL_PRICE_CALORIFIC_VALUE_UNIT_MJ_KG,
} zb_zcl_price_calorific_value_unit_values_t;





enum zb_zcl_price_set_commodity_e
{



  ZB_ZCL_ATTR_PRICE_SRV_COMMODITY_TYPE = ((ZB_ZCL_PRICE_SET_COMMODITY << 8) | (0x00 & 0xFF)),






  ZB_ZCL_ATTR_PRICE_SRV_STANDING_CHARGE,




  ZB_ZCL_ATTR_PRICE_SRV_CONVERSION_FACTOR,




  ZB_ZCL_ATTR_PRICE_SRV_CONVERSION_FACTOR_TRAILING_DIGIT,



  ZB_ZCL_ATTR_PRICE_SRV_CALORIFIC_VALUE,



  ZB_ZCL_ATTR_PRICE_SRV_CALORIFIC_VALUE_UNIT,




  ZB_ZCL_ATTR_PRICE_SRV_CALORIFIC_VALUE_TRAILING_DIGIT,
};
# 770 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_block_price_information_e
{





  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK1_PRICE = ((ZB_ZCL_PRICE_SET_BLOCK_PRICE_INFORMATION << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_NO_TIER_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER1_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER2_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER3_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER4_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER5_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER6_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER7_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER8_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER9_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER10_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER11_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER12_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER13_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER14_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_TIER15_BLOCK16_PRICE,
};
# 1087 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_extended_price_information_e
{






  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER16 = ((ZB_ZCL_PRICE_SET_EXTENDED_PRICE_INFORMATION << 8) | (0x0F & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER17,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER18,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER19,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER20,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER21,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER22,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER23,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER24,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER25,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER26,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER27,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER28,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER29,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER30,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER31,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER32,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER33,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER34,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER35,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER36,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER37,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER38,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER39,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER40,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER41,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER42,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER43,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER44,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER45,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER46,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER47,
  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TIER48,






  ZB_ZCL_ATTR_PRICE_SRV_CPP1_PRICE = ((ZB_ZCL_PRICE_SET_EXTENDED_PRICE_INFORMATION << 8) | (0x0FE & 0xFF)),





  ZB_ZCL_ATTR_PRICE_SRV_CPP2_PRICE,
};
# 1180 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_tariff_information_e
{





  ZB_ZCL_ATTR_PRICE_SRV_TARIFF_LABEL = ((ZB_ZCL_PRICE_SET_TARIFF_INFORMATION << 8) | (0x10 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_NUMBER_OF_PRICE_TIERS_IN_USE,




  ZB_ZCL_ATTR_PRICE_SRV_NUMBER_OF_BLOCK_THRESHOLDS_IN_USE,




  ZB_ZCL_ATTR_PRICE_SRV_TIER_BLOCK_MODE,




  ZB_ZCL_ATTR_PRICE_SRV_UNIT_OF_MEASURE = ((ZB_ZCL_PRICE_SET_TARIFF_INFORMATION << 8) | (0x15 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_CURRENCY,




  ZB_ZCL_ATTR_PRICE_SRV_PRICE_TRAILING_DIGIT,




  ZB_ZCL_ATTR_PRICE_SRV_TARIFF_RESOLUTION_PERIOD = ((ZB_ZCL_PRICE_SET_TARIFF_INFORMATION << 8) | (0x19 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_CO2 = ((ZB_ZCL_PRICE_SET_TARIFF_INFORMATION << 8) | (0x20 & 0xFF)),



  ZB_ZCL_ATTR_PRICE_SRV_CO2_UNIT,




  ZB_ZCL_ATTR_PRICE_SRV_CO2_TRAILING_DIGIT,

};
# 1314 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_tariff_resolution_period_e
{
  ZB_ZCL_ATTR_PRICE_TARIFF_RESOLUTION_PERIOD_NOT_DEFINED = 0x00,
  ZB_ZCL_ATTR_PRICE_TARIFF_RESOLUTION_PERIOD_BLOCK_PERIOD,
  ZB_ZCL_ATTR_PRICE_TARIFF_RESOLUTION_PERIOD_1DAY,
} zb_zcl_price_tariff_resolution_period_t;
# 1346 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_co2_unit_e
{
  ZB_ZCL_ATTR_PRICE_CO2_UNIT_KG_PER_KWH = 0x01,
  ZB_ZCL_ATTR_PRICE_CO2_UNIT_KG_PER_GALLON_OF_GASOLINE = 0x02,
  ZB_ZCL_ATTR_PRICE_CO2_UNIT_KG_PER_THERM_OF_NATURAL_GAS = 0x03,
} zb_zcl_price_co2_unit_t;
# 1389 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_billing_information_e
{



  ZB_ZCL_ATTR_PRICE_SRV_CURRENT_BILLING_PERIOD_START = ((ZB_ZCL_PRICE_SET_BILLING_INFORMATION << 8) | (0x00 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_CURRENT_BILLING_PERIOD_DURATION,




  ZB_ZCL_ATTR_PRICE_SRV_LAST_BILLING_PERIOD_START,




  ZB_ZCL_ATTR_PRICE_SRV_LAST_BILLING_PERIOD_DURATION,







  ZB_ZCL_ATTR_PRICE_SRV_LAST_BILLING_PERIOD_CONSOLIDATED_BILL,

};
# 1484 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_credit_payment_e
{



  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DUE_DATE = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x00 & 0xFF)),



  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_STATUS,




  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_OVER_DUE_AMOUNT,





  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x0A & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_PERIOD,





  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_1 = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x10 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DATE_1,




  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_REF_1,

  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_2 = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x20 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DATE_2,
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_REF_2,

  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_3 = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x30 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DATE_3,
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_REF_3,

  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_4 = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x40 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DATE_4,
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_REF_4,

  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_5 = ((ZB_ZCL_PRICE_SET_CREDIT_PAYMENT << 8) | (0x50 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_DATE_5,
  ZB_ZCL_ATTR_PRICE_SRV_CREDIT_PAYMENT_REF_5,

};
# 1561 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_credit_payment_status_e
{
  ZB_ZCL_PRICE_CREDIT_PAYMENT_PENDING = 0x00,
  ZB_ZCL_PRICE_CREDIT_PAYMENT_RECEIVED = 0x01,
  ZB_ZCL_PRICE_CREDIT_PAYMENT_PAID = ZB_ZCL_PRICE_CREDIT_PAYMENT_RECEIVED,
  ZB_ZCL_PRICE_CREDIT_PAYMENT_OVERDUE = 0x02,
  ZB_ZCL_PRICE_CREDIT_PAYMENT_2PAYMENTS_OVERDUE = 0x03,
  ZB_ZCL_PRICE_CREDIT_PAYMENT_3PAYMENTS_OVERDUE = 0x04,

} zb_zcl_price_credit_payment_status_t;
# 1646 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_tier_label
{



  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER1_PRICE_LABEL = ((ZB_ZCL_PRICE_SET_RECEIVED_TIER_LABEL << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER2_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER3_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER4_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER5_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER6_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER7_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER8_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER9_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER10_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER11_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER12_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER13_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER14_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER15_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER16_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER17_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER18_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER19_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER20_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER21_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER22_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER23_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER24_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER25_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER26_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER27_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER28_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER29_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER30_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER31_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER32_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER33_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER34_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER35_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER36_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER37_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER38_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER39_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER40_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER41_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER42_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER43_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER44_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER45_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER46_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER47_PRICE_LABEL,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER48_PRICE_LABEL,

};
# 1731 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_block_threshold_e
{


  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK1_THRESHOLD = ((ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_THRESHOLD << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK2_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK3_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK4_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK5_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK6_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK7_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK8_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK9_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK10_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK11_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK12_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK13_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK14_THRESHOLD,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK15_THRESHOLD,

};
# 1780 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_block_period_e
{



  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_START_OF_BLOCK_PERIOD = ((ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_PERIOD << 8) | (0x00 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_BLOCK_PERIOD_DURATION,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_THRESHOLD_MULTIPLIER,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_THRESHOLD_DIVISOR,

};
# 1852 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_block_price_information_e
{



  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK1_PRICE = ((ZB_ZCL_PRICE_SET_RECEIVED_BLOCK_PRICE_INFORMATION << 8) | (0x00 & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_NO_TIER_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER1_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER2_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER3_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER4_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER5_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER6_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER7_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER8_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER9_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER10_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER11_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER12_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER13_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER14_BLOCK16_PRICE,

  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK1_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK2_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK3_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK4_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK5_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK6_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK7_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK8_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK9_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK10_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK11_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK12_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK13_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK14_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK15_PRICE,
  ZB_ZCL_ATTR_PRICE_SRV_RX_TIER15_BLOCK16_PRICE,
};
# 2167 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_extended_price_information_e
{





  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER16 = ((ZB_ZCL_PRICE_SET_RECEIVED_EXTENDED_PRICE_INFORMATION << 8) | (0x0F & 0xFF)),
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER17,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER18,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER19,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER20,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER21,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER22,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER23,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER24,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER25,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER26,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER27,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER28,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER29,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER30,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER31,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER32,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER33,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER34,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER35,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER36,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER37,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER38,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER39,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER40,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER41,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER42,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER43,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER44,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER45,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER46,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER47,
  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_PRICE_TIER48,

};
# 2296 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_tariff_information_e
{





  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TARIFF_LABEL = ((ZB_ZCL_PRICE_SET_RECEIVED_TARIFF_INFORMATION << 8) | (0x10 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_NUMBER_OF_PRICE_TIERS_IN_USE,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_NUMBER_OF_BLOCK_THRESHOLDS_IN_USE,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TIER_BLOCK_MODE,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_TARIFF_RESOLUTION_PERIOD = ((ZB_ZCL_PRICE_SET_RECEIVED_TARIFF_INFORMATION << 8) | (0x15 & 0xFF)),





  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_CO2 = ((ZB_ZCL_PRICE_SET_RECEIVED_TARIFF_INFORMATION << 8) | (0x15 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_CO2_UNIT,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_CO2_TRAILING_DIGIT,

};
# 2429 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_set_received_billing_information
{



  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_CURRENT_BILLING_PERIOD_START = ((ZB_ZCL_PRICE_SET_RECEIVED_BILLING_INFORMATION << 8) | (0x00 & 0xFF)),




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_CURRENT_BILLING_PERIOD_DURATION,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_LAST_BILLING_PERIOD_START,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_LAST_BILLING_PERIOD_DURATION,




  ZB_ZCL_ATTR_PRICE_SRV_RECEIVED_LAST_BILLING_PERIOD_CONSOLIDATED_BILL,

};
# 2527 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_cli_attr_e
{



  ZB_ZCL_ATTR_PRICE_CLI_PRICE_INCREASE_RANDOMIZE_MINUTES = 0x0000,




  ZB_ZCL_ATTR_PRICE_CLI_PRICE_DECREASE_RANDOMIZE_MINUTES = 0x0001,



  ZB_ZCL_ATTR_PRICE_CLI_COMMODITY_TYPE = 0x0002,
} zb_zcl_price_cli_attr_t;
# 2600 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef enum zb_zcl_price_client_cmd_e
{




  ZB_ZCL_PRICE_CLI_CMD_GET_CURRENT_PRICE = 0x00,





  ZB_ZCL_PRICE_CLI_CMD_GET_SCHEDULED_PRICES = 0x01,






  ZB_ZCL_PRICE_CLI_CMD_PRICE_ACK = 0x02,







  ZB_ZCL_PRICE_CLI_CMD_GET_BLOCK_PERIOD = 0x03,







  ZB_ZCL_PRICE_CLI_CMD_GET_CONVERSION_FACTOR = 0x04,







  ZB_ZCL_PRICE_CLI_CMD_GET_CALORIFIC_VALUE = 0x05,







  ZB_ZCL_PRICE_CLI_CMD_GET_TARIFF_INFORMATION = 0x06,







  ZB_ZCL_PRICE_CLI_CMD_GET_PRICE_MATRIX = 0x07,







  ZB_ZCL_PRICE_CLI_CMD_GET_BLOCK_THRESHOLDS = 0x08,







  ZB_ZCL_PRICE_CLI_CMD_GET_CO2_VALUE = 0x09,
# 2684 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_CLI_CMD_GET_TIER_LABELS = 0x0A,







  ZB_ZCL_PRICE_CLI_CMD_GET_BILLING_PERIOD = 0x0B,







  ZB_ZCL_PRICE_CLI_CMD_GET_CONSOLIDATED_BILL = 0x0C,
# 2713 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_CLI_CMD_CPP_EVENT_RESPONSE = 0x0D,







  ZB_ZCL_PRICE_CLI_CMD_GET_CREDIT_PAYMENT = 0x0E,







  ZB_ZCL_PRICE_CLI_CMD_GET_CURRENCY_CONVERSION = 0x0F,







  ZB_ZCL_PRICE_CLI_CMD_GET_TARIFF_CANCELLATION = 0x10,


} zb_zcl_price_client_cmd_t;




typedef enum zb_zcl_price_server_cmd_e
{
# 2755 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_PRICE = 0x00,
# 2764 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_BLOCK_PERIOD = 0x01,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CONVERSION_FACTOR = 0x02,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CALORIFIC_VALUE = 0x03,
# 2789 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_TARIFF_INFORMATION = 0x04,
# 2800 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_PRICE_MATRIX = 0x05,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_BLOCK_THRESHOLDS = 0x06,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CO2_VALUE = 0x07,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_TIER_LABELS = 0x08,
# 2833 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_BILLING_PERIOD = 0x09,
# 2843 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CONSOLIDATED_BILL = 0x0A,
# 2856 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CPP_EVENT = 0x0B,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CREDIT_PAYMENT = 0x0C,







  ZB_ZCL_PRICE_SRV_CMD_PUBLISH_CURRENCY_CONVERSION = 0x0D,







  ZB_ZCL_PRICE_SRV_CMD_CANCEL_TARIFF = 0x0E,


} zb_zcl_price_server_cmd_t;
# 2904 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef struct zb_zcl_price_publish_price_payload_s
{

  zb_uint32_t provider_id;




  zb_uint8_t rate_label[13];




  zb_uint32_t issuer_event_id;




  zb_uint32_t current_time;




  zb_uint8_t unit_of_measure;





  zb_uint16_t currency;


  zb_uint8_t price_trailing_digit:4;


  zb_uint8_t price_tier:4;


  zb_uint8_t number_of_price_tiers:4;




  zb_uint8_t register_tier:4;




  zb_uint32_t start_time;




  zb_uint16_t duration_in_minutes;







  zb_uint32_t price;






  zb_uint8_t price_ratio;







  zb_uint32_t generation_price;





  zb_uint8_t generation_price_ratio;




  zb_uint32_t alternate_cost_delivered;




  zb_uint8_t alternate_cost_unit;




  zb_uint8_t alternate_cost_trailing_digit;


  zb_uint8_t number_of_block_thresholds;




  zb_uint8_t price_control;




  zb_uint8_t number_of_generation_tiers;


  zb_uint8_t generation_tier;




  zb_uint8_t extended_number_of_price_tiers;




  zb_uint8_t extended_price_tier;




  zb_uint8_t extended_register_tier;

} __attribute__ ((packed)) zb_zcl_price_publish_price_payload_t;
# 3093 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef struct zb_zcl_price_ack_payload_s
{

  zb_uint32_t provider_id;




  zb_uint32_t issuer_event_id;




  zb_uint32_t current_time;




  zb_uint8_t price_control;
} __attribute__ ((packed)) zb_zcl_price_ack_payload_t;
# 3142 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef struct zb_zcl_price_get_scheduled_prices_payload_s
{




  zb_uint32_t start_time;




  zb_uint8_t number_of_events;
} __attribute__ ((packed)) zb_zcl_price_get_scheduled_prices_payload_t;
# 3170 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef zb_uint8_t zb_zcl_price_get_current_price_payload_t;




typedef struct zb_zcl_price_get_block_period_payload_s
{



  zb_uint32_t start_time;




  zb_uint8_t number_of_events;






  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_client_get_block_period_payload_t;





typedef struct zb_zcl_price_get_conversion_factor_payload_s
{



  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;





  zb_uint8_t number_of_commands;
} __attribute__ ((packed)) zb_zcl_price_get_conversion_factor_payload_t;





typedef struct zb_zcl_price_client_get_calorific_value_payload_s
{



  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;




  zb_uint8_t number_of_commands;
} __attribute__ ((packed)) zb_zcl_price_client_get_calorific_value_payload_t;





typedef struct zb_zcl_price_get_tariff_information_payload_s
{



  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;





  zb_uint8_t number_of_commands;







  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_get_tariff_information_payload_t;





typedef struct zb_zcl_price_get_price_matrix_payload_s
{

  zb_uint32_t issuer_tariff_id;
} __attribute__ ((packed)) zb_zcl_price_get_price_matrix_payload_t;





typedef struct zb_zcl_price_get_block_thresholds_payload_s
{



  zb_uint32_t issuer_tariff_id;
} __attribute__ ((packed)) zb_zcl_price_get_block_thresholds_payload_t;





typedef struct zb_zcl_price_get_co2_value_payload_s
{






  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;





  zb_uint8_t number_of_commands;






  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_get_co2_value_payload_t;





typedef struct zb_zcl_price_get_tier_labels_payload_s
{



  zb_uint32_t issuer_tariff_id;
} __attribute__ ((packed)) zb_zcl_price_get_tier_labels_payload_t;







typedef struct zb_zcl_price_get_billing_period_payload_s
{



  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;




  zb_uint8_t number_of_commands;







  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_get_billing_period_payload_t;





typedef struct zb_zcl_price_get_consolidated_bill_payload_s
{



  zb_uint32_t earliest_start_time;




  zb_uint32_t min_issuer_event_id;





  zb_uint8_t number_of_commands;







  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_get_consolidated_bill_payload_t;





typedef struct zb_zcl_price_cpp_event_response_payload_s
{




  zb_uint32_t issuer_event_id;






  zb_uint8_t cpp_auth;
} __attribute__ ((packed)) zb_zcl_price_cpp_event_response_payload_t;





typedef struct zb_zcl_price_get_credit_payment_payload_s
{





  zb_uint32_t latest_end_time;




  zb_uint8_t number_of_commands;
} __attribute__ ((packed)) zb_zcl_price_get_credit_payment_payload_t;






typedef enum zb_zcl_price_block_period_control_field_bitmap_e
{
  ZB_ZCL_PRICE_CONTROL_PRICE_ACKNOWLEDGEMENT_REQUIRED = 1 << 0,


  ZB_ZCL_PRICE_CONTROL_REPEATING_BLOCK = 1 << 1,


} zb_zcl_price_block_period_control_field_t;





typedef enum zb_zcl_price_block_period_duration_control_e
{
  ZB_ZCL_PRICE_DURATION_START_OF_TIMEBASE = 0x00,
  ZB_ZCL_PRICE_DURATION_END_OF_TIMEBASE,
  ZB_ZCL_PRICE_DURATION_NOT_SPECIFIED
} zb_zcl_price_block_period_duration_control_t;





typedef struct zb_zcl_price_publish_block_period_payload_s
{





  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t block_period_start_time;



  zb_uint24_t block_period_duration;




  zb_uint8_t block_period_control;






  zb_uint8_t block_period_duration_type;






  zb_uint8_t tariff_type;





  zb_uint8_t tariff_resolution_period;
} __attribute__ ((packed)) zb_zcl_price_publish_block_period_payload_t;





typedef struct zb_zcl_price_publish_conversion_factor_payload_s
{



  zb_uint32_t issuer_event_id;




  zb_uint32_t start_time;


  zb_uint32_t conversion_factor;


  zb_uint8_t conversion_factor_trailing_digit;
} __attribute__ ((packed)) zb_zcl_price_publish_conversion_factor_payload_t;





typedef struct zb_zcl_price_publish_calorific_value_payload_s
{



  zb_uint32_t issuer_event_id;




  zb_uint32_t start_time;



  zb_uint32_t calorific_value;



  zb_uint8_t calorific_value_unit;



  zb_uint8_t calorific_value_trailing_digit;
} __attribute__ ((packed)) zb_zcl_price_publish_calorific_value_payload_t;





typedef enum zb_zcl_price_tariff_type_e
{
  ZB_ZCL_PRICE_TARIFF_TYPE_DELIVERED = 0x00,
  ZB_ZCL_PRICE_TARIFF_TYPE_RECEIVED,
  ZB_ZCL_PRICE_TARIFF_TYPE_DELIVERED_AND_RECEIVED,
} zb_zcl_price_tariff_type_t;





typedef enum zb_zcl_price_tariff_charging_scheme_e
{
  ZB_ZCL_PRICE_TOU_TARIFF = 0x00,
  ZB_ZCL_PRICE_BLOCK_TARIFF,
  ZB_ZCL_PRICE_BLOCK_TOU_TARIFF_COMMON,
  ZB_ZCL_PRICE_BLOCK_TOU_TARIFF_INDIVIDUAL,
} zb_zcl_price_tariff_charging_scheme_t;





typedef struct zb_zcl_price_publish_tariff_information_payload_s
{



  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t issuer_tariff_id;



  zb_uint32_t start_time;
# 3627 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  zb_uint8_t tariff_type_charging_scheme;




  zb_uint8_t tariff_label[25];




  zb_uint8_t number_of_price_tiers_in_use;




  zb_uint8_t number_of_block_thresholds_in_use;



  zb_uint8_t unit_of_measure;



  zb_uint16_t currency;




  zb_uint8_t price_trailing_digit;




  zb_uint32_t standing_charge;




  zb_uint8_t tier_block_mode;







  zb_uint24_t block_threshold_multiplier;
# 3682 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  zb_uint24_t block_threshold_devisor;
} __attribute__ ((packed)) zb_zcl_price_publish_tariff_information_payload_t;
# 3692 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
enum zb_zcl_price_sub_payload_control_bitmap_e
{
  ZB_ZCL_PRICE_SUB_PAYLOAD_TYPE = 0,
};






typedef enum zb_zcl_price_publish_matrix_type_e
{
  ZB_ZCL_PRICE_BLOCK_TOU_BASED_INFORMATION = 0x00,


  ZB_ZCL_PRICE_TOU_BASED_INFORMATION = 0x01,


} zb_zcl_price_publish_matrix_type_t;





typedef struct zb_zcl_price_price_matrix_sub_payload_s
{



  zb_uint8_t tier_block_id;




  zb_uint32_t price;
} __attribute__ ((packed)) zb_zcl_price_price_matrix_sub_payload_t;





typedef struct zb_zcl_price_publish_price_matrix_payload_s
{

  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t start_time;





  zb_uint32_t issuer_tariff_id;





  zb_uint8_t command_index;





  zb_uint8_t total_number_of_commands;




  zb_uint8_t sub_payload_control;



  zb_zcl_price_price_matrix_sub_payload_t *price_matrix_sub_payload;
} __attribute__ ((packed)) zb_zcl_price_publish_price_matrix_payload_t;






typedef enum zb_zcl_price_publish_block_thresholds_type_e
{
  ZB_ZCL_PRICE_SPECIFIC_TOU_TIER = 0x00,


  ZB_ZCL_PRICE_ALL_TOU_TIER = 0X01,



} zb_zcl_price_publish_block_thresholds_type_t;





typedef struct zb_zcl_price_block_threshold_sub_payload_s
{
# 3811 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
  zb_uint8_t tier_number_of_block_thresholds;




  zb_uint48_t block_threshold[15];
} __attribute__ ((packed)) zb_zcl_price_block_threshold_sub_payload_t;





typedef struct zb_zcl_price_publish_block_thresholds_payload_s
{




  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t start_time;




  zb_uint32_t issuer_tariff_id;





  zb_uint8_t command_index;





  zb_uint8_t total_number_of_commands;





  zb_uint8_t sub_payload_control;






  zb_zcl_price_block_threshold_sub_payload_t *block_threshold_sub_payload;
} __attribute__ ((packed)) zb_zcl_price_publish_block_thresholds_payload_t;





typedef struct zb_zcl_price_publish_co2_value_payload_s
{



  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t start_time;






  zb_uint8_t tariff_type;




  zb_uint32_t co2_value;




  zb_uint8_t co2_value_unit;





  zb_uint8_t co2_value_trailing_digit;
} __attribute__ ((packed)) zb_zcl_price_publish_co2_value_payload_t;





typedef struct zb_zcl_price_publish_tier_labels_sub_payload_s
{

  zb_uint8_t tier_id;





  zb_uint8_t tier_label[13];
} __attribute__ ((packed)) zb_zcl_price_publish_tier_labels_sub_payload_t;





typedef struct zb_zcl_price_publish_tier_labels_payload_s
{



  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;




  zb_uint32_t issuer_tariff_id;





  zb_uint8_t command_index;





  zb_uint8_t total_number_of_commands;



  zb_uint8_t number_of_labels;


  zb_zcl_price_publish_tier_labels_sub_payload_t *tier_labels;

} __attribute__ ((packed)) zb_zcl_price_publish_tier_labels_payload_t;
# 3988 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
typedef struct zb_zcl_price_publish_billing_period_payload_s
{




  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t billing_period_start_time;




  zb_uint24_t billing_period_duration;







  zb_uint8_t billing_period_duration_type;






  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_publish_billing_period_payload_t;





typedef struct zb_zcl_price_publish_consolidated_bill_payload_s
{



  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t billing_period_start_time;



  zb_uint24_t billing_period_duration;






  zb_uint8_t billing_period_duration_type;






  zb_uint8_t tariff_type;




  zb_uint32_t consolidated_bill;




  zb_uint16_t currency;




  zb_uint8_t bill_trailing_digit;
} __attribute__ ((packed)) zb_zcl_price_publish_consolidated_bill_payload_t;





typedef enum zb_zcl_price_cpp_price_tier_e
{
  ZB_ZCL_PRICE_CPP_PRICE_TIER_CPP1 = 0,
  ZB_ZCL_PRICE_CPP_PRICE_TIER_CPP2 = 1,
} zb_zcl_price_cpp_price_tier_t;





typedef enum zb_zcl_price_cpp_event_status_e
{
  ZB_ZCL_PRICE_CPP_EVENT_STATUS_PENDING = 0,
  ZB_ZCL_PRICE_CPP_EVENT_STATUS_ACCEPTED,
  ZB_ZCL_PRICE_CPP_EVENT_STATUS_REJECTED,
  ZB_ZCL_PRICE_CPP_EVENT_STATUS_FORCED,
} zb_zcl_price_cpp_event_status_t;





typedef struct zb_zcl_price_publish_cpp_event_payload_s
{



  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;





  zb_uint32_t start_time;




  zb_uint16_t duration_in_minutes;






  zb_uint8_t tariff_type;






  zb_uint8_t cpp_price_tier;




  zb_uint8_t cpp_auth;
} __attribute__ ((packed)) zb_zcl_price_publish_cpp_event_payload_t;





typedef struct zb_zcl_price_publish_credit_payment_payload_s
{




  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;


  zb_uint32_t credit_payment_due_date;





  zb_uint32_t credit_payment_overdue_amount;



  zb_uint8_t credit_payment_status;




  zb_uint32_t credit_payment;




  zb_uint32_t credit_payment_date;




  zb_uint8_t credit_payment_ref[21];
} __attribute__ ((packed)) zb_zcl_price_publish_credit_payment_payload_t;





typedef enum zb_zcl_price_currency_change_control_e
{
  ZB_ZCL_PRICE_CLEAR_BILLING_INFORMATION = 1 << 0,


  ZB_ZCL_PRICE_CONVERT_BILLING_INFORMATION = 1 << 1,


  ZB_ZCL_PRICE_CLEAR_OLD_CONSUMPTION_DATA = 1 << 2,


  ZB_ZCL_PRICE_CONVERT_OLD_CONSUMPTION_DATA = 1 << 3,


} zb_zcl_price_currency_cghange_control_t;





typedef struct zb_zcl_price_publish_currency_conversion_payload_s
{




  zb_uint32_t provider_id;





  zb_uint32_t issuer_event_id;



  zb_uint32_t start_time;




  zb_uint16_t old_currency;





  zb_uint16_t new_currency;




  zb_uint32_t conversion_factor;




  zb_uint8_t conversion_factor_trailing_digit;




  zb_uint32_t currency_change_control_flags;
} __attribute__ ((packed)) zb_zcl_price_publish_currency_conversion_payload_t;





typedef struct zb_zcl_price_cancel_tariff_payload_s
{




  zb_uint32_t provider_id;




  zb_uint32_t issuer_tariff_id;







  zb_uint8_t tariff_type;
} __attribute__ ((packed)) zb_zcl_price_cancel_tariff_payload_t;
# 4400 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
zb_void_t zb_zcl_price_send_cmd_publish_price(zb_uint8_t param, const zb_addr_u *dst_addr,
                                              enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                              zb_uint8_t src_ep,
                                              const zb_zcl_price_publish_price_payload_t *payload,
                                              zb_callback_t cb);

zb_void_t zb_zcl_price_send_cmd_get_current_price(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                  enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                  zb_uint8_t src_ep, zb_uint8_t rx_on_when_idle,
                                                  zb_callback_t cb);

zb_void_t zb_zcl_price_send_cmd_price_ack(zb_uint8_t param, const zb_addr_u *dst_addr,
                                          enum zb_aps_addr_mode_e dst_addr_mode,
                                          zb_uint8_t dst_ep, zb_uint8_t src_ep,
                                          const zb_zcl_price_ack_payload_t *payload,
                                          zb_callback_t cb);

zb_void_t zb_zcl_price_send_cmd_get_scheduled_prices(zb_uint8_t param, const zb_addr_u *dst_addr,
                                                     enum zb_aps_addr_mode_e dst_addr_mode, zb_uint8_t dst_ep,
                                                     zb_uint8_t src_ep,
                                                     const zb_zcl_price_get_scheduled_prices_payload_t *payload,
                                                     zb_callback_t cb);


zb_void_t zb_zcl_price_send_cmd_get_tier_labels(zb_uint8_t param, zb_addr_u *dst_addr,
                                                zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                                zb_uint8_t src_ep,
                                                zb_zcl_price_get_tier_labels_payload_t *payload,
                                                zb_callback_t cb);


zb_void_t zb_zcl_price_send_cmd_publish_tier_labels(zb_uint8_t param, zb_addr_u *dst_addr,
                                                    zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
                                                    zb_uint8_t src_ep,
                                                    zb_zcl_price_publish_tier_labels_payload_t *payload,
                                                    zb_callback_t cb);
# 4445 "../../../../../../../../external/zboss/include/zcl/zb_zcl_price.h"
zb_void_t zb_zcl_price_init_server(void);
zb_void_t zb_zcl_price_init_client(void);
# 94 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h" 1
# 66 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
typedef enum zb_zcl_drlc_cli_attr_e
{
  ZB_ZCL_ATTR_DRLC_UTILITY_ENROLLMENT_GROUP = 0x0000,



  ZB_ZCL_ATTR_DRLC_START_RANDOMIZATION_MINUTES = 0x0001,




  ZB_ZCL_ATTR_DRLC_DURATION_RANDOMIZATION_MINUTES = 0x0002,




  ZB_ZCL_ATTR_DRLC_DEVICE_CLASS_VALUE = 0x0003,



} zb_zcl_drlc_cli_attr_t;





typedef enum zb_zcl_drlc_criticality_levels_e
{
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_0 = 0x00,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_1,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_2,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_3,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_4,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_5,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_6,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_7,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_8,
  ZB_ZCL_DRLC_CRITICALITY_LEVEL_9
} zb_zcl_drlc_criticality_levels_t;




typedef enum zb_zcl_drlc_device_class_e
{
  ZB_ZCL_DRLC_DEVICE_CLASS_HVAC = 1 << 0,
  ZB_ZCL_DRLC_DEVICE_CLASS_STRIP_HEATER = 1 << 1,
  ZB_ZCL_DRLC_DEVICE_CLASS_WATER_HEATER = 1 << 2,
  ZB_ZCL_DRLC_DEVICE_CLASS_POOL_PUMP = 1 << 3,
  ZB_ZCL_DRLC_DEVICE_CLASS_SMART_APPLIANCE = 1 << 4,
  ZB_ZCL_DRLC_DEVICE_CLASS_IRRIGATION_PUMP = 1 << 5,
  ZB_ZCL_DRLC_DEVICE_CLASS_MCI_LOADS = 1 << 6,
  ZB_ZCL_DRLC_DEVICE_CLASS_SIMPLE_LOADS = 1 << 7,
  ZB_ZCL_DRLC_DEVICE_CLASS_EXTERIOR_LIGHTNING = 1 << 8,
  ZB_ZCL_DRLC_DEVICE_CLASS_INTERIOR_LIGHTNING = 1 << 9,
  ZB_ZCL_DRLC_DEVICE_CLASS_ELECTRIC_VEHICLE = 1 << 10,
  ZB_ZCL_DRLC_DEVICE_CLASS_GENERATION_SYSTEMS = 1 << 11
} zb_zcl_drlc_device_class_t;




typedef enum zb_zcl_drlc_event_status_e
{
  ZB_ZCL_DRLC_EVENT_RESERVED_00 = 0x00,
  ZB_ZCL_DRLC_EVENT_LCE_RECEIVED,
  ZB_ZCL_DRLC_EVENT_EVENT_STARTED,
  ZB_ZCL_DRLC_EVENT_EVENT_COMPLETED,
  ZB_ZCL_DRLC_EVENT_OPT_OUT,
  ZB_ZCL_DRLC_EVENT_OPT_IN,
  ZB_ZCL_DRLC_EVENT_EVENT_CANCELLED,
  ZB_ZCL_DRLC_EVENT_EVENT_SUPERSEDED,
  ZB_ZCL_DRLC_EVENT_EVENT_PARTIALLY_OPT_OUT,
  ZB_ZCL_DRLC_EVENT_EVENT_PARTIALLY_OPT_IN,
  ZB_ZCL_DRLC_EVENT_EVENT_COMPLETED_NO_USER,
  ZB_ZCL_DRLC_EVENT_RESERVED_0B,
  ZB_ZCL_DRLC_EVENT_RESERVED_F7 = 0xF7,
  ZB_ZCL_DRLC_EVENT_REJECTED_INVALID_CANCEL_CMD,
  ZB_ZCL_DRLC_EVENT_REJECTED_INVALID_EFFECTIVE_TIME,
  ZB_ZCL_DRLC_EVENT_RESERVED_FA,
  ZB_ZCL_DRLC_EVENT_REJECTED_EXPIRED,
  ZB_ZCL_DRLC_EVENT_RESERVED_FC,
  ZB_ZCL_DRLC_EVENT_REJECTED_UNDEFINED_EVENT,
  ZB_ZCL_DRLC_EVENT_REJECTED,
  ZB_ZCL_DRLC_EVENT_RESERVED_FF
} zb_zcl_drlc_event_status_t;


typedef enum zb_zcl_drlc_signature_type_e
{
  ZB_ZCL_DRLC_LCE_NO_SIGNATURE = 0x00,
  ZB_ZCL_DRLC_LCE_SIGNATURE_ECDSA,
  ZB_ZCL_DRLC_LCE_SIGNATURE_RESERVED
} zb_zcl_drlc_signature_type_t;
# 174 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
typedef enum zb_zcl_drlc_srv_cmd_e
{
  ZB_ZCL_DRLC_SRV_CMD_LOAD_CONTROL_EVENT = 0x00,





  ZB_ZCL_DRLC_SRV_CMD_CANCEL_LOAD_CONTROL_EVENT = 0x01,






  ZB_ZCL_DRLC_SRV_CMD_CANCEL_ALL_LOAD_CONTROL_EVENTS = 0x02,


} zb_zcl_drlc_srv_cmd_t;





typedef enum zb_zcl_drlc_cli_cmd_e
{
  ZB_ZCL_DRLC_CLI_CMD_REPORT_EVENT_STATUS = 0x00,




  ZB_ZCL_DRLC_CLI_CMD_GET_SCHEDULED_EVENTS = 0x01,



} zb_zcl_drlc_cli_cmd_t;
# 233 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
typedef struct zb_zcl_drlc_lce_payload_s {





  zb_uint32_t issuer_event_id;






  zb_uint16_t device_class;





  zb_uint8_t utility_enrollment_group;




  zb_uint32_t start_time;




  zb_uint16_t duration_in_minutes;





  zb_uint8_t criticality_level;




  zb_uint8_t cooling_temperature_offset;




  zb_uint8_t heating_temperature_offset;


  zb_int16_t cooling_temperature_set_point;


  zb_int16_t heating_temperature_set_point;




  zb_int8_t average_load_adjustment_percentage;


  zb_uint8_t duty_cycle;


  zb_uint8_t event_control;
} __attribute__ ((packed)) zb_zcl_drlc_lce_payload_t;





typedef struct zb_zcl_drlc_cancel_lce_payload_s {






  zb_uint32_t issuer_event_id;





  zb_uint16_t device_class;





  zb_uint8_t utility_enrollment_group;



  zb_uint8_t cancel_control;





  zb_uint32_t effective_time;
} __attribute__ ((packed)) zb_zcl_drlc_cancel_lce_payload_t;




typedef struct zb_zcl_drlc_report_event_status_payload_s {






  zb_uint32_t issuer_event_id;


  zb_uint8_t event_status;




  zb_uint32_t event_status_time;


  zb_uint8_t criticality_level_applied;




  zb_uint16_t cooling_temperature_set_point_applied;





  zb_uint16_t heating_temperature_set_point_applied;




  zb_int8_t average_load_adjustment_percentage_applied;




  zb_uint8_t duty_cycle_applied;


  zb_uint8_t event_control;


  zb_uint8_t signature_type;




  zb_uint8_t signature[42];
} __attribute__ ((packed)) zb_zcl_drlc_report_event_status_payload_t;





typedef struct zb_zcl_drlc_get_scheduled_events_payload_s {






  zb_uint32_t start_time;




  zb_uint8_t number_of_events;





  zb_uint32_t issuer_event_id;
} __attribute__ ((packed)) zb_zcl_drlc_get_scheduled_events_payload_t;
# 473 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_drlc_server_send_load_control_event(zb_uint8_t param,
  zb_addr_u *dst_addr, zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
  zb_uint8_t src_ep, zb_zcl_drlc_lce_payload_t *payload, zb_callback_t cb);
# 489 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_drlc_server_send_cancel_load_control_event(zb_uint8_t param,
  zb_addr_u *dst_addr, zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
  zb_uint8_t src_ep, zb_zcl_drlc_cancel_lce_payload_t *payload, zb_callback_t cb);
# 506 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_drlc_server_send_cancel_all_load_control_events(zb_uint8_t param,
  zb_addr_u *dst_addr, zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
  zb_uint8_t src_ep, zb_uint8_t *payload, zb_callback_t cb);
# 527 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_drlc_client_send_report_event_status(zb_uint8_t param,
  zb_addr_u *dst_addr, zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
  zb_uint8_t src_ep, zb_zcl_drlc_report_event_status_payload_t *payload, zb_callback_t cb);
# 543 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_drlc_client_send_get_scheduled_events(zb_uint8_t param,
  zb_addr_u *dst_addr, zb_aps_addr_mode_t dst_addr_mode, zb_uint8_t dst_ep,
  zb_uint8_t src_ep, zb_zcl_drlc_get_scheduled_events_payload_t *payload, zb_callback_t cb);
# 613 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
typedef struct zb_zcl_drlc_client_attrs_s
{



  zb_uint8_t utility_enrollment_group;




  zb_uint8_t start_randomization_munutes;




  zb_uint8_t duration_randomization_minutes;




  zb_uint16_t device_class_value;
} zb_zcl_drlc_client_attrs_t;
# 651 "../../../../../../../../external/zboss/include/zcl/zb_zcl_drlc.h"
zb_void_t zb_zcl_drlc_init_server(void);
zb_void_t zb_zcl_drlc_init_client(void);
# 95 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2

# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h" 1
# 45 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
# 1 "../../../../../../../../external/zboss/include/zboss_api_aps.h" 1
# 46 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h" 2
# 68 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_srv_cmd_e
{




  ZB_ZCL_MESSAGING_SRV_CMD_DISPLAY_MESSAGE = 0x00,
# 84 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
  ZB_ZCL_MESSAGING_SRV_CMD_CANCEL_MESSAGE = 0x01,





  ZB_ZCL_MESSAGING_SRV_CMD_DISPLAY_PROTECTED_MESSAGE = 0x02,
# 99 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
  ZB_ZCL_MESSAGING_SRV_CMD_CANCEL_ALL_MESSAGES = 0x03
} zb_zcl_messaging_srv_cmd_t;





typedef enum zb_zcl_messaging_cli_cmd_e
{







  ZB_ZCL_MESSAGING_CLI_CMD_GET_LAST_MESSAGE = 0x00,
# 127 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
  ZB_ZCL_MESSAGING_CLI_CMD_MESSAGE_CONFIRMATION = 0x01,
# 137 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
  ZB_ZCL_MESSAGING_CLI_CMD_GET_MESSAGE_CANCELLATION = 0x02
} zb_zcl_messaging_cli_cmd_t;
# 160 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_extended_message_control_e
{
  ZB_ZCL_MESSAGING_MESSAGE_HAS_NOT_BEEN_CONFIRMED = 0,
  ZB_ZCL_MESSAGING_MESSAGE_HAS_BEEN_CONFIRMED = 1,
} zb_zcl_messaging_extended_message_control_field_t;




enum zb_zcl_messaging_extended_message_control_field_bitmap_e
{
  ZB_ZCL_MESSAGING_MESSAGE_CONFIRMATION_STATUS = 0,
};





typedef struct zb_zcl_messaging_display_message_payload_s
{

  zb_uint32_t message_id;


  zb_uint8_t message_control;


  zb_uint32_t start_time;



  zb_uint16_t duration_in_minutes;




  zb_uint8_t message_len;
  zb_uint8_t *message;




  zb_uint8_t extended_message_control;
} __attribute__ ((packed)) zb_zcl_messaging_display_message_payload_t;
# 212 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_message_control_transmission_mechanism_e
{
  ZB_ZCL_MESSAGING_NORMAL_TRANSMISSION_ONLY = 0,


  ZB_ZCL_MESSAGING_NORMAL_AND_INTERNAL_PAN_TRANSMISSION = 1,



  ZB_ZCL_MESSAGING_INTER_PAN_TRANSMISSION_ONLY = 2,


} zb_zcl_messaging_control_field_transmission_mechanism_t;
# 257 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_message_control_importance_level_e
{
  ZB_ZCL_MESSAGING_IMPORTANCE_LEVEL_LOW = 0,
  ZB_ZCL_MESSAGING_IMPORTANCE_LEVEL_MEDIUM = 1,
  ZB_ZCL_MESSAGING_IMPORTANCE_LEVEL_HIGH = 2,
  ZB_ZCL_MESSAGING_IMPORTANCE_LEVEL_CRITICAL = 3,
} zb_zcl_messaging_message_control_importance_level_t;
# 296 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_message_control_enhanced_confirmation_e
{
  ZB_ZCL_MESSAGING_ENHANCED_CONFIRMATION_NOT_REQUIRED = 0,
  ZB_ZCL_MESSAGING_ENHANCED_CONFIRMATION_REQUIRED = 1,
} zb_zcl_messaging_message_control_enhanced_confirmation_t;
# 331 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_message_control_message_confirmation_e
{
  ZB_ZCL_MESSAGING_MESSAGE_CONFIRMATION_NOT_REQUIRED = 0x00,
  ZB_ZCL_MESSAGING_MESSAGE_CONFIRMATION_REQUIRED = 0x01,
} zb_zcl_messaging_message_control_message_confirmation_t;
# 382 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef struct zb_zcl_messaging_cancel_message_payload_s
{

  zb_uint32_t message_id;


  zb_uint8_t message_control;
} __attribute__ ((packed)) zb_zcl_messaging_cancel_message_payload_t;
# 403 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_message_confirmation_control_e
{
  ZB_ZCL_MESSAGING_NO_RETURNED = 1 << 0,
  ZB_ZCL_MESSAGING_YES_RETURNED = 1 << 1,
} zb_zcl_messaging_message_confirmation_control_t;





typedef struct zb_zcl_messaging_message_confirm_payload_s
{

  zb_uint32_t message_id;


  zb_uint32_t confirmation_time;




  zb_uint8_t message_confirmation_control;






  zb_uint8_t message_confirmation_response[21];
} __attribute__ ((packed)) zb_zcl_messaging_message_confirm_payload_t;





typedef struct zb_zcl_messaging_cancel_all_message_payload_s
{



  zb_uint32_t implementation_date;
} __attribute__ ((packed)) zb_zcl_messaging_cancel_all_message_payload_t;





typedef struct zb_zcl_messaging_get_message_cancellation_payload_s
{



  zb_uint32_t earliest_implementation_time;
} __attribute__ ((packed)) zb_zcl_messaging_get_message_cancellation_payload_t;
# 466 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef enum zb_zcl_messaging_response_type_e {
  ZB_ZCL_MESSAGING_RESPONSE_TYPE_NORMAL,
  ZB_ZCL_MESSAGING_RESPONSE_TYPE_PROTECTED,
  ZB_ZCL_MESSAGING_RESPONSE_TYPE_NOT_FOUND,
} zb_zcl_messaging_response_type_t;
# 487 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
typedef struct zb_zcl_messaging_get_last_message_response_s {
  zb_zcl_messaging_response_type_t resp_type;
  union {
    zb_zcl_messaging_display_message_payload_t display_message;
    zb_zcl_messaging_display_message_payload_t display_protected_message;
  } resp;
} zb_zcl_messaging_get_last_message_response_t;
# 522 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
zb_void_t zb_zcl_messaging_send_get_last_msg(zb_uint8_t param,
                                             const zb_addr_u *dst_addr,
                                             enum zb_aps_addr_mode_e dst_addr_mode,
                                             zb_uint8_t dst_ep,
                                             zb_uint8_t src_ep,
                                             zb_callback_t cb);
# 544 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
zb_void_t zb_zcl_messaging_send_display_msg(zb_uint8_t param,
                                            const zb_addr_u *dst_addr,
                                            enum zb_aps_addr_mode_e dst_addr_mode,
                                            zb_uint8_t dst_ep,
                                            zb_uint8_t src_ep,
                                            const zb_zcl_messaging_display_message_payload_t *payload,
                                            zb_callback_t cb);
# 563 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
zb_void_t zb_zcl_messaging_send_msg_confirmation(zb_uint8_t param,
                                            const zb_addr_u *dst_addr,
                                            enum zb_aps_addr_mode_e dst_addr_mode,
                                            zb_uint8_t dst_ep,
                                            zb_uint8_t src_ep,
                                            const zb_zcl_messaging_message_confirm_payload_t *payload,
                                            zb_callback_t cb);
# 582 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
zb_void_t zb_zcl_messaging_send_cancel_msg(zb_uint8_t param,
                                           const zb_addr_u *dst_addr,
                                           enum zb_aps_addr_mode_e dst_addr_mode,
                                           zb_uint8_t dst_ep,
                                           zb_uint8_t src_ep,
                                           const zb_zcl_messaging_cancel_message_payload_t *payload,
                                           zb_callback_t cb);
# 616 "../../../../../../../../external/zboss/include/zcl/zb_zcl_messaging.h"
zb_void_t zb_zcl_messaging_init_server(void);
zb_void_t zb_zcl_messaging_init_client(void);
# 97 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h" 1
# 72 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
enum zb_zcl_tunneling_attr_e
{
# 82 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  ZB_ZCL_ATTR_TUNNELING_CLOSE_TUNNEL_TIMEOUT_ID = 0
};
# 120 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_attrs_s
{



  zb_uint16_t close_tunnel_timeout;
} zb_zcl_tunneling_attrs_t;
# 154 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
enum zb_zcl_tunneling_cli_cmd_e
{

  ZB_ZCL_TUNNELING_CLI_CMD_REQUEST_TUNNEL = 0x00,






  ZB_ZCL_TUNNELING_CLI_CMD_CLOSE_TUNNEL = 0x01,







  ZB_ZCL_TUNNELING_CLI_CMD_TRANSFER_DATA = 0x02,




  ZB_ZCL_TUNNELING_CLI_CMD_TRANSFER_DATA_ERROR = 0x03,
# 196 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  ZB_ZCL_TUNNELING_CLI_CMD_ACK_TRANSFER_DATA = 0x04,
# 205 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  ZB_ZCL_TUNNELING_CLI_CMD_READY_DATA = 0x05,
# 215 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  ZB_ZCL_TUNNELING_CLI_CMD_GET_SUPPORTED_TUNNEL_PROTOCOLS = 0x06,



};





enum zb_zcl_tunneling_srv_cmd_e
{
  ZB_ZCL_TUNNELING_SRV_CMD_REQUEST_TUNNEL_RESPONSE = 0x00,






  ZB_ZCL_TUNNELING_SRV_CMD_TRANSFER_DATA = 0x01,




  ZB_ZCL_TUNNELING_SRV_CMD_TRANSFER_DATA_ERROR = 0x02,

  ZB_ZCL_TUNNELING_SRV_CMD_ACK_TRANSFER_DATA = 0x03,

  ZB_ZCL_TUNNELING_SRV_CMD_READY_DATA = 0x04,

  ZB_ZCL_TUNNELING_SRV_CMD_SUPPORTED_TUNNEL_PROTOCOLS_RESPONSE = 0x05,
# 254 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  ZB_ZCL_TUNNELING_SRV_CMD_TUNNEL_CLOSURE_NOTIFICATION = 0x06,




};
# 285 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
enum zb_zcl_tunneling_tunnel_status_e
{

  ZB_ZCL_TUNNELING_STATUS_SUCCESS = 0,



  ZB_ZCL_TUNNELING_STATUS_BUSY = 1,



  ZB_ZCL_TUNNELING_STATUS_NO_MORE_IDS = 2,



  ZB_ZCL_TUNNELING_STATUS_PROTOCOL_NOT_SUPPORTED = 3,



  ZB_ZCL_TUNNELING_STATUS_FLOW_CONTROL_NOT_SUPPORTED = 4,



};






enum zb_zcl_tunneling_transfer_data_status_e
{




  ZB_ZCL_TUNNELING_TRANSFER_DATA_STATUS_NO_SUCH_TUNNEL = 0x00,




  ZB_ZCL_TUNNELING_TRANSFER_DATA_STATUS_WRONG_DEVICE = 0x01,




  ZB_ZCL_TUNNELING_TRANSFER_DATA_STATUS_DATA_OVERFLOW = 0x02,


  ZB_ZCL_TUNNELING_TRANSFER_DATA_INTERNAL_ERROR = 0xFE,


  ZB_ZCL_TUNNELING_TRANSFER_DATA_STATUS_OK = 0xFF,
};






typedef enum zb_zcl_tunneling_protocol_id_e
{
  ZB_ZCL_TUNNELING_PROTOCOL_DLMS_COSEM = 0,
  ZB_ZCL_TUNNELING_PROTOCOL_IEC_61107 = 1,
  ZB_ZCL_TUNNELING_PROTOCOL_ANSI_C12 = 2,
  ZB_ZCL_TUNNELING_PROTOCOL_M_BUS = 3,
  ZB_ZCL_TUNNELING_PROTOCOL_SML = 4,
  ZB_ZCL_TUNNELING_PROTOCOL_CLIMATE_TALK = 5,
  ZB_ZCL_TUNNELING_PROTOCOL_GB_HRGP = 6,
  ZB_ZCL_TUNNELING_PROTOCOL_IPv4 = 7,
  ZB_ZCL_TUNNELING_PROTOCOL_IPv6 = 8,

  ZB_ZCL_TUNNELING_PROTOCOL_MANUFACTURER_DEFINED = 200,
  ZB_ZCL_TUNNELING_PROTOCOL_RESERVED = 255
} zb_zcl_tunneling_protocol_id_t;






typedef struct zb_zcl_tunneling_request_tunnel_s
{





  zb_uint8_t protocol_id;







  zb_uint16_t manufacturer_code;





  zb_bool_t flow_control_support;





  zb_uint16_t max_incoming_transfer_size;
} __attribute__ ((packed)) zb_zcl_tunneling_request_tunnel_t;


void zb_zcl_tunneling_set_max_incoming_to_cli_transfer_size(zb_uint16_t transfer_size);
# 475 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_close_tunnel_s
{





  zb_uint16_t tunnel_id;
}
__attribute__ ((packed))
zb_zcl_tunneling_close_tunnel_t;
# 550 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_transfer_data_hdr_s
{





  zb_uint16_t tunnel_id;
}
__attribute__ ((packed))
zb_zcl_tunneling_transfer_data_hdr_t;


typedef struct zb_zcl_tunneling_srv_rec_s
{
  zb_uint16_t dst_addr;
  zb_uint8_t dst_ep;
  zb_uint8_t src_ep;

  zb_zcl_tunneling_request_tunnel_t tunnel_options;
  zb_uint16_t close_tunnel_timeout;
  zb_uint16_t max_incoming_to_srv_transfer_size;
}
__attribute__ ((packed)) zb_zcl_tunneling_srv_rec_t;


typedef struct zb_zcl_tunnel_request_params_out_s
{
  zb_uint8_t tunnel_status;
  zb_uint16_t max_incoming_to_srv_transfer_size;
} __attribute__ ((packed)) zb_zcl_tunnel_request_params_out_t;
# 589 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_transfer_data_payload_s
{



  zb_zcl_tunneling_transfer_data_hdr_t hdr;


  zb_uint8_t data_size;
# 609 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  zb_uint8_t *tun_data;
}
__attribute__ ((packed))
zb_zcl_tunneling_transfer_data_payload_t;


zb_ret_t zb_zcl_tunneling_client_send_transfer_data(zb_uint8_t param, zb_uint8_t ep, zb_uint16_t prfl_id,
                                             zb_uint8_t def_resp, zb_callback_t cb, zb_uint16_t tunnel_id,
                                             zb_uint16_t data_size, zb_uint8_t *image_data);
zb_ret_t zb_zcl_tunneling_server_send_transfer_data(zb_uint8_t param, zb_uint8_t ep, zb_uint16_t prfl_id,
                                              zb_uint8_t def_resp, zb_callback_t cb, zb_uint16_t tunnel_id,
                                              zb_uint16_t data_size, zb_uint8_t *image_data);
# 696 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_transfer_data_error_s
{






  zb_uint16_t tunnel_id;





  zb_uint8_t transfer_data_status;
}
__attribute__ ((packed)) zb_zcl_tunneling_transfer_data_error_t;
# 778 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_request_tunnel_response_s
{
# 789 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
  zb_uint16_t tunnel_id;





  zb_uint8_t tunnel_status;




  zb_uint16_t max_incoming_transfer_size;
}
__attribute__ ((packed)) zb_zcl_tunneling_request_tunnel_response_t;
# 871 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
typedef struct zb_zcl_tunneling_ack_transfer_data_s
{




  zb_uint16_t tunnel_id;



  zb_uint16_t number_of_bytes_left;
} __attribute__ ((packed)) zb_zcl_tunneling_ack_transfer_data_t;







typedef struct zb_zcl_tunneling_ready_data_s
{




  zb_uint16_t tunnel_id;





  zb_uint16_t number_of_octets_left;
} __attribute__ ((packed)) zb_zcl_tunneling_ready_data_t;





typedef struct zb_zcl_tunneling_get_supported_tunnel_protocols_s
{




  zb_uint8_t protocol_offset;
} __attribute__ ((packed)) zb_zcl_tunneling_get_supported_tunnel_protocols_t;






typedef struct zb_zcl_tunneling_protocol_field_s
{




  zb_uint16_t manufacturer_code;






  zb_uint8_t protocol_id;
} zb_zcl_tunneling_protocol_field_t;






typedef struct zb_zcl_tunneling_supported_tunnel_protocols_response_s
{




  zb_uint8_t protocol_list_complete;



  zb_uint8_t protocol_count;




  zb_zcl_tunneling_protocol_field_t protocol_list[16];
} __attribute__ ((packed)) zb_zcl_tunneling_supported_tunnel_protocols_response_t;






typedef struct zb_zcl_tunneling_tunnel_closure_notification_s
{



  zb_uint16_t tunnel_id;
} __attribute__ ((packed)) zb_zcl_tunneling_tunnel_closure_notification_t;





typedef struct zb_zcl_tunneling_cli_s
{
  zb_uint16_t tunnel_id;
  zb_uint16_t dst_addr;
  zb_uint8_t dst_ep;
  zb_uint16_t max_incoming_to_cli_transfer_size;
  zb_uint16_t max_outgoing_to_srv_transfer_size;
}
__attribute__ ((packed))
zb_zcl_tunneling_cli_t;

extern zb_zcl_tunneling_cli_t tunneling_cli;
# 1002 "../../../../../../../../external/zboss/include/zcl/zb_zcl_tunneling.h"
zb_void_t zb_zcl_tunneling_init_server(void);
zb_void_t zb_zcl_tunneling_init_client(void);
# 98 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 107 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_grpw_bed_sensor.h" 1
# 47 "../../../../../../../../external/zboss/include/zcl/zb_zcl_grpw_bed_sensor.h"
enum zb_zcl_grpw_bed_sensor_attr_e
{
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_STATUS_ID = 0x0000,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_CALC_DATA_0_ID = 0x0010,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_CALC_DATA_1_ID = 0x0011,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_SENSITIVITY_SETTING = 0x0020,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_CALC_DATA_SEND_INTERVAL = 0x0021,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_CALC_DATA_SEND_MODE = 0x0022,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_EXIT_DETECT_ADD_DELAY = 0x0023,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_OCCUPANCY_DETECT_ALG_SEL = 0x0024,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_TYPE = 0x0025,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_STATUS_REPORT_INTERVAL = 0x0026,
  ZB_ZCL_ATTR_GRPW_BED_SENSOR_COMMANDS_FOR_SENSING_MODULE = 0x0030,
  ZB_ZCL_ATTR_GRPW_BED_PENDING_CONFIGURATION = 0x00F0,
};
# 108 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 1 "../../../../../../../../external/zboss/include/zcl/zb_zcl_grpw_freq_agility.h" 1
# 47 "../../../../../../../../external/zboss/include/zcl/zb_zcl_grpw_freq_agility.h"
enum zb_zcl_grpw_freq_agility_attr_e
{
  ZB_ZCL_ATTR_GRPW_FREQ_AGILITY_BRIDGE_ADDR = 0x0000,
  ZB_ZCL_ATTR_GRPW_FREQ_AGILITY_ACTIVE_CHANNEL_MASK = 0x0001,
};
# 109 "../../../../../../../../external/zboss/include/zboss_api_zcl.h" 2
# 261 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef enum zb_zcl_device_callback_id_e
{

  ZB_ZCL_SET_ATTR_VALUE_CB_ID = 0,

  ZB_ZCL_REPORT_ATTR_CB_ID,

  ZB_ZCL_NO_REPORTING_CB_ID,

  ZB_ZCL_ON_OFF_WITH_EFFECT_VALUE_CB_ID,


  ZB_ZCL_SHADE_SET_VALUE_CB_ID,


  ZB_ZCL_SHADE_GET_VALUE_CB_ID,

  ZB_ZCL_IDENTIFY_EFFECT_CB_ID,

  ZB_ZCL_LEVEL_CONTROL_SET_VALUE_CB_ID,

  ZB_ZCL_IAS_ZONE_ENROLL_RESPONSE_VALUE_CB_ID,

  ZB_ZCL_IAS_WD_START_WARNING_VALUE_CB_ID,

  ZB_ZCL_IAS_WD_SQUAWK_VALUE_CB_ID,
# 300 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_ARM_CB_ID,
# 314 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_BYPASS_CB_ID,
# 325 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_EMERGENCY_CB_ID,
# 336 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_FIRE_CB_ID,
# 347 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_PANIC_CB_ID,
# 360 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_PANEL_STATUS_CB_ID,
# 373 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_BYPASSED_ZONE_LIST_CB_ID,
# 387 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_ZONE_STATUS_CB_ID,
# 399 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_ARM_RESP_CB_ID,
# 411 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_ZONE_ID_MAP_RESP_CB_ID,
# 423 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_ZONE_INFO_RESP_CB_ID,
# 435 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_ZONE_STATUS_CHANGED_CB_ID,
# 447 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_PANEL_STATUS_CHANGED_CB_ID,
# 459 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_PANEL_STATUS_RESP_CB_ID,
# 471 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_SET_BYPASSED_ZONE_LIST_CB_ID,
# 483 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_BYPASS_RESP_CB_ID,
# 495 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_IAS_ACE_GET_ZONE_STATUS_RESP_CB_ID,

  ZB_ZCL_OTA_UPGRADE_VALUE_CB_ID,

  ZB_ZCL_BASIC_RESET_CB_ID,

  ZB_ZCL_THERMOSTAT_VALUE_CB_ID,

  ZB_ZCL_POLL_CONTROL_CHECK_IN_CLI_CB_ID,
# 515 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_GET_ALERTS_CB_ID,
# 526 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_GET_ALERTS_RESP_CB_ID,
# 538 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_ALERTS_NOTIFICATION_CB_ID,
# 548 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_EN50523_APPL_EV_AND_ALERTS_EVENT_NOTIFICATION_CB_ID,

  ZB_ZCL_OTA_UPGRADE_SRV_QUERY_IMAGE_CB_ID,

  ZB_ZCL_OTA_UPGRADE_SRV_UPGRADE_END_CB_ID,
# 566 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_GET_CURRENT_PRICE_CB_ID,
# 578 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_GET_SCHEDULED_PRICES_CB_ID,
# 592 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_GET_TIER_LABELS_CB_ID,
# 606 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_PUBLISH_PRICE_CB_ID,
# 618 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_PUBLISH_TIER_LABELS_CB_ID,
# 630 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_PRICE_PRICE_ACK_CB_ID,
# 641 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DRLC_REPORT_EVENT_STATUS_CB_ID,
# 654 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DRLC_GET_SCHEDULED_EVENTS_CB_ID,
# 669 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DRLC_LOAD_CONTROL_EVENT_CB_ID,
# 684 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DRLC_CANCEL_LOAD_CONTROL_EVENT_CB_ID,
# 698 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DRLC_CANCEL_ALL_LOAD_CONTROL_EVENTS_CB_ID,
# 709 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_MESSAGING_MSG_CONFIRMATION_CB_ID,
# 722 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_MESSAGING_GET_LAST_MSG_CB_ID,
# 733 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_MESSAGING_CANCEL_MSG_CB_ID,
# 744 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_MESSAGING_DISPLAY_MSG_CB_ID,
# 756 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_REQUEST_TUNNEL_CB_ID,
# 767 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_REQUEST_TUNNEL_RESPONSE_CB_ID,
# 779 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_TRANSFER_DATA_CLI_CB_ID,
# 791 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_TRANSFER_DATA_SRV_CB_ID,
# 802 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_TRANSFER_DATA_ERROR_CLI_CB_ID,
# 813 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_TRANSFER_DATA_ERROR_SRV_CB_ID,
# 826 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_TUNNELING_CLOSE_TUNNEL_CB_ID,
# 840 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_GET_PROFILE_CB_ID,
# 854 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_REQUEST_FAST_POLL_MODE_CB_ID,
# 868 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_GET_SNAPSHOT_CB_ID,
# 883 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_GET_SAMPLED_DATA_CB_ID,
# 895 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_GET_PROFILE_RESPONSE_CB_ID,
# 907 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_REQUEST_FAST_POLL_MODE_RESPONSE_CB_ID,
# 919 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_PUBLISH_SNAPSHOT_CB_ID,
# 931 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_METERING_GET_SAMPLED_DATA_RESPONSE_CB_ID,

  ZB_ZCL_BIG_DATA_TRANSFER_COMPLETE_CB_ID,

  ZB_ZCL_TIME_SYNC_CB_ID,
  ZB_ZCL_TIME_SYNC_FAILED_CB_ID,
# 947 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_WINDOW_COVERING_UP_OPEN_CB_ID,
# 958 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_WINDOW_COVERING_DOWN_CLOSE_CB_ID,
# 969 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_WINDOW_COVERING_STOP_CB_ID,
# 981 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_WINDOW_COVERING_GO_TO_LIFT_PERCENTAGE_CB_ID,
# 993 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_WINDOW_COVERING_GO_TO_TILT_PERCENTAGE_CB_ID,
# 1012 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_ADD_SCENE_CB_ID,
# 1030 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_STORE_SCENE_CB_ID,
# 1044 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_VIEW_SCENE_CB_ID,
# 1060 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_REMOVE_SCENE_CB_ID,
# 1076 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_REMOVE_ALL_SCENES_CB_ID,
# 1088 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_RECALL_SCENE_CB_ID,
# 1102 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_GET_SCENE_MEMBERSHIP_CB_ID,
# 1115 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_INTERNAL_REMOVE_ALL_SCENES_ALL_ENDPOINTS_CB_ID,
# 1127 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_SCENES_INTERNAL_REMOVE_ALL_SCENES_ALL_ENDPOINTS_ALL_GROUPS_CB_ID,
# 1140 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DOOR_LOCK_LOCK_DOOR_CB_ID,
# 1153 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DOOR_LOCK_UNLOCK_DOOR_CB_ID,
# 1165 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DOOR_LOCK_LOCK_DOOR_RESP_CB_ID,
# 1177 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_DOOR_LOCK_UNLOCK_DOOR_RESP_CB_ID,
# 1189 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_ALARMS_RESET_ALARM_CB_ID,
# 1200 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_ALARMS_RESET_ALL_ALARMS_CB_ID,
# 1212 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_ZCL_ALARMS_ALARM_CB_ID,

} zb_zcl_device_callback_id_t;



typedef struct zb_zcl_device_cmd_generic_param_s
{



  const zb_zcl_parsed_hdr_t *in_cmd_info;


  const zb_void_t *in;





  zb_void_t *out;
} zb_zcl_device_cmd_generic_param_t;







typedef struct zb_zcl_device_callback_param_s
{

  zb_zcl_device_callback_id_t device_cb_id;
  zb_uint8_t endpoint;
  zb_zcl_attr_access_t attr_type;

  zb_ret_t status;

  union
  {
    zb_zcl_set_attr_value_param_t set_attr_value_param;

    zb_zcl_on_off_set_effect_value_param_t on_off_set_effect_value_param;

    zb_zcl_identify_effect_value_param_t identify_effect_value_param;

   zb_zcl_shade_set_value_param_t shade_set_value_param;

   zb_zcl_shade_get_value_param_t shade_get_value_param;

   zb_zcl_level_control_set_value_param_t level_control_set_value_param;

   zb_zcl_ias_wd_start_warning_value_param_t start_warning_value_param;


   zb_zcl_ias_zone_enroll_response_value_param_t enroll_response_value_param;

   zb_zcl_thermostat_value_param_t thermostat_value_param;


   zb_zcl_ias_wd_squawk_value_param_t squawk_value_param;



   zb_zcl_ota_upgrade_value_param_t ota_value_param;

   zb_zcl_poll_control_check_in_cli_param_t checkin_cli_param;

   zb_zcl_ota_upgrade_srv_query_img_param_t ota_upgrade_srv_query_img_param;
   zb_zcl_ota_upgrade_srv_upgrade_end_param_t ota_upgrade_srv_upgrade_end_param;


    zb_zcl_device_cmd_generic_param_t gnr;
  }
  cb_param;
} zb_zcl_device_callback_param_t;
# 1358 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_uint8_t zb_zcl_handle(zb_uint8_t param);





zb_uint8_t zb_zcl_get_tsn_from_packet(zb_buf_t *buffer);







void zb_zcl_register_device_ctx(zb_af_device_ctx_t *device_ctx);
zb_bool_t zb_zcl_check_cluster_list(void);
# 1396 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
enum zb_bdb_error_codes_e
{
  ZB_BDB_STATUS_SUCCESS = 0,
# 1426 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
  ZB_BDB_STATUS_IN_PROGRESS,
  ZB_BDB_STATUS_NOT_AA_CAPABLE,
  ZB_BDB_STATUS_NO_NETWORK,
  ZB_BDB_STATUS_TARGET_FAILURE,
  ZB_BDB_STATUS_FORMATION_FAILURE,
  ZB_BDB_STATUS_NO_IDENTIFY_QUERY_RESPONSE,
  ZB_BDB_STATUS_BINDING_TABLE_FULL,
  ZB_BDB_STATUS_NO_SCAN_RESPONSE,
  ZB_BDB_STATUS_NOT_PERMITTED,
  ZB_BDB_STATUS_TCLK_EX_FAILURE
};
# 1445 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef enum zb_bdb_commissioning_mode_mask_e
{


  ZB_BDB_INITIALIZATION = 0,





  ZB_BDB_TOUCHLINK_COMMISSIONING = 1,





  ZB_BDB_NETWORK_STEERING = 2,



  ZB_BDB_NETWORK_FORMATION = 4,






  ZB_BDB_FINDING_N_BINDING = 8,


  ZB_BDB_LAST_COMMISSIONING_STEP = 0x10,

  ZB_BDB_COMMISSIONING_STOP = 0x20,



  ZB_BDB_TOUCHLINK_TARGET = 0x40,


} zb_bdb_commissioning_mode_mask_t;
# 1516 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_bool_t bdb_start_top_level_commissioning(zb_uint8_t mode_mask);
# 1530 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_bool_t zb_bdb_is_factory_new(void);
# 1551 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_ret_t zb_bdb_finding_binding_target(zb_uint8_t endpoint);





typedef enum zb_bdb_comm_binding_cb_state_e
{

  ZB_BDB_COMM_BIND_SUCCESS = 0,

  ZB_BDB_COMM_BIND_FAIL = 1,

  ZB_BDB_COMM_BIND_ASK_USER = 2,
} zb_bdb_comm_binding_cb_state_t;
# 1582 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef zb_bool_t ( * zb_bdb_comm_binding_callback_t)(
  zb_int16_t status, zb_ieee_addr_t addr, zb_uint8_t ep, zb_uint16_t cluster);
# 1600 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_ret_t zb_bdb_finding_binding_initiator(zb_uint8_t endpoint, zb_bdb_comm_binding_callback_t user_binding_cb);


void zb_bdb_finding_binding_target_cancel(void);


void zb_bdb_finding_binding_initiator_cancel(void);
# 1619 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_void_t zb_set_bdb_primary_channel_set(zb_uint32_t channel_mask);




zb_uint32_t zb_get_bdb_primary_channel_set(void);







zb_void_t zb_set_bdb_secondary_channel_set(zb_uint32_t channel_mask);





zb_uint32_t zb_get_bdb_secondary_channel_set(void);






zb_void_t zb_bdb_set_legacy_device_support(zb_uint8_t state);
# 1659 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
zb_void_t zb_set_bdb_commissioning_mode(zb_uint8_t commissioning_mode);
# 1680 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef enum zb_bdb_comm_state_e
{

  ZB_BDB_COMM_IDLE = 0,

  ZB_BDB_COMM_FACTORY_RESET = 1,

  ZB_BDB_COMM_NWK_STEERING = 2,

  ZB_BDB_COMM_NWK_STEERING_JOINED = 3,

  ZB_BDB_COMM_FINDING_AND_BINDING = 4,

  ZB_BDB_COMM_FINDING_AND_BINDING_TARGET = 5,
}
  zb_bdb_comm_state_t;


typedef struct zb_bdb_comm_respondent_info_s
{

  zb_address_ieee_ref_t addr_ref;

  zb_uint8_t ep_list[4];

  zb_uint8_t ep_cnt;

  zb_uint8_t eps_checked;
} __attribute__ ((packed)) zb_bdb_comm_respondent_info_t;




typedef struct zb_bdb_comm_ctx_s
{

  zb_bdb_comm_state_t state;
  zb_ret_t status;

  zb_callback_t user_cb;

  zb_bdb_comm_binding_callback_t finding_binding_progress_cb;



  zb_uint16_t duration;

  zb_bdb_comm_respondent_info_t respondent[4];
  zb_uint8_t respondent_number;

  zb_uint8_t ep;

  zb_af_endpoint_desc_t *ep_desc;

  zb_uint8_t ep_cnt;



  zb_bool_t was_bound;

  zb_bool_t ez_scan_inprogress;

  zb_uint8_t simple_desc_buf_ref;
} __attribute__ ((packed)) zb_bdb_comm_ctx_t;
# 1755 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef struct zcl_cluster_handlers_s
{
  zb_uint16_t cluster_id;
  zb_uint8_t cluster_role;
  zb_zcl_cluster_handler_t cluster_handler;
  zb_zcl_cluster_check_value_t cluster_check_value;
  zb_zcl_cluster_write_attr_hook_t cluster_write_attr_hook;
} zcl_cluster_handlers_t;





typedef struct zb_discover_cmd_list
{
  zb_uint8_t received_cnt;
  zb_uint8_t *received;
  zb_uint8_t generated_cnt;
  zb_uint8_t *generated;
} zb_discover_cmd_list_t;


typedef struct zb_zcl_globals_s
{

  zb_uint8_t seq_number;



  zb_buf_t *runtime_buf;


  zb_af_device_ctx_t *device_ctx;


  zb_af_device_ctx_t *device_ctx_arr[2];

  zcl_cb_hash_ent_t zcl_cb[16];

  zb_zcl_modify_attr_value_cb_t modify_attr_value_cb;

  zb_zcl_report_attr_cb_t report_attr_cb;


  zb_zcl_no_reporting_cb_t no_reporting_cb;

  zb_callback_t device_cb;
  zb_callback_t checkin_cb;

  zb_zcl_reporting_ctx_t reporting_ctx;

  zb_zcl_set_default_value_attr_cb_t set_default_attr_cb;

  zb_zcl_app_check_attr_value_cb_t app_check_attr_value_cb;

  zb_zcl_ota_upgrade_next_data_ind_t ota_upgrade_next_data_ind_cb;


  zb_zcl_ota_upgrade_cli_ctx_t ota_cli;



  zb_bdb_comm_ctx_t bdb_comm_ctx;






  zb_zcl_disc_manuf_cmd_cb_t disc_manuf_cmd_cb;


  zcl_cluster_handlers_t zcl_handlers[20];
  zb_uint8_t zcl_handlers_cnt;
  zb_discover_cmd_list_t *zb_zcl_cluster_cmd_list;
} zb_zcl_globals_t;





zb_zcl_globals_t *zb_zcl_get_ctx(void);
# 1847 "../../../../../../../../external/zboss/include/zboss_api_zcl.h"
typedef zb_uint8_t *(*zb_zcl_put_payload_cb_t)(zb_uint8_t *, const zb_void_t *);

zb_void_t zb_zcl_send_cmd(
  zb_uint8_t param,
  const zb_addr_u *dst_addr,
  zb_aps_addr_mode_t dst_addr_mode,
  zb_uint8_t dst_ep,
  zb_zcl_frame_direction_t direction,
  zb_uint8_t src_ep,
  const zb_void_t *payload,
  zb_uint8_t payload_size,
  zb_zcl_put_payload_cb_t put_payload,
  zb_zcl_cluster_id_t cluster_id,
  zb_zcl_disable_default_response_t def_resp,
  zb_uint16_t cmd_id,
  zb_callback_t cb
);

zb_bool_t zb_zcl_send_default_handler(zb_uint8_t param,
  const zb_zcl_parsed_hdr_t *cmd_info, zb_zcl_status_t status);
# 54 "../../../../../../../../external/zboss/include/zboss_api.h" 2
# 75 "../../../../../../../../external/zboss/include/zboss_api.h"
void zb_secur_setup_nwk_key(zb_uint8_t *key, zb_uint8_t i);
# 94 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zb_secur_ic_add(zb_ieee_addr_t address, zb_uint8_t *ic);
# 108 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zb_secur_ic_remove(zb_ieee_addr_t address);
# 120 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zb_secur_ic_set(zb_uint8_t *ic);






void zb_set_installcode_policy(zb_bool_t allow_ic_only);
# 142 "../../../../../../../../external/zboss/include/zboss_api.h"
void since_you_got_that_symbol_unresolved_you_probably_use_ZB_ED_ROLE_preprocessor_define_while_linking_with_zc_library(void);
# 189 "../../../../../../../../external/zboss/include/zboss_api.h"
void zb_init(void);
# 206 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_set_channel(zb_uint32_t channel_mask);
# 219 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zb_set_tx_power(zb_uint8_t tx_power);
# 232 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_set_rx_on_when_idle(zb_bool_t rx_on);
# 246 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_bool_t zb_get_rx_on_when_idle(void);
# 271 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zboss_start(void);
# 282 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_char_t *zb_get_version(void);
# 305 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zboss_start_no_autostart(void);
# 316 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zboss_start_in_sniffer_mode(void);
# 326 "../../../../../../../../external/zboss/include/zboss_api.h"
void zboss_sniffer_start(zb_uint8_t channel, zb_callback_t data_ind_cb);






void zboss_sniffer_stop(void);
# 345 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_bool_t zb_zdo_joined(void);
# 367 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zboss_main_loop(void);
# 381 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zboss_main_loop_iteration(void);
# 393 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_set_long_address(const zb_ieee_addr_t addr);
# 406 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_get_long_address(zb_ieee_addr_t addr);
# 417 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_set_extended_pan_id(const zb_ext_pan_id_t ext_pan_id);
# 430 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_get_extended_pan_id(zb_ext_pan_id_t ext_pan_id);
# 441 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zb_set_node_descriptor_manufacturer_code(zb_uint16_t manuf_code);





void zb_set_network_coordinator_role(zb_uint32_t channel_mask);




void zb_set_network_coordinator_role_legacy(zb_uint32_t channel_mask);





void zb_set_network_router_role(zb_uint32_t channel_mask);




void zb_set_network_router_role_legacy(zb_uint32_t channel_mask);





void zb_set_network_ed_role(zb_uint32_t channel_mask);
# 481 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_nwk_device_type_t zb_get_network_role(void);
# 493 "../../../../../../../../external/zboss/include/zboss_api.h"
void zb_set_network_ed_role_legacy(zb_uint32_t channel_mask);






zb_void_t zb_set_max_children(zb_uint8_t max_children);





typedef enum nwk_requested_timeout_e
{
  ED_AGING_TIMEOUT_10SEC = 0,
  ED_AGING_TIMEOUT_2MIN,
  ED_AGING_TIMEOUT_4MIN,
  ED_AGING_TIMEOUT_8MIN,
  ED_AGING_TIMEOUT_16MIN,
  ED_AGING_TIMEOUT_32MIN,
  ED_AGING_TIMEOUT_64MIN,
  ED_AGING_TIMEOUT_128MIN,
  ED_AGING_TIMEOUT_256MIN,
  ED_AGING_TIMEOUT_512MIN,
  ED_AGING_TIMEOUT_1024MIN,
  ED_AGING_TIMEOUT_2048MIN,
  ED_AGING_TIMEOUT_4096MIN,
  ED_AGING_TIMEOUT_8192MIN,
  ED_AGING_TIMEOUT_16384MIN
} nwk_requested_timeout_t;







void zb_set_ed_timeout(zb_uint_t to);







void zb_set_keepalive_timeout(zb_uint_t to);
# 561 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_void_t zboss_signal_handler(zb_uint8_t param);
# 585 "../../../../../../../../external/zboss/include/zboss_api.h"
typedef enum zb_nvram_dataset_types_e
{

  ZB_NVRAM_RESERVED = 0,
  ZB_NVRAM_COMMON_DATA = 1,
  ZB_NVRAM_HA_DATA = 2,
  ZB_NVRAM_ZCL_REPORTING_DATA = 3,






  ZB_NVRAM_APS_SECURE_DATA_GAP = 4,
  ZB_NVRAM_APS_BINDING_DATA_GAP = 5,
  ZB_NVRAM_HA_POLL_CONTROL_DATA = 6,
  ZB_IB_COUNTERS = 7,
  ZB_NVRAM_DATASET_GRPW_DATA = 8,
  ZB_NVRAM_APP_DATA1 = 9,
  ZB_NVRAM_APP_DATA2 = 10,
  ZB_NVRAM_ADDR_MAP = 11,
  ZB_NVRAM_NEIGHBOUR_TBL = 12,
  ZB_NVRAM_INSTALLCODES = 13,
  ZB_NVRAM_APS_SECURE_DATA = 14,
  ZB_NVRAM_APS_BINDING_DATA = 15,
  ZB_NVRAM_DATASET_GP_PRPOXYT = 16,
  ZB_NVRAM_DATASET_GP_SINKT = 17,
  ZB_NVRAM_DATASET_GP_CLUSTER = 18,
  ZB_NVRAM_APS_GROUPS_DATA = 19,
  ZB_NVRAM_DATASET_NUMBER,
  ZB_NVRAM_DATA_SET_TYPE_PAGE_HDR = 0x1e
} zb_nvram_dataset_types_t;
# 626 "../../../../../../../../external/zboss/include/zboss_api.h"
typedef void (*zb_nvram_read_app_data_t)(zb_uint8_t page, zb_uint32_t pos, zb_uint16_t payload_length);
# 635 "../../../../../../../../external/zboss/include/zboss_api.h"
typedef zb_ret_t (*zb_nvram_write_app_data_t)(zb_uint8_t page, zb_uint32_t pos);





typedef zb_uint16_t (*zb_nvram_get_app_data_size_t)(void);






void zb_nvram_register_app1_read_cb(zb_nvram_read_app_data_t cb);





void zb_nvram_register_app2_read_cb(zb_nvram_read_app_data_t cb);







void zb_nvram_register_app1_write_cb(
    zb_nvram_write_app_data_t wcb,
    zb_nvram_get_app_data_size_t gcb);







void zb_nvram_register_app2_write_cb(
    zb_nvram_write_app_data_t wcb,
    zb_nvram_get_app_data_size_t gcb);
# 703 "../../../../../../../../external/zboss/include/zboss_api.h"
void zb_nvram_write_dataset(zb_nvram_dataset_types_t t);




void zb_nvram_clear(void);






zb_void_t zb_set_nvram_erase_at_start(zb_bool_t erase);







void zb_nvram_transaction_start(void);







void zb_nvram_transaction_commit(void);






typedef struct zb_production_config_hdr_t
{
  zb_uint32_t crc;
  zb_uint16_t len;
  zb_uint16_t version;
}
__attribute__ ((packed)) zb_production_config_hdr_t;

typedef struct zb_production_config_s
{
  zb_production_config_hdr_t hdr;
  zb_uint32_t aps_channel_mask;
  zb_64bit_addr_t extended_address;
  zb_int8_t mac_tx_power[16];
  zb_uint8_t install_code[16 +2];
}
__attribute__ ((packed)) zb_production_config_t;
# 781 "../../../../../../../../external/zboss/include/zboss_api.h"
zb_ret_t zb_sleep_set_threshold(zb_uint32_t threshold_ms);





zb_uint32_t zb_get_sleep_threshold(void);





zb_void_t zb_sleep_now(void);
# 50 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 2
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 1
# 47 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h"
       
# 48 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 3


# 1 "../../../../../../../../modules/nrfx/mdk/nrf.h" 1 3
# 102 "../../../../../../../../modules/nrfx/mdk/nrf.h" 3
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 1 3
# 78 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3

# 78 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  POWER_CLOCK_IRQn = 0,
  RADIO_IRQn = 1,
  UARTE0_UART0_IRQn = 2,
  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn= 3,
  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn= 4,
  NFCT_IRQn = 5,
  GPIOTE_IRQn = 6,
  SAADC_IRQn = 7,
  TIMER0_IRQn = 8,
  TIMER1_IRQn = 9,
  TIMER2_IRQn = 10,
  RTC0_IRQn = 11,
  TEMP_IRQn = 12,
  RNG_IRQn = 13,
  ECB_IRQn = 14,
  CCM_AAR_IRQn = 15,
  WDT_IRQn = 16,
  RTC1_IRQn = 17,
  QDEC_IRQn = 18,
  COMP_LPCOMP_IRQn = 19,
  SWI0_EGU0_IRQn = 20,
  SWI1_EGU1_IRQn = 21,
  SWI2_EGU2_IRQn = 22,
  SWI3_EGU3_IRQn = 23,
  SWI4_EGU4_IRQn = 24,
  SWI5_EGU5_IRQn = 25,
  TIMER3_IRQn = 26,
  TIMER4_IRQn = 27,
  PWM0_IRQn = 28,
  PDM_IRQn = 29,
  MWU_IRQn = 32,
  PWM1_IRQn = 33,
  PWM2_IRQn = 34,
  SPIM2_SPIS2_SPI2_IRQn = 35,
  RTC2_IRQn = 36,
  I2S_IRQn = 37,
  FPU_IRQn = 38,
  USBD_IRQn = 39,
  UARTE1_IRQn = 40,
  QSPI_IRQn = 41,
  CRYPTOCELL_IRQn = 42,
  PWM3_IRQn = 45,
  SPIM3_IRQn = 47
} IRQn_Type;
# 156 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 1 3
# 44 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 1 3 4
# 47 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 3 4
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
# 68 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 3 4
typedef signed long long int64_t;
typedef unsigned long long uint64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int32_t int_fast8_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint32_t uint_fast8_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
# 118 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 3 4
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
# 45 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2 3
# 210 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 1 3
# 61 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 3
# 1 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 1 3
# 40 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 58 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}
# 134 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp\n" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0\n" : : "r" (topOfProcStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp\n" : "=r" (result) );
  return(result);
}
# 188 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0\n" : : "r" (topOfMainStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 226 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_BASEPRI(uint32_t value)
{
  __asm volatile ("MSR basepri, %0" : : "r" (value) : "memory");
}
# 274 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline void __set_BASEPRI_MAX(uint32_t value)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (value) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 314 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline uint32_t __get_FPSCR(void)
{

  uint32_t result;


  __asm volatile ("");
  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  __asm volatile ("");
  return(result);



}







__attribute__( ( always_inline ) ) static inline void __set_FPSCR(uint32_t fpscr)
{


  __asm volatile ("");
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc");
  __asm volatile ("");

}
# 373 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __NOP(void)
{
  __asm volatile ("nop");
}






__attribute__((always_inline)) static inline void __WFI(void)
{
  __asm volatile ("wfi");
}







__attribute__((always_inline)) static inline void __WFE(void)
{
  __asm volatile ("wfe");
}






__attribute__((always_inline)) static inline void __SEV(void)
{
  __asm volatile ("sev");
}
# 416 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 450 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 469 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 484 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 504 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 526 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;


   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 544 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
  return(result);
}
# 565 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 587 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 609 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 626 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 643 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 660 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 716 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 731 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 753 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 775 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 790 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *addr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 802 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *addr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 814 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *addr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*addr) : "r" (value) );
}
# 832 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1152 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 1357 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 3
__attribute__( ( always_inline ) ) static inline uint32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}






#pragma GCC diagnostic pop
# 62 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 2 3
# 211 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2 3
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmFunc.h" 1 3
# 212 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2 3
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmSimd.h" 1 3
# 213 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2 3
# 308 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 347 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 365 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 416 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 451 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RSERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 485 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 704 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 744 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 796 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1202 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1297 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1404 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1596 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}







static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1650 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}







static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1685 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}
# 1698 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) < 0)
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 1720 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) < 0)
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] >> (8U - 3)));
  }
}
# 1745 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1772 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}






static inline void NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for (;;)
  {
    __NOP();
  }
}
# 1830 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 1860 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
extern volatile int32_t ITM_RxBuffer;
# 1872 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __NOP();
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 1893 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != 0x5AA55AA5U)
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = 0x5AA55AA5U;
  }

  return (ch);
}
# 1913 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 3
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == 0x5AA55AA5U)
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 157 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 2 3
# 1 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h" 1 3
# 33 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h" 3
extern uint32_t SystemCoreClock;
# 44 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h" 3
extern void SystemInit (void);
# 55 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h" 3
extern void SystemCoreClockUpdate (void);
# 158 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 2 3
# 208 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;
  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
} FICR_INFO_Type;





typedef struct {
  volatile const uint32_t A0;
  volatile const uint32_t A1;
  volatile const uint32_t A2;
  volatile const uint32_t A3;
  volatile const uint32_t A4;
  volatile const uint32_t A5;
  volatile const uint32_t B0;
  volatile const uint32_t B1;
  volatile const uint32_t B2;
  volatile const uint32_t B3;
  volatile const uint32_t B4;
  volatile const uint32_t B5;
  volatile const uint32_t T0;
  volatile const uint32_t T1;
  volatile const uint32_t T2;
  volatile const uint32_t T3;
  volatile const uint32_t T4;
} FICR_TEMP_Type;





typedef struct {
  volatile const uint32_t TAGHEADER0;


  volatile const uint32_t TAGHEADER1;


  volatile const uint32_t TAGHEADER2;


  volatile const uint32_t TAGHEADER3;


} FICR_NFC_Type;





typedef struct {
  volatile const uint32_t BYTES;
  volatile const uint32_t RCCUTOFF;
  volatile const uint32_t APCUTOFF;
  volatile const uint32_t STARTUP;
  volatile const uint32_t ROSC1;
  volatile const uint32_t ROSC2;
  volatile const uint32_t ROSC3;
  volatile const uint32_t ROSC4;
} FICR_TRNG90B_Type;





typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;
  volatile uint32_t POWERCLR;

  volatile const uint32_t RESERVED;
} POWER_RAM_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UART_PSEL_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPI_PSEL_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
  volatile uint32_t CSN;
} SPIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;





typedef struct {
  volatile uint32_t RXDELAY;
  volatile uint32_t CSNDUR;


} SPIM_IFTIMING_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWI_PSEL_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_TXD_Type;





typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;





typedef struct {
  volatile uint32_t PSELP;

  volatile uint32_t PSELN;

  volatile uint32_t CONFIG;

  volatile uint32_t LIMIT;

} SAADC_CH_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;





typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t CNT;

  volatile uint32_t REFRESH;


  volatile uint32_t ENDDELAY;
  volatile const uint32_t RESERVED[4];
} PWM_SEQ_Type;





typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;





typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t MAXCNT;

} PDM_SAMPLE_Type;





typedef struct {
  volatile uint32_t ADDR;

  volatile uint32_t SIZE;


  volatile uint32_t PERM;


  volatile const uint32_t RESERVED;
} ACL_ACL_Type;





typedef struct {
  volatile uint32_t EN;
  volatile uint32_t DIS;
} PPI_TASKS_CHG_Type;





typedef struct {
  volatile uint32_t EEP;
  volatile uint32_t TEP;
} PPI_CH_Type;





typedef struct {
  volatile uint32_t TEP;
} PPI_FORK_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_REGION_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_PREGION_Type;





typedef struct {
  volatile uint32_t SUBSTATWA;



  volatile uint32_t SUBSTATRA;



} MWU_PERREGION_Type;





typedef struct {
  volatile uint32_t START;

  volatile uint32_t END;
  volatile const uint32_t RESERVED[2];
} MWU_REGION_Type;





typedef struct {
  volatile const uint32_t START;
  volatile const uint32_t END;
  volatile uint32_t SUBS;
  volatile const uint32_t RESERVED;
} MWU_PREGION_Type;





typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
} I2S_CONFIG_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;





typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;





typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;





typedef struct {
  volatile const uint32_t EPIN[8];


  volatile const uint32_t RESERVED;
  volatile const uint32_t EPOUT[8];


} USBD_HALTED_Type;





typedef struct {
  volatile uint32_t EPOUT[8];

  volatile const uint32_t ISOOUT;

} USBD_SIZE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPOUT_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOOUT_Type;





typedef struct {
  volatile uint32_t SRC;
  volatile uint32_t DST;
  volatile uint32_t CNT;
} QSPI_READ_Type;





typedef struct {
  volatile uint32_t DST;
  volatile uint32_t SRC;
  volatile uint32_t CNT;
} QSPI_WRITE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t LEN;
} QSPI_ERASE_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t CSN;
  volatile const uint32_t RESERVED;
  volatile uint32_t IO0;
  volatile uint32_t IO1;
  volatile uint32_t IO2;
  volatile uint32_t IO3;
} QSPI_PSEL_Type;
# 897 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t RESERVED1[18];
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t RESERVED2[6];
  volatile const uint32_t ER[4];

  volatile const uint32_t IR[4];
  volatile const uint32_t DEVICEADDRTYPE;
  volatile const uint32_t DEVICEADDR[2];
  volatile const uint32_t RESERVED3[21];
  volatile const FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED4[143];
  volatile const uint32_t PRODTEST[3];

  volatile const uint32_t RESERVED5[42];
  volatile const FICR_TEMP_Type TEMP;

  volatile const uint32_t RESERVED6[2];
  volatile FICR_NFC_Type NFC;
  volatile const uint32_t RESERVED7[488];
  volatile FICR_TRNG90B_Type TRNG90B;
} NRF_FICR_Type;
# 934 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t NRFFW[15];

  volatile uint32_t NRFHW[12];

  volatile uint32_t CUSTOMER[32];
  volatile const uint32_t RESERVED1[64];
  volatile uint32_t PSELRESET[2];

  volatile uint32_t APPROTECT;
  volatile uint32_t NFCPINS;

  volatile uint32_t DEBUGCTRL;
  volatile const uint32_t RESERVED2[60];
  volatile uint32_t REGOUT0;

} NRF_UICR_Type;
# 964 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;
  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile uint32_t TASKS_CTSTART;
  volatile uint32_t TASKS_CTSTOP;
  volatile const uint32_t RESERVED[57];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED1;
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_CTTO;
  volatile const uint32_t RESERVED2[5];
  volatile uint32_t EVENTS_CTSTARTED;

  volatile uint32_t EVENTS_CTSTOPPED;

  volatile const uint32_t RESERVED3[117];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[63];
  volatile const uint32_t HFCLKRUN;

  volatile const uint32_t HFCLKSTAT;
  volatile const uint32_t RESERVED5;
  volatile const uint32_t LFCLKRUN;

  volatile const uint32_t LFCLKSTAT;
  volatile const uint32_t LFCLKSRCCOPY;

  volatile const uint32_t RESERVED6[62];
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED7[3];
  volatile uint32_t HFXODEBOUNCE;

  volatile const uint32_t RESERVED8[3];
  volatile uint32_t CTIV;
  volatile const uint32_t RESERVED9[8];
  volatile uint32_t TRACECONFIG;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t LFRCMODE;
} NRF_CLOCK_Type;
# 1020 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[34];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile uint32_t EVENTS_USBDETECTED;
  volatile uint32_t EVENTS_USBREMOVED;
  volatile uint32_t EVENTS_USBPWRRDY;
  volatile const uint32_t RESERVED3[119];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED5[9];
  volatile const uint32_t RAMSTATUS;
  volatile const uint32_t RESERVED6[3];
  volatile const uint32_t USBREGSTATUS;
  volatile const uint32_t RESERVED7[49];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t GPREGRET;
  volatile uint32_t GPREGRET2;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t DCDCEN;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DCDCEN0;
  volatile const uint32_t RESERVED12[47];
  volatile const uint32_t MAINREGSTATUS;
  volatile const uint32_t RESERVED13[175];
  volatile POWER_RAM_Type RAM[9];
} NRF_POWER_Type;
# 1069 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[321];
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;


  volatile uint32_t DETECTMODE;

  volatile const uint32_t RESERVED1[118];
  volatile uint32_t PIN_CNF[32];

} NRF_GPIO_Type;
# 1099 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_TXEN;
  volatile uint32_t TASKS_RXEN;
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_RSSISTART;

  volatile uint32_t TASKS_RSSISTOP;
  volatile uint32_t TASKS_BCSTART;
  volatile uint32_t TASKS_BCSTOP;
  volatile uint32_t TASKS_EDSTART;

  volatile uint32_t TASKS_EDSTOP;
  volatile uint32_t TASKS_CCASTART;

  volatile uint32_t TASKS_CCASTOP;
  volatile const uint32_t RESERVED[51];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_ADDRESS;
  volatile uint32_t EVENTS_PAYLOAD;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DISABLED;
  volatile uint32_t EVENTS_DEVMATCH;

  volatile uint32_t EVENTS_DEVMISS;

  volatile uint32_t EVENTS_RSSIEND;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_BCMATCH;
  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_CRCOK;
  volatile uint32_t EVENTS_CRCERROR;
  volatile uint32_t EVENTS_FRAMESTART;
  volatile uint32_t EVENTS_EDEND;


  volatile uint32_t EVENTS_EDSTOPPED;
  volatile uint32_t EVENTS_CCAIDLE;
  volatile uint32_t EVENTS_CCABUSY;
  volatile uint32_t EVENTS_CCASTOPPED;
  volatile uint32_t EVENTS_RATEBOOST;

  volatile uint32_t EVENTS_TXREADY;

  volatile uint32_t EVENTS_RXREADY;

  volatile uint32_t EVENTS_MHRMATCH;
  volatile const uint32_t RESERVED3[3];
  volatile uint32_t EVENTS_PHYEND;


  volatile const uint32_t RESERVED4[36];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t CRCSTATUS;
  volatile const uint32_t RESERVED7;
  volatile const uint32_t RXMATCH;
  volatile const uint32_t RXCRC;
  volatile const uint32_t DAI;
  volatile const uint32_t PDUSTAT;
  volatile const uint32_t RESERVED8[59];
  volatile uint32_t PACKETPTR;
  volatile uint32_t FREQUENCY;
  volatile uint32_t TXPOWER;
  volatile uint32_t MODE;
  volatile uint32_t PCNF0;
  volatile uint32_t PCNF1;
  volatile uint32_t BASE0;
  volatile uint32_t BASE1;
  volatile uint32_t PREFIX0;
  volatile uint32_t PREFIX1;
  volatile uint32_t TXADDRESS;
  volatile uint32_t RXADDRESSES;
  volatile uint32_t CRCCNF;
  volatile uint32_t CRCPOLY;
  volatile uint32_t CRCINIT;
  volatile const uint32_t RESERVED9;
  volatile uint32_t TIFS;
  volatile const uint32_t RSSISAMPLE;
  volatile const uint32_t RESERVED10;
  volatile const uint32_t STATE;
  volatile uint32_t DATAWHITEIV;
  volatile const uint32_t RESERVED11[2];
  volatile uint32_t BCC;
  volatile const uint32_t RESERVED12[39];
  volatile uint32_t DAB[8];

  volatile uint32_t DAP[8];

  volatile uint32_t DACNF;
  volatile uint32_t MHRMATCHCONF;
  volatile uint32_t MHRMATCHMAS;
  volatile const uint32_t RESERVED13;
  volatile uint32_t MODECNF0;
  volatile const uint32_t RESERVED14[3];
  volatile uint32_t SFD;
  volatile uint32_t EDCNT;
  volatile uint32_t EDSAMPLE;
  volatile uint32_t CCACTRL;
  volatile const uint32_t RESERVED15[611];
  volatile uint32_t POWER;
} NRF_RADIO_Type;
# 1217 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_SUSPEND;
  volatile const uint32_t RESERVED1[56];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;
  volatile const uint32_t RESERVED2[4];
  volatile uint32_t EVENTS_TXDRDY;
  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5[46];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED8[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile UART_PSEL_Type PSEL;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED10;
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED11[17];
  volatile uint32_t CONFIG;
} NRF_UART_Type;
# 1265 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[52];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED7[41];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[93];
  volatile uint32_t ERRORSRC;

  volatile const uint32_t RESERVED10[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED13[3];
  volatile UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED14;
  volatile UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 1325 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[66];
  volatile uint32_t EVENTS_READY;
  volatile const uint32_t RESERVED1[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED3;
  volatile SPI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED5;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CONFIG;
} NRF_SPI_Type;
# 1356 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED6[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED7[44];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[61];
  volatile uint32_t STALLSTAT;



  volatile const uint32_t RESERVED10[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile SPIM_RXD_Type RXD;
  volatile SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED14[2];
  volatile SPIM_IFTIMING_Type IFTIMING;
  volatile uint32_t CSNPOL;
  volatile uint32_t PSELDCX;
  volatile uint32_t DCXCNT;
  volatile const uint32_t RESERVED15[19];
  volatile uint32_t ORC;


} NRF_SPIM_Type;
# 1416 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;

  volatile const uint32_t RESERVED1[54];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED4[53];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED7[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED8[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED10[7];
  volatile SPIS_RXD_Type RXD;
  volatile SPIS_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED12[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1462 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_RXDREADY;
  volatile const uint32_t RESERVED4[4];
  volatile uint32_t EVENTS_TXDSENT;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_BB;

  volatile const uint32_t RESERVED7[3];
  volatile uint32_t EVENTS_SUSPENDED;
  volatile const uint32_t RESERVED8[45];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED11[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED12;
  volatile TWI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED13[2];
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED14;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED15[24];
  volatile uint32_t ADDRESS;
} NRF_TWI_Type;
# 1515 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t EVENTS_SUSPENDED;


  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;

  volatile const uint32_t RESERVED7[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[5];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile TWIM_RXD_Type RXD;
  volatile TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED14[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1572 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[51];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED7[37];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;

  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[9];
  volatile TWIS_RXD_Type RXD;
  volatile TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED13[13];
  volatile uint32_t ADDRESS[2];
  volatile const uint32_t RESERVED14;
  volatile uint32_t CONFIG;

  volatile const uint32_t RESERVED15[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1629 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;

  volatile uint32_t TASKS_STARTTX;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[53];
  volatile uint32_t EVENTS_READY;

  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;

  volatile uint32_t EVENTS_TXFRAMEEND;

  volatile uint32_t EVENTS_RXFRAMESTART;

  volatile uint32_t EVENTS_RXFRAMEEND;


  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_RXERROR;


  volatile uint32_t EVENTS_ENDRX;

  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED6[43];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED7[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED9;
  volatile NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t NFCTAGSTATE;
  volatile const uint32_t RESERVED10[3];
  volatile const uint32_t SLEEPSTATE;
  volatile const uint32_t RESERVED11[6];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED12[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;

  volatile uint32_t MAXLEN;

  volatile NFCT_TXD_Type TXD;
  volatile NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED13[26];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile uint32_t AUTOCOLRESCONFIG;


  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 1719 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_OUT[8];


  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_SET[8];


  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];


  volatile const uint32_t RESERVED2[32];
  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED3[23];
  volatile uint32_t EVENTS_PORT;

  volatile const uint32_t RESERVED4[97];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[129];
  volatile uint32_t CONFIG[8];

} NRF_GPIOTE_Type;
# 1756 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_SAMPLE;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;



  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  volatile SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED1[106];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED4[3];
  volatile SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED5[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;



  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED6[12];
  volatile SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 1805 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED[11];
  volatile uint32_t TASKS_CAPTURE[6];

  volatile const uint32_t RESERVED1[58];
  volatile uint32_t EVENTS_COMPARE[6];

  volatile const uint32_t RESERVED2[42];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED5;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CC[6];

} NRF_TIMER_Type;
# 1843 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED1[14];
  volatile uint32_t EVENTS_COMPARE[4];

  volatile const uint32_t RESERVED2[109];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED4[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED5[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 1880 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_DATARDY;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[127];
  volatile const int32_t TEMP;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t A0;
  volatile uint32_t A1;
  volatile uint32_t A2;
  volatile uint32_t A3;
  volatile uint32_t A4;
  volatile uint32_t A5;
  volatile const uint32_t RESERVED4[2];
  volatile uint32_t B0;
  volatile uint32_t B1;
  volatile uint32_t B2;
  volatile uint32_t B3;
  volatile uint32_t B4;
  volatile uint32_t B5;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t T0;
  volatile uint32_t T1;
  volatile uint32_t T2;
  volatile uint32_t T3;
  volatile uint32_t T4;
} NRF_TEMP_Type;
# 1923 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_VALRDY;

  volatile const uint32_t RESERVED1[63];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[126];
  volatile uint32_t CONFIG;
  volatile const uint32_t VALUE;
} NRF_RNG_Type;
# 1950 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_STARTECB;
  volatile uint32_t TASKS_STOPECB;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_ENDECB;
  volatile uint32_t EVENTS_ERRORECB;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t ECBDATAPTR;
} NRF_ECB_Type;
# 1975 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;

  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_RESOLVED;
  volatile uint32_t EVENTS_NOTRESOLVED;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t NIRK;
  volatile uint32_t IRKPTR;
  volatile const uint32_t RESERVED5;
  volatile uint32_t ADDRPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_AAR_Type;
# 2009 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_KSGEN;

  volatile uint32_t TASKS_CRYPT;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_RATEOVERRIDE;


  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_ENDKSGEN;
  volatile uint32_t EVENTS_ENDCRYPT;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t MICSTATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t CNFPTR;

  volatile uint32_t INPTR;
  volatile uint32_t OUTPTR;
  volatile uint32_t SCRATCHPTR;
  volatile uint32_t MAXPACKETSIZE;

  volatile uint32_t RATEOVERRIDE;
} NRF_CCM_Type;
# 2053 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED4[60];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 2082 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[59];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  volatile QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;

  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 2131 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
} NRF_COMP_Type;
# 2170 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 2208 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[48];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 2232 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 2247 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;


  volatile uint32_t TASKS_SEQSTART[2];




  volatile uint32_t TASKS_NEXTSTEP;



  volatile const uint32_t RESERVED1[60];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];


  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED2[56];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;

  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED5[2];
  volatile PWM_SEQ_Type SEQ[2];
  volatile PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 2302 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;

  volatile const uint32_t RESERVED3[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile uint32_t RATIO;

  volatile const uint32_t RESERVED4[7];
  volatile PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED5[6];
  volatile PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 2342 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[512];
  volatile ACL_ACL_Type ACL[8];
} NRF_ACL_Type;
# 2358 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1;
  volatile const uint32_t READYNEXT;
  volatile const uint32_t RESERVED2[62];
  volatile uint32_t CONFIG;

  union {
    volatile uint32_t ERASEPAGE;
    volatile uint32_t ERASEPCR1;

  };
  volatile uint32_t ERASEALL;
  volatile uint32_t ERASEPCR0;

  volatile uint32_t ERASEUICR;

  volatile uint32_t ERASEPAGEPARTIAL;

  volatile uint32_t ERASEPAGEPARTIALCFG;
  volatile const uint32_t RESERVED3[8];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED4;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
} NRF_NVMC_Type;
# 2397 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile PPI_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED[308];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED1;
  volatile PPI_CH_Type CH[20];
  volatile const uint32_t RESERVED2[148];
  volatile uint32_t CHG[6];
  volatile const uint32_t RESERVED3[62];
  volatile PPI_FORK_Type FORK[32];
} NRF_PPI_Type;
# 2422 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile MWU_EVENTS_REGION_Type EVENTS_REGION[4];
  volatile const uint32_t RESERVED1[16];
  volatile MWU_EVENTS_PREGION_Type EVENTS_PREGION[2];
  volatile const uint32_t RESERVED2[100];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t NMIEN;
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED4[53];
  volatile MWU_PERREGION_Type PERREGION[2];
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t REGIONEN;
  volatile uint32_t REGIONENSET;
  volatile uint32_t REGIONENCLR;
  volatile const uint32_t RESERVED6[57];
  volatile MWU_REGION_Type REGION[4];
  volatile const uint32_t RESERVED7[32];
  volatile MWU_PREGION_Type PREGION[2];
} NRF_MWU_Type;
# 2458 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;


  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_RXPTRUPD;




  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_TXPTRUPD;




  volatile const uint32_t RESERVED2[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED4[3];
  volatile I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED5;
  volatile I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED6[3];
  volatile I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED7[3];
  volatile I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2505 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2520 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTEPIN[8];



  volatile uint32_t TASKS_STARTISOIN;


  volatile uint32_t TASKS_STARTEPOUT[8];



  volatile uint32_t TASKS_STARTISOOUT;


  volatile uint32_t TASKS_EP0RCVOUT;
  volatile uint32_t TASKS_EP0STATUS;
  volatile uint32_t TASKS_EP0STALL;

  volatile uint32_t TASKS_DPDMDRIVE;

  volatile uint32_t TASKS_DPDMNODRIVE;

  volatile const uint32_t RESERVED1[40];
  volatile uint32_t EVENTS_USBRESET;

  volatile uint32_t EVENTS_STARTED;



  volatile uint32_t EVENTS_ENDEPIN[8];


  volatile uint32_t EVENTS_EP0DATADONE;

  volatile uint32_t EVENTS_ENDISOIN;

  volatile uint32_t EVENTS_ENDEPOUT[8];


  volatile uint32_t EVENTS_ENDISOOUT;

  volatile uint32_t EVENTS_SOF;

  volatile uint32_t EVENTS_USBEVENT;


  volatile uint32_t EVENTS_EP0SETUP;

  volatile uint32_t EVENTS_EPDATA;

  volatile const uint32_t RESERVED2[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t EVENTCAUSE;
  volatile const uint32_t RESERVED5[7];
  volatile USBD_HALTED_Type HALTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EPSTATUS;

  volatile uint32_t EPDATASTATUS;


  volatile const uint32_t USBADDR;
  volatile const uint32_t RESERVED7[3];
  volatile const uint32_t BMREQUESTTYPE;
  volatile const uint32_t BREQUEST;
  volatile const uint32_t WVALUEL;
  volatile const uint32_t WVALUEH;
  volatile const uint32_t WINDEXL;
  volatile const uint32_t WINDEXH;
  volatile const uint32_t WLENGTHL;
  volatile const uint32_t WLENGTHH;
  volatile USBD_SIZE_Type SIZE;
  volatile const uint32_t RESERVED8[15];
  volatile uint32_t ENABLE;
  volatile uint32_t USBPULLUP;
  volatile uint32_t DPDMVALUE;



  volatile uint32_t DTOGGLE;
  volatile uint32_t EPINEN;
  volatile uint32_t EPOUTEN;
  volatile uint32_t EPSTALL;
  volatile uint32_t ISOSPLIT;
  volatile const uint32_t FRAMECNTR;

  volatile const uint32_t RESERVED9[2];
  volatile uint32_t LOWPOWER;

  volatile uint32_t ISOINCONFIG;


  volatile const uint32_t RESERVED10[51];
  volatile USBD_EPIN_Type EPIN[8];
  volatile USBD_ISOIN_Type ISOIN;
  volatile const uint32_t RESERVED11[21];
  volatile USBD_EPOUT_Type EPOUT[8];
  volatile USBD_ISOOUT_Type ISOOUT;
} NRF_USBD_Type;
# 2638 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;
  volatile uint32_t TASKS_READSTART;

  volatile uint32_t TASKS_WRITESTART;

  volatile uint32_t TASKS_ERASESTART;
  volatile uint32_t TASKS_DEACTIVATE;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_READY;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;

  volatile QSPI_READ_Type READ;
  volatile QSPI_WRITE_Type WRITE;
  volatile QSPI_ERASE_Type ERASE;
  volatile QSPI_PSEL_Type PSEL;
  volatile uint32_t XIPOFFSET;

  volatile uint32_t IFCONFIG0;
  volatile const uint32_t RESERVED3[46];
  volatile uint32_t IFCONFIG1;
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[3];
  volatile uint32_t DPMDUR;

  volatile const uint32_t RESERVED5[3];
  volatile uint32_t ADDRCONF;
  volatile const uint32_t RESERVED6[3];
  volatile uint32_t CINSTRCONF;
  volatile uint32_t CINSTRDAT0;
  volatile uint32_t CINSTRDAT1;
  volatile uint32_t IFTIMING;
} NRF_QSPI_Type;
# 2689 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[1678];
  volatile uint32_t HOST_CRYPTOKEY_SEL;
  volatile const uint32_t RESERVED1[4];
  volatile uint32_t HOST_IOT_KPRTL_LOCK;




  volatile uint32_t HOST_IOT_KDR0;




  volatile uint32_t HOST_IOT_KDR1;


  volatile uint32_t HOST_IOT_KDR2;


  volatile uint32_t HOST_IOT_KDR3;


  volatile uint32_t HOST_IOT_LCS;

} NRF_CC_HOST_RGF_Type;
# 2727 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 3
typedef struct {
  volatile const uint32_t RESERVED[320];
  volatile uint32_t ENABLE;
} NRF_CRYPTOCELL_Type;
# 103 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2 3
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840_bitfields.h" 1 3
# 104 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2 3
# 1 "../../../../../../../../modules/nrfx/mdk/nrf51_to_nrf52840.h" 1 3
# 105 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2 3
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52_to_nrf52840.h" 1 3
# 106 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2 3
# 115 "../../../../../../../../modules/nrfx/mdk/nrf.h" 3
# 1 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1 3
# 144 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 3
    static inline unsigned int gcc_current_sp(void)
    {
        register unsigned sp __asm("sp");
        return sp;
    }
# 116 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2 3
# 51 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 2 3
# 1 "../../../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 1 3
# 44 "../../../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 3
# 1 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 1 3
# 44 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
# 1 "../../../../../../../../modules/nrfx/nrfx.h" 1 3
# 44 "../../../../../../../../modules/nrfx/nrfx.h" 3
# 1 "../../../../../../../../integration/nrfx/nrfx_config.h" 1 3
# 45 "../../../../../../../../integration/nrfx/nrfx_config.h" 3
# 1 "../config/sdk_config.h" 1 3
# 46 "../../../../../../../../integration/nrfx/nrfx_config.h" 2 3
# 45 "../../../../../../../../modules/nrfx/nrfx.h" 2 3
# 1 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 1 3
# 45 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 1 3 4
# 62 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 77 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 3 4
typedef unsigned wchar_t;
# 46 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 2 3
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdbool.h" 1 3 4
# 47 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 2 3


# 1 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 1 3
# 65 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 3
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840_peripherals.h" 1 3
# 66 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 2 3
# 50 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 2 3
# 215 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
typedef void (* nrfx_irq_handler_t)(void);




typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED,
    NRFX_DRV_STATE_INITIALIZED,
    NRFX_DRV_STATE_POWERED_ON,
} nrfx_drv_state_t;
# 240 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
static inline _Bool nrfx_is_in_ram(void const * p_object);
# 255 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
static inline _Bool nrfx_is_word_aligned(void const * p_object);
# 265 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
static inline IRQn_Type nrfx_get_irq_number(void const * p_reg);
# 281 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
static inline uint32_t nrfx_bitpos_to_event(uint32_t bit);
# 297 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3
static inline uint32_t nrfx_event_to_bitpos(uint32_t event);




static inline _Bool nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

static inline _Bool nrfx_is_word_aligned(void const * p_object)
{
    return ((((uint32_t)p_object) & 0x3u) == 0u);
}

static inline IRQn_Type nrfx_get_irq_number(void const * p_reg)
{
    return (IRQn_Type)(uint8_t)((uint32_t)(p_reg) >> 12);
}

static inline uint32_t nrfx_bitpos_to_event(uint32_t bit)
{
    static const uint32_t event_reg_offset = 0x100u;
    return event_reg_offset + (bit * sizeof(uint32_t));
}

static inline uint32_t nrfx_event_to_bitpos(uint32_t event)
{
    static const uint32_t event_reg_offset = 0x100u;
    return (event - event_reg_offset) / sizeof(uint32_t);
}
# 46 "../../../../../../../../modules/nrfx/nrfx.h" 2 3
# 1 "../../../../../../../../integration/nrfx/nrfx_glue.h" 1 3
# 57 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
# 1 "../../../../../../../../integration/nrfx/legacy/apply_old_config.h" 1 3
# 58 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3

# 1 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h" 1 3
# 53 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h" 3
# 1 "../../../../../../../../modules/nrfx/soc/nrfx_irqs_nrf52840.h" 1 3
# 54 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h" 2 3
# 60 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3



# 1 "../../../../../../../../components/libraries/util/nrf_assert.h" 1 3
# 75 "../../../../../../../../components/libraries/util/nrf_assert.h" 3
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);
# 64 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3







# 1 "../../../../../../../../components/libraries/util/app_util.h" 1 3
# 55 "../../../../../../../../components/libraries/util/app_util.h" 3
# 1 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1 3
# 56 "../../../../../../../../components/libraries/util/app_util.h" 2 3
# 1 "../../../../../../../../components/libraries/util/nordic_common.h" 1 3
# 57 "../../../../../../../../components/libraries/util/app_util.h" 2 3
# 83 "../../../../../../../../components/libraries/util/app_util.h" 3
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
# 114 "../../../../../../../../components/libraries/util/app_util.h" 3
extern uint32_t * _vectors;
extern uint32_t __FLASH_segment_used_end__;
# 141 "../../../../../../../../components/libraries/util/app_util.h" 3
enum
{
    UNIT_0_625_MS = 625,
    UNIT_1_25_MS = 1250,
    UNIT_10_MS = 10000
};
# 311 "../../../../../../../../components/libraries/util/app_util.h" 3
typedef uint8_t uint16_le_t[2];


typedef uint8_t uint32_le_t[4];


typedef struct
{
    uint16_t size;
    uint8_t * p_data;
} uint8_array_t;
# 1018 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint64_t value_rescale(uint32_t value, uint32_t old_unit_reversal, uint16_t new_unit_reversal)
{
    return (uint64_t)((((uint64_t)value * new_unit_reversal) + ((old_unit_reversal) / 2)) / (old_unit_reversal));
}
# 1030 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint16_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0xFF00) >> 8);
    return sizeof(uint16_t);
}
# 1044 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint24_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    return 3;
}
# 1059 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint32_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0xFF000000) >> 24);
    return sizeof(uint32_t);
}
# 1075 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint40_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x0000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x00FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0xFF00000000) >> 32);
    return 5;
}
# 1092 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint48_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x0000000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x00000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x000000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x0000FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0x00FF00000000) >> 32);
    p_encoded_data[5] = (uint8_t) ((value & 0xFF0000000000) >> 40);
    return 6;
}







static inline uint16_t uint16_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0])) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1]) << 8 ));
}







static inline uint16_t uint16_big_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0]) << 8 ) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1])) );
}







static inline uint32_t uint24_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16));
}







static inline uint32_t uint32_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 24 ));
}







static inline uint32_t uint32_big_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 24) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 0) );
}
# 1176 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint16_big_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) (value >> 8);
    p_encoded_data[1] = (uint8_t) (value & 0xFF);

    return sizeof(uint16_t);
}
# 1194 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t uint32_big_encode(uint32_t value, uint8_t * p_encoded_data)
{
    *(uint32_t *)p_encoded_data = __REV(value);
    return sizeof(uint32_t);
}







static inline uint64_t uint40_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32 ));
}







static inline uint64_t uint48_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32) |
             (((uint64_t)((uint8_t *)p_encoded_data)[5]) << 40 ));
}
# 1251 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline uint8_t battery_level_in_percent(const uint16_t mvolts)
{
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}







static inline _Bool is_word_aligned(void const* p)
{
    return (((uintptr_t)p & 0x03) == 0);
}
# 1302 "../../../../../../../../components/libraries/util/app_util.h" 3
static inline _Bool is_address_from_stack(void * ptr)
{
    if (((uint32_t)ptr >= (uint32_t)&__StackLimit) &&
        ((uint32_t)ptr < (uint32_t)&__StackTop) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
# 72 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 104 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
static inline void _NRFX_IRQ_PRIORITY_SET(IRQn_Type irq_number,
                                          uint8_t priority)
{
    if (1) { if (((priority) < 8)) { } else { assert_nrf_callback((uint16_t)107, (uint8_t *)"../../../../../../../../integration/nrfx/nrfx_glue.h"); } };
    NVIC_SetPriority(irq_number, priority);
}







static inline void _NRFX_IRQ_ENABLE(IRQn_Type irq_number)
{
    NVIC_EnableIRQ(irq_number);
}
# 131 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
static inline _Bool _NRFX_IRQ_IS_ENABLED(IRQn_Type irq_number)
{
    return 0 != (((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[irq_number / 32] & (1UL << (irq_number % 32)));
}







static inline void _NRFX_IRQ_DISABLE(IRQn_Type irq_number)
{
    NVIC_DisableIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_SET(IRQn_Type irq_number)
{
    NVIC_SetPendingIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_CLEAR(IRQn_Type irq_number)
{
    NVIC_ClearPendingIRQ(irq_number);
}
# 176 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
static inline _Bool _NRFX_IRQ_IS_PENDING(IRQn_Type irq_number)
{
    return (NVIC_GetPendingIRQ(irq_number) == 1);
}

# 1 "../../../../../../../../components/libraries/util/nordic_common.h" 1 3
# 182 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 1 "../../../../../../../../components/libraries/util/app_util_platform.h" 1 3
# 59 "../../../../../../../../components/libraries/util/app_util_platform.h" 3
# 1 "../../../../../../../../components/libraries/util/nrf_assert.h" 1 3
# 60 "../../../../../../../../components/libraries/util/app_util_platform.h" 2 3
# 1 "../../../../../../../../components/libraries/util/app_error.h" 1 3
# 54 "../../../../../../../../components/libraries/util/app_error.h" 3
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 1 3 4
# 78 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int putchar(int __c);
# 87 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int getchar(void);
# 99 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int puts(const char *__s);
# 116 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
char *gets(char *__s);
# 135 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int sprintf(char *__s, const char *__format, ...);
# 163 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int snprintf(char *__s, size_t __n, const char *__format, ...);
# 199 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);
# 445 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int printf(const char *__format, ...);
# 465 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int vprintf(const char *__format, __va_list __arg);
# 494 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int vsprintf(char *__s, const char *__format, __va_list __arg);
# 695 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int scanf(const char *__format, ...);
# 715 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int sscanf(const char *__s, const char *__format, ...);
# 741 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int vscanf(const char *__format, __va_list __arg);
# 765 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
int vsscanf(const char *__s, const char *__format, __va_list __arg);





typedef struct __printf_tag *__printf_tag_ptr;

int __putchar(int, __printf_tag_ptr);
# 791 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4
typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fileno(FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);
# 55 "../../../../../../../../components/libraries/util/app_error.h" 2 3


# 1 "../../../../../../../../components/libraries/util/sdk_errors.h" 1 3
# 73 "../../../../../../../../components/libraries/util/sdk_errors.h" 3
# 1 "../../../../../../../../components/drivers_nrf/nrf_soc_nosd/nrf_error.h" 1 3
# 74 "../../../../../../../../components/libraries/util/sdk_errors.h" 2 3
# 158 "../../../../../../../../components/libraries/util/sdk_errors.h" 3
typedef uint32_t ret_code_t;
# 58 "../../../../../../../../components/libraries/util/app_error.h" 2 3

# 1 "../../../../../../../../components/libraries/util/app_error_weak.h" 1 3
# 77 "../../../../../../../../components/libraries/util/app_error_weak.h" 3
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "../../../../../../../../components/libraries/util/app_error.h" 2 3
# 80 "../../../../../../../../components/libraries/util/app_error.h" 3
typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
    uint32_t err_code;
} error_info_t;



typedef struct
{
    uint16_t line_num;
    uint8_t const * p_file_name;
} assert_info_t;
# 111 "../../../../../../../../components/libraries/util/app_error.h" 3
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "../../../../../../../../components/libraries/util/app_error.h" 3
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "../../../../../../../../components/libraries/util/app_error.h" 3
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);
# 61 "../../../../../../../../components/libraries/util/app_util_platform.h" 2 3
# 91 "../../../../../../../../components/libraries/util/app_util_platform.h" 3
typedef enum
{

    APP_IRQ_PRIORITY_HIGHEST = 0,



    APP_IRQ_PRIORITY_HIGH = 2,

    APP_IRQ_PRIORITY_MID = 4,



    APP_IRQ_PRIORITY_LOW = 6,
    APP_IRQ_PRIORITY_LOWEST = 7,
    APP_IRQ_PRIORITY_THREAD = 15
} app_irq_priority_t;




typedef enum
{
    APP_LEVEL_UNPRIVILEGED,
    APP_LEVEL_PRIVILEGED
} app_level_t;
# 172 "../../../../../../../../components/libraries/util/app_util_platform.h" 3
void app_util_critical_region_enter (uint8_t *p_nested);
void app_util_critical_region_exit (uint8_t nested);
# 261 "../../../../../../../../components/libraries/util/app_util_platform.h" 3
uint8_t current_int_priority_get(void);
# 270 "../../../../../../../../components/libraries/util/app_util_platform.h" 3
uint8_t privilege_level_get(void);
# 183 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 203 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
# 1 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h" 1 3
# 96 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h" 3
static inline void nrfx_coredep_delay_us(uint32_t time_us);
# 140 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h" 3
static inline void nrfx_coredep_delay_us(uint32_t time_us)
{
    if (time_us == 0)
    {
        return;
    }
# 165 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h" 3
    __attribute__((aligned(16)))
    static const uint16_t delay_machine_code[] = {
        0x3800 + 3,
        0xd8fd,
        0x4770
    };

    typedef void (* delay_func_t)(uint32_t);
    const delay_func_t delay_cycles =

        (delay_func_t)((((uint32_t)delay_machine_code) | 1));
    uint32_t cycles = time_us * 64;
    delay_cycles(cycles);
}
# 204 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3





# 1 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 1 3
# 44 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
# 1 "../../../../../../../../modules/nrfx/nrfx.h" 1 3
# 45 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 2 3
# 65 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
typedef volatile uint32_t nrfx_atomic_u32_t;




typedef volatile uint32_t nrfx_atomic_flag_t;
# 80 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 90 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 101 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 112 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 123 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 134 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 145 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 156 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 167 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 178 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 189 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 200 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 216 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
_Bool nrfx_atomic_u32_cmp_exch(nrfx_atomic_u32_t * p_data,
                              uint32_t * p_expected,
                              uint32_t desired);
# 229 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_fetch_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 240 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_u32_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 250 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_flag_set_fetch(nrfx_atomic_flag_t * p_data);
# 260 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_flag_set(nrfx_atomic_flag_t * p_data);
# 270 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_flag_clear_fetch(nrfx_atomic_flag_t * p_data);
# 280 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3
uint32_t nrfx_atomic_flag_clear(nrfx_atomic_flag_t * p_data);
# 210 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 279 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
# 1 "../../../../../../../../components/libraries/util/sdk_errors.h" 1 3
# 280 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 288 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
typedef ret_code_t nrfx_err_t;
# 311 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3
# 1 "../../../../../../../../components/libraries/util/sdk_resources.h" 1 3
# 312 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2 3
# 47 "../../../../../../../../modules/nrfx/nrfx.h" 2 3
# 1 "../../../../../../../../modules/nrfx/drivers/nrfx_errors.h" 1 3
# 48 "../../../../../../../../modules/nrfx/nrfx.h" 2 3
# 45 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 2 3
# 1 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 1 3
# 101 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
typedef enum
{

    NRF_TIMER_TASK_START = __builtin_offsetof (NRF_TIMER_Type, TASKS_START),
    NRF_TIMER_TASK_STOP = __builtin_offsetof (NRF_TIMER_Type, TASKS_STOP),
    NRF_TIMER_TASK_COUNT = __builtin_offsetof (NRF_TIMER_Type, TASKS_COUNT),
    NRF_TIMER_TASK_CLEAR = __builtin_offsetof (NRF_TIMER_Type, TASKS_CLEAR),
    NRF_TIMER_TASK_SHUTDOWN = __builtin_offsetof (NRF_TIMER_Type, TASKS_SHUTDOWN),
    NRF_TIMER_TASK_CAPTURE0 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[0]),
    NRF_TIMER_TASK_CAPTURE1 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[1]),
    NRF_TIMER_TASK_CAPTURE2 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[2]),
    NRF_TIMER_TASK_CAPTURE3 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[3]),

    NRF_TIMER_TASK_CAPTURE4 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[4]),


    NRF_TIMER_TASK_CAPTURE5 = __builtin_offsetof (NRF_TIMER_Type, TASKS_CAPTURE[5]),


} nrf_timer_task_t;




typedef enum
{

    NRF_TIMER_EVENT_COMPARE0 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[0]),
    NRF_TIMER_EVENT_COMPARE1 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[1]),
    NRF_TIMER_EVENT_COMPARE2 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[2]),
    NRF_TIMER_EVENT_COMPARE3 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[3]),

    NRF_TIMER_EVENT_COMPARE4 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[4]),


    NRF_TIMER_EVENT_COMPARE5 = __builtin_offsetof (NRF_TIMER_Type, EVENTS_COMPARE[5]),


} nrf_timer_event_t;




typedef enum
{
    NRF_TIMER_SHORT_COMPARE0_STOP_MASK = (0x1UL << (8UL)),
    NRF_TIMER_SHORT_COMPARE1_STOP_MASK = (0x1UL << (9UL)),
    NRF_TIMER_SHORT_COMPARE2_STOP_MASK = (0x1UL << (10UL)),
    NRF_TIMER_SHORT_COMPARE3_STOP_MASK = (0x1UL << (11UL)),

    NRF_TIMER_SHORT_COMPARE4_STOP_MASK = (0x1UL << (12UL)),


    NRF_TIMER_SHORT_COMPARE5_STOP_MASK = (0x1UL << (13UL)),

    NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK = (0x1UL << (0UL)),
    NRF_TIMER_SHORT_COMPARE1_CLEAR_MASK = (0x1UL << (1UL)),
    NRF_TIMER_SHORT_COMPARE2_CLEAR_MASK = (0x1UL << (2UL)),
    NRF_TIMER_SHORT_COMPARE3_CLEAR_MASK = (0x1UL << (3UL)),

    NRF_TIMER_SHORT_COMPARE4_CLEAR_MASK = (0x1UL << (4UL)),


    NRF_TIMER_SHORT_COMPARE5_CLEAR_MASK = (0x1UL << (5UL)),

} nrf_timer_short_mask_t;




typedef enum
{
    NRF_TIMER_MODE_TIMER = (0UL),
    NRF_TIMER_MODE_COUNTER = (1UL),

    NRF_TIMER_MODE_LOW_POWER_COUNTER = (2UL),

} nrf_timer_mode_t;




typedef enum
{
    NRF_TIMER_BIT_WIDTH_8 = (1UL),
    NRF_TIMER_BIT_WIDTH_16 = (0UL),
    NRF_TIMER_BIT_WIDTH_24 = (2UL),
    NRF_TIMER_BIT_WIDTH_32 = (3UL)
} nrf_timer_bit_width_t;




typedef enum
{
    NRF_TIMER_FREQ_16MHz = 0,
    NRF_TIMER_FREQ_8MHz,
    NRF_TIMER_FREQ_4MHz,
    NRF_TIMER_FREQ_2MHz,
    NRF_TIMER_FREQ_1MHz,
    NRF_TIMER_FREQ_500kHz,
    NRF_TIMER_FREQ_250kHz,
    NRF_TIMER_FREQ_125kHz,
    NRF_TIMER_FREQ_62500Hz,
    NRF_TIMER_FREQ_31250Hz
} nrf_timer_frequency_t;




typedef enum
{
    NRF_TIMER_CC_CHANNEL0 = 0,
    NRF_TIMER_CC_CHANNEL1,
    NRF_TIMER_CC_CHANNEL2,
    NRF_TIMER_CC_CHANNEL3,

    NRF_TIMER_CC_CHANNEL4,


    NRF_TIMER_CC_CHANNEL5,

} nrf_timer_cc_channel_t;




typedef enum
{
    NRF_TIMER_INT_COMPARE0_MASK = (0x1UL << (16UL)),
    NRF_TIMER_INT_COMPARE1_MASK = (0x1UL << (17UL)),
    NRF_TIMER_INT_COMPARE2_MASK = (0x1UL << (18UL)),
    NRF_TIMER_INT_COMPARE3_MASK = (0x1UL << (19UL)),

    NRF_TIMER_INT_COMPARE4_MASK = (0x1UL << (20UL)),


    NRF_TIMER_INT_COMPARE5_MASK = (0x1UL << (21UL)),

} nrf_timer_int_mask_t;
# 249 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline void nrf_timer_task_trigger(NRF_TIMER_Type * p_reg,
                                            nrf_timer_task_t task);
# 260 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline uint32_t * nrf_timer_task_address_get(NRF_TIMER_Type * p_reg,
                                                      nrf_timer_task_t task);







static inline void nrf_timer_event_clear(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event);
# 281 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline _Bool nrf_timer_event_check(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event);
# 292 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline uint32_t * nrf_timer_event_address_get(NRF_TIMER_Type * p_reg,
                                                       nrf_timer_event_t event);







static inline void nrf_timer_shorts_enable(NRF_TIMER_Type * p_reg,
                                             uint32_t timer_shorts_mask);







static inline void nrf_timer_shorts_disable(NRF_TIMER_Type * p_reg,
                                              uint32_t timer_shorts_mask);







static inline void nrf_timer_int_enable(NRF_TIMER_Type * p_reg,
                                          uint32_t timer_int_mask);







static inline void nrf_timer_int_disable(NRF_TIMER_Type * p_reg,
                                           uint32_t timer_int_mask);
# 340 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline _Bool nrf_timer_int_enable_check(NRF_TIMER_Type * p_reg,
                                                uint32_t timer_int);
# 395 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline void nrf_timer_mode_set(NRF_TIMER_Type * p_reg,
                                        nrf_timer_mode_t mode);
# 405 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_mode_t nrf_timer_mode_get(NRF_TIMER_Type * p_reg);







static inline void nrf_timer_bit_width_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_bit_width_t bit_width);
# 423 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_bit_width_t nrf_timer_bit_width_get(NRF_TIMER_Type * p_reg);







static inline void nrf_timer_frequency_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_frequency_t frequency);
# 441 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_frequency_t nrf_timer_frequency_get(NRF_TIMER_Type * p_reg);
# 450 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline void nrf_timer_cc_write(NRF_TIMER_Type * p_reg,
                                        nrf_timer_cc_channel_t cc_channel,
                                        uint32_t cc_value);
# 462 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline uint32_t nrf_timer_cc_read(NRF_TIMER_Type * p_reg,
                                           nrf_timer_cc_channel_t cc_channel);
# 472 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_task_t nrf_timer_capture_task_get(uint32_t channel);
# 481 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_event_t nrf_timer_compare_event_get(uint32_t channel);
# 490 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline nrf_timer_int_mask_t nrf_timer_compare_int_get(uint32_t channel);
# 501 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline uint32_t nrf_timer_us_to_ticks(uint32_t time_us,
                                               nrf_timer_frequency_t frequency);
# 513 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline uint32_t nrf_timer_ms_to_ticks(uint32_t time_ms,
                                               nrf_timer_frequency_t frequency);




static inline void nrf_timer_task_trigger(NRF_TIMER_Type * p_reg,
                                            nrf_timer_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t * nrf_timer_task_address_get(NRF_TIMER_Type * p_reg,
                                                      nrf_timer_task_t task)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)task);
}

static inline void nrf_timer_event_clear(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline _Bool nrf_timer_event_check(NRF_TIMER_Type * p_reg,
                                           nrf_timer_event_t event)
{
    return (_Bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t * nrf_timer_event_address_get(NRF_TIMER_Type * p_reg,
                                                       nrf_timer_event_t event)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_timer_shorts_enable(NRF_TIMER_Type * p_reg,
                                             uint32_t timer_shorts_mask)
{
    p_reg->SHORTS |= timer_shorts_mask;
}

static inline void nrf_timer_shorts_disable(NRF_TIMER_Type * p_reg,
                                              uint32_t timer_shorts_mask)
{
    p_reg->SHORTS &= ~(timer_shorts_mask);
}

static inline void nrf_timer_int_enable(NRF_TIMER_Type * p_reg,
                                          uint32_t timer_int_mask)
{
    p_reg->INTENSET = timer_int_mask;
}

static inline void nrf_timer_int_disable(NRF_TIMER_Type * p_reg,
                                           uint32_t timer_int_mask)
{
    p_reg->INTENCLR = timer_int_mask;
}

static inline _Bool nrf_timer_int_enable_check(NRF_TIMER_Type * p_reg,
                                                uint32_t timer_int)
{
    return (_Bool)(p_reg->INTENSET & timer_int);
}
# 613 "../../../../../../../../modules/nrfx/hal/nrf_timer.h" 3
static inline void nrf_timer_mode_set(NRF_TIMER_Type * p_reg,
                                        nrf_timer_mode_t mode)
{
    p_reg->MODE = (p_reg->MODE & ~(0x3UL << (0UL))) |
                    ((mode << (0UL)) & (0x3UL << (0UL)));
}

static inline nrf_timer_mode_t nrf_timer_mode_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_mode_t)(p_reg->MODE);
}

static inline void nrf_timer_bit_width_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_bit_width_t bit_width)
{
    p_reg->BITMODE = (p_reg->BITMODE & ~(0x3UL << (0UL))) |
                       ((bit_width << (0UL)) &
                            (0x3UL << (0UL)));
}

static inline nrf_timer_bit_width_t nrf_timer_bit_width_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_bit_width_t)(p_reg->BITMODE);
}

static inline void nrf_timer_frequency_set(NRF_TIMER_Type * p_reg,
                                             nrf_timer_frequency_t frequency)
{
    p_reg->PRESCALER = (p_reg->PRESCALER & ~(0xFUL << (0UL))) |
                         ((frequency << (0UL)) &
                              (0xFUL << (0UL)));
}

static inline nrf_timer_frequency_t nrf_timer_frequency_get(NRF_TIMER_Type * p_reg)
{
    return (nrf_timer_frequency_t)(p_reg->PRESCALER);
}

static inline void nrf_timer_cc_write(NRF_TIMER_Type * p_reg,
                                        nrf_timer_cc_channel_t cc_channel,
                                        uint32_t cc_value)
{
    p_reg->CC[cc_channel] = cc_value;
}

static inline uint32_t nrf_timer_cc_read(NRF_TIMER_Type * p_reg,
                                           nrf_timer_cc_channel_t cc_channel)
{
    return (uint32_t)p_reg->CC[cc_channel];
}

static inline nrf_timer_task_t nrf_timer_capture_task_get(uint32_t channel)
{
    return (nrf_timer_task_t)
        ((uint32_t)NRF_TIMER_TASK_CAPTURE0 + (channel * sizeof(uint32_t)));
}

static inline nrf_timer_event_t nrf_timer_compare_event_get(uint32_t channel)
{
    return (nrf_timer_event_t)
        ((uint32_t)NRF_TIMER_EVENT_COMPARE0 + (channel * sizeof(uint32_t)));
}

static inline nrf_timer_int_mask_t nrf_timer_compare_int_get(uint32_t channel)
{
    return (nrf_timer_int_mask_t)
        ((uint32_t)NRF_TIMER_INT_COMPARE0_MASK << channel);
}

static inline uint32_t nrf_timer_us_to_ticks(uint32_t time_us,
                                               nrf_timer_frequency_t frequency)
{


    uint32_t prescaler = (uint32_t)frequency;
    uint64_t ticks = ((time_us * 16ULL) >> prescaler);
    if (1) { if (ticks <= 4294967295UL) { } else { assert_nrf_callback((uint16_t)689, (uint8_t *)"../../../../../../../../modules/nrfx/hal/nrf_timer.h"); } };
    return (uint32_t)ticks;
}

static inline uint32_t nrf_timer_ms_to_ticks(uint32_t time_ms,
                                               nrf_timer_frequency_t frequency)
{


    uint32_t prescaler = (uint32_t)frequency;
    uint64_t ticks = ((time_ms * 16000ULL) >> prescaler);
    if (1) { if (ticks <= 4294967295UL) { } else { assert_nrf_callback((uint16_t)700, (uint8_t *)"../../../../../../../../modules/nrfx/hal/nrf_timer.h"); } };
    return (uint32_t)ticks;
}
# 46 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 2 3
# 61 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
typedef struct
{
    NRF_TIMER_Type * p_reg;
    uint8_t instance_id;
    uint8_t cc_channel_count;
} nrfx_timer_t;
# 78 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
enum {
# 89 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
    NRFX_TIMER3_INST_IDX,




    NRFX_TIMER_ENABLED_COUNT
};




typedef struct
{
    nrf_timer_frequency_t frequency;
    nrf_timer_mode_t mode;
    nrf_timer_bit_width_t bit_width;
    uint8_t interrupt_priority;
    void * p_context;
} nrfx_timer_config_t;
# 130 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
typedef void (* nrfx_timer_event_handler_t)(nrf_timer_event_t event_type,
                                            void * p_context);
# 144 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
nrfx_err_t nrfx_timer_init(nrfx_timer_t const * const p_instance,
                           nrfx_timer_config_t const * p_config,
                           nrfx_timer_event_handler_t timer_event_handler);






void nrfx_timer_uninit(nrfx_timer_t const * const p_instance);






void nrfx_timer_enable(nrfx_timer_t const * const p_instance);
# 170 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
void nrfx_timer_disable(nrfx_timer_t const * const p_instance);
# 179 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
_Bool nrfx_timer_is_enabled(nrfx_timer_t const * const p_instance);






void nrfx_timer_pause(nrfx_timer_t const * const p_instance);






void nrfx_timer_resume(nrfx_timer_t const * const p_instance);






void nrfx_timer_clear(nrfx_timer_t const * const p_instance);






void nrfx_timer_increment(nrfx_timer_t const * const p_instance);
# 217 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_task_address_get(nrfx_timer_t const * const p_instance,
                                                     nrf_timer_task_t timer_task);
# 228 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_capture_task_address_get(nrfx_timer_t const * const p_instance,
                                                             uint32_t channel);
# 239 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_event_address_get(nrfx_timer_t const * const p_instance,
                                                      nrf_timer_event_t timer_event);
# 250 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_compare_event_address_get(nrfx_timer_t const * const p_instance,
                                                              uint32_t channel);
# 261 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
uint32_t nrfx_timer_capture(nrfx_timer_t const * const p_instance,
                            nrf_timer_cc_channel_t cc_channel);
# 274 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_capture_get(nrfx_timer_t const * const p_instance,
                                                nrf_timer_cc_channel_t cc_channel);
# 285 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
void nrfx_timer_compare(nrfx_timer_t const * const p_instance,
                        nrf_timer_cc_channel_t cc_channel,
                        uint32_t cc_value,
                        _Bool enable_int);
# 301 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
void nrfx_timer_extended_compare(nrfx_timer_t const * const p_instance,
                                 nrf_timer_cc_channel_t cc_channel,
                                 uint32_t cc_value,
                                 nrf_timer_short_mask_t timer_short_mask,
                                 _Bool enable_int);
# 315 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_us_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t time_us);
# 326 "../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h" 3
static inline uint32_t nrfx_timer_ms_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t time_ms);







void nrfx_timer_compare_int_enable(nrfx_timer_t const * const p_instance,
                                   uint32_t channel);







void nrfx_timer_compare_int_disable(nrfx_timer_t const * const p_instance,
                                    uint32_t channel);




static inline uint32_t nrfx_timer_task_address_get(nrfx_timer_t const * const p_instance,
                                                     nrf_timer_task_t timer_task)
{
    return (uint32_t)nrf_timer_task_address_get(p_instance->p_reg, timer_task);
}

static inline uint32_t nrfx_timer_capture_task_address_get(nrfx_timer_t const * const p_instance,
                                                             uint32_t channel)
{
    if (1) { if (channel < p_instance->cc_channel_count) { } else { assert_nrf_callback((uint16_t)359, (uint8_t *)"../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"); } };
    return (uint32_t)nrf_timer_task_address_get(p_instance->p_reg,
                         nrf_timer_capture_task_get(channel));
}

static inline uint32_t nrfx_timer_event_address_get(nrfx_timer_t const * const p_instance,
                                                      nrf_timer_event_t timer_event)
{
    return (uint32_t)nrf_timer_event_address_get(p_instance->p_reg, timer_event);
}

static inline uint32_t nrfx_timer_compare_event_address_get(nrfx_timer_t const * const p_instance,
                                                              uint32_t channel)
{
    if (1) { if (channel < p_instance->cc_channel_count) { } else { assert_nrf_callback((uint16_t)373, (uint8_t *)"../../../../../../../../modules/nrfx/drivers/include/nrfx_timer.h"); } };
    return (uint32_t)nrf_timer_event_address_get(p_instance->p_reg,
                         nrf_timer_compare_event_get(channel));
}

static inline uint32_t nrfx_timer_capture_get(nrfx_timer_t const * const p_instance,
                                                nrf_timer_cc_channel_t cc_channel)
{
    return nrf_timer_cc_read(p_instance->p_reg, cc_channel);
}

static inline uint32_t nrfx_timer_us_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t timer_us)
{
    return nrf_timer_us_to_ticks(timer_us, nrf_timer_frequency_get(p_instance->p_reg));
}

static inline uint32_t nrfx_timer_ms_to_ticks(nrfx_timer_t const * const p_instance,
                                                uint32_t timer_ms)
{
    return nrf_timer_ms_to_ticks(timer_ms, nrf_timer_frequency_get(p_instance->p_reg));
}




void TIMER0_IRQHandler(void);
void TIMER1_IRQHandler(void);
void TIMER2_IRQHandler(void);
void TIMER3_IRQHandler(void);
void TIMER4_IRQHandler(void);
# 45 "../../../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 2 3
# 59 "../../../../../../../../integration/nrfx/legacy/nrf_drv_timer.h" 3
typedef nrfx_timer_t nrf_drv_timer_t;

typedef nrfx_timer_config_t nrf_drv_timer_config_t;
# 52 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 2 3
# 1 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 1 3
# 44 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 3
# 1 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 1 3
# 44 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 3
# 1 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 1 3
# 63 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 3
typedef enum
{
    NRF_RNG_TASK_START = __builtin_offsetof (NRF_RNG_Type, TASKS_START),
    NRF_RNG_TASK_STOP = __builtin_offsetof (NRF_RNG_Type, TASKS_STOP)
} nrf_rng_task_t;





typedef enum
{
    NRF_RNG_EVENT_VALRDY = __builtin_offsetof (NRF_RNG_Type, EVENTS_VALRDY)
} nrf_rng_event_t;





typedef enum
{
    NRF_RNG_INT_VALRDY_MASK = (0x1UL << (0UL))
} nrf_rng_int_mask_t;





typedef enum
{
    NRF_RNG_SHORT_VALRDY_STOP_MASK = (0x1UL << (0UL))
} nrf_rng_short_mask_t;






static inline void nrf_rng_int_enable(uint32_t rng_int_mask);






static inline void nrf_rng_int_disable(uint32_t rng_int_mask);
# 118 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 3
static inline _Bool nrf_rng_int_get(nrf_rng_int_mask_t rng_int_mask);
# 127 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 3
static inline uint32_t * nrf_rng_task_address_get(nrf_rng_task_t rng_task);






static inline void nrf_rng_task_trigger(nrf_rng_task_t rng_task);
# 143 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 3
static inline uint32_t * nrf_rng_event_address_get(nrf_rng_event_t rng_event);






static inline void nrf_rng_event_clear(nrf_rng_event_t rng_event);
# 160 "../../../../../../../../modules/nrfx/hal/nrf_rng.h" 3
static inline _Bool nrf_rng_event_get(nrf_rng_event_t rng_event);







static inline void nrf_rng_shorts_enable(uint32_t rng_short_mask);







static inline void nrf_rng_shorts_disable(uint32_t rng_short_mask);






static inline uint8_t nrf_rng_random_value_get(void);




static inline void nrf_rng_error_correction_enable(void);




static inline void nrf_rng_error_correction_disable(void);



static inline void nrf_rng_int_enable(uint32_t rng_int_mask)
{
    ((NRF_RNG_Type*) 0x4000D000UL)->INTENSET = rng_int_mask;
}

static inline void nrf_rng_int_disable(uint32_t rng_int_mask)
{
    ((NRF_RNG_Type*) 0x4000D000UL)->INTENCLR = rng_int_mask;
}

static inline _Bool nrf_rng_int_get(nrf_rng_int_mask_t rng_int_mask)
{
    return (_Bool)(((NRF_RNG_Type*) 0x4000D000UL)->INTENCLR & rng_int_mask);
}

static inline uint32_t * nrf_rng_task_address_get(nrf_rng_task_t rng_task)
{
    return (uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_task);
}

static inline void nrf_rng_task_trigger(nrf_rng_task_t rng_task)
{
    *((volatile uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_task)) = (1UL);
}

static inline uint32_t * nrf_rng_event_address_get(nrf_rng_event_t rng_event)
{
    return (uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_event);
}

static inline void nrf_rng_event_clear(nrf_rng_event_t rng_event)
{
    *((volatile uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_event)) = (0UL);

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_event));
    (void)dummy;

}

static inline _Bool nrf_rng_event_get(nrf_rng_event_t rng_event)
{
    return (_Bool) * ((volatile uint32_t *)((uint8_t *)((NRF_RNG_Type*) 0x4000D000UL) + rng_event));
}

static inline void nrf_rng_shorts_enable(uint32_t rng_short_mask)
{
     ((NRF_RNG_Type*) 0x4000D000UL)->SHORTS |= rng_short_mask;
}

static inline void nrf_rng_shorts_disable(uint32_t rng_short_mask)
{
     ((NRF_RNG_Type*) 0x4000D000UL)->SHORTS &= ~rng_short_mask;
}

static inline uint8_t nrf_rng_random_value_get(void)
{
    return (uint8_t)(((NRF_RNG_Type*) 0x4000D000UL)->VALUE & (0xFFUL << (0UL)));
}

static inline void nrf_rng_error_correction_enable(void)
{
    ((NRF_RNG_Type*) 0x4000D000UL)->CONFIG |= (0x1UL << (0UL));
}

static inline void nrf_rng_error_correction_disable(void)
{
    ((NRF_RNG_Type*) 0x4000D000UL)->CONFIG &= ~(0x1UL << (0UL));
}
# 45 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 2 3
# 60 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 3
typedef struct
{
    _Bool error_correction : 1;
    uint8_t interrupt_priority;
} nrfx_rng_config_t;
# 84 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 3
typedef void (* nrfx_rng_evt_handler_t)(uint8_t rng_data);
# 95 "../../../../../../../../modules/nrfx/drivers/include/nrfx_rng.h" 3
nrfx_err_t nrfx_rng_init(nrfx_rng_config_t const * p_config, nrfx_rng_evt_handler_t handler);






void nrfx_rng_start(void);






void nrfx_rng_stop(void);




void nrfx_rng_uninit(void);


void RNG_IRQHandler(void);
# 45 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 2 3
# 59 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 3
typedef nrfx_rng_config_t nrf_drv_rng_config_t;
# 72 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 3
ret_code_t nrf_drv_rng_init(nrf_drv_rng_config_t const * p_config);




void nrf_drv_rng_uninit(void);






void nrf_drv_rng_bytes_available(uint8_t * p_bytes_available);
# 96 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 3
ret_code_t nrf_drv_rng_rand(uint8_t * p_buff, uint8_t length);
# 107 "../../../../../../../../integration/nrfx/legacy/nrf_drv_rng.h" 3
void nrf_drv_rng_block_rand(uint8_t * p_buff, uint32_t length);
# 53 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 2 3
# 62 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_internal.h" 3
const nrf_drv_timer_t *zb_nrf_cfg_get_zboss_timer(void);
nrf_drv_timer_config_t zb_nrf_cfg_get_timer_default_config(void);

void zb_nrf52840_sched_sleep(zb_uint32_t sleep_tmo);
zb_uint32_t zb_nrf52840_get_time_slept(void);
zb_void_t zb_osif_wait_for_event(zb_void_t);

void mac_nrf52840_trans_set_rx_on_off(zb_bool_t rx_on);
# 51 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 2
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_zboss_deps.h" 1
# 43 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_zboss_deps.h"
       
# 44 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_zboss_deps.h" 3



zb_bool_t zb_osif_is_serial_init(void);
zb_void_t zb_osif_set_serial_init(void);
zb_void_t zb_osif_clean_serial_init(void);
zb_void_t zb_osif_set_flash_op_progress(void);
zb_void_t zb_osif_clean_flash_op_progress(void);
zb_bool_t zb_osif_flash_op_progress(void);
zb_void_t zb_osif_zboss_timer_tick(void);
zb_void_t zb_osif_flash_erase_finished(zb_uint8_t page);

void zb_timer_enable_stop(void);
void zb_trace_flush(zb_uint_t size);
void zb_trace_get_last_message(zb_uint8_t** ptr, zb_uint_t* size);
# 52 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 2
# 1 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h" 1
# 67 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"

# 67 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
typedef void (* nrf_802154_timer_callback_t)(void * p_context);




typedef struct nrf_802154_timer_s nrf_802154_timer_t;




struct nrf_802154_timer_s
{
    uint32_t t0;
    uint32_t dt;
    nrf_802154_timer_callback_t callback;
    void * p_context;
    nrf_802154_timer_t * p_next;
};




void nrf_802154_timer_sched_init(void);




void nrf_802154_timer_sched_deinit(void);
# 103 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
uint32_t nrf_802154_timer_sched_time_get(void);






uint32_t nrf_802154_timer_sched_granularity_get(void);
# 122 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"

# 122 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h" 3 4
_Bool 
# 122 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
    nrf_802154_timer_sched_time_is_in_future(uint32_t now, uint32_t t0, uint32_t dt);
# 131 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
uint32_t nrf_802154_timer_sched_remaining_time_get(const nrf_802154_timer_t * p_timer);
# 147 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
void nrf_802154_timer_sched_add(nrf_802154_timer_t * p_timer, 
# 147 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h" 3 4
                                                             _Bool 
# 147 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
                                                                  round_up);






void nrf_802154_timer_sched_remove(nrf_802154_timer_t * p_timer);
# 164 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"

# 164 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h" 3 4
_Bool 
# 164 "../../../../../../../../external/nRF-IEEE-802.15.4-radio-driver/src/timer_scheduler/nrf_802154_timer_sched.h"
    nrf_802154_timer_sched_is_running(nrf_802154_timer_t * p_timer);
# 53 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 2



static void timer_event_handler(nrf_timer_event_t event_type, void* p_context);
static void rtc_event_handler(void * p_context);

static nrf_802154_timer_t m_timer;
static zb_bool_t m_timer_is_init = ZB_FALSE;
static uint32_t m_rtc_sleep_timer_val = 0;

void zb_nrf52840_timer_stop()
{
  if (m_timer_is_init == ZB_TRUE)
  {
    
# 67 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
   nrfx_timer_disable
# 67 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                        (zb_nrf_cfg_get_zboss_timer());
    
# 68 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
   nrfx_timer_uninit
# 68 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                       (zb_nrf_cfg_get_zboss_timer());
    m_timer_is_init = ZB_FALSE;
  }
}

void zb_nrf52840_timer_start()
{
  if (!m_timer_is_init)
  {
    zb_osif_timer_init();
  }
  if (!
# 79 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
      nrfx_timer_is_enabled
# 79 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                              (zb_nrf_cfg_get_zboss_timer()))
  {
    
# 81 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
   nrfx_timer_enable
# 81 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                       (zb_nrf_cfg_get_zboss_timer());
  }
}

zb_bool_t zb_nrf52840_timer_is_on()
{
  return m_timer_is_init;
}

void zb_osif_timer_init()
{
  uint32_t time_ticks;
  uint32_t time_us = 15360;
  ret_code_t err_code;


  nrf_drv_timer_config_t timer_cfg = zb_nrf_cfg_get_timer_default_config();
  err_code = 
# 98 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
            nrfx_timer_init
# 98 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                              (zb_nrf_cfg_get_zboss_timer(), &timer_cfg, timer_event_handler);
  
# 99 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
 if (1) { if (
# 99 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
 err_code 
# 99 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
 == ((0x0) + 0)) { } else { assert_nrf_callback((uint16_t)99, (uint8_t *)"C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"); } }
# 99 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                        ;
  time_ticks = 
# 100 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
              nrfx_timer_us_to_ticks
# 100 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                                       (zb_nrf_cfg_get_zboss_timer(), time_us);




  
# 105 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
 nrfx_timer_extended_compare
# 105 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                               (zb_nrf_cfg_get_zboss_timer(), NRF_TIMER_CC_CHANNEL1, time_ticks, NRF_TIMER_SHORT_COMPARE1_CLEAR_MASK, 
# 105 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3 4
                                                                                                                                      1
# 105 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                                                                                                                                          );
  
# 106 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
 nrfx_timer_enable
# 106 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                     (zb_nrf_cfg_get_zboss_timer());

  m_timer_is_init = ZB_TRUE;
}




static void timer_event_handler(nrf_timer_event_t event_type, void* p_context)
{
  (void)p_context;
  switch (event_type)
  {
    case NRF_TIMER_EVENT_COMPARE1:
      zb_osif_zboss_timer_tick();
      break;

    default:

      break;
  }
}

static void rtc_event_handler(void * p_context)
{
    
# 131 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
   ((void)(
# 131 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
   p_context
# 131 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3
   ))
# 131 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                              ;
}

void zb_nrf52840_sched_sleep(zb_uint32_t sleep_tmo)
{
  m_rtc_sleep_timer_val = nrf_802154_timer_sched_time_get();

  if (!sleep_tmo)
  {
    return;
  }

  m_timer.callback = rtc_event_handler;
  m_timer.p_context = 
# 144 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3 4
                     0
# 144 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                         ;
  m_timer.t0 = m_rtc_sleep_timer_val;
  m_timer.dt = 1000 * sleep_tmo;

  nrf_802154_timer_sched_add(&m_timer, 
# 148 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c" 3 4
                                      0
# 148 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\external\\zboss\\osif\\zb_nrf52840_timer.c"
                                           );
}

zb_uint32_t zb_nrf52840_get_time_slept(void)
{
  uint32_t rtc_wait_val = 0;


  rtc_wait_val = nrf_802154_timer_sched_time_get() - m_rtc_sleep_timer_val;

  return ((rtc_wait_val + 999) / 1000);
}
