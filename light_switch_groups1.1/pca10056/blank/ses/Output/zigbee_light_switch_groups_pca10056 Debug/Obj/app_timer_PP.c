# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\examples\\zigbee\\experimental\\light_control\\light_switch_groups1.1\\pca10056\\blank\\ses//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
# 40 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
# 1 "../../../../../../../../components/libraries/util/sdk_common.h" 1
# 53 "../../../../../../../../components/libraries/util/sdk_common.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 1 3 4
# 47 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdint.h" 3 4

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
# 54 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdbool.h" 1 3 4
# 55 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 1 3 4
# 47 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/string.h" 3 4
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/__crossworks.h" 1 3 4
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
# 56 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../config/sdk_config.h" 1
# 57 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../components/libraries/util/nordic_common.h" 1
# 58 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 144 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h"
    
# 144 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h"
   static inline unsigned int gcc_current_sp(void)
    {
        register unsigned sp __asm("sp");
        return sp;
    }
# 59 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../components/libraries/util/sdk_os.h" 1
# 60 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../components/libraries/util/sdk_errors.h" 1
# 73 "../../../../../../../../components/libraries/util/sdk_errors.h"
# 1 "../../../../../../../../components/drivers_nrf/nrf_soc_nosd/nrf_error.h" 1
# 74 "../../../../../../../../components/libraries/util/sdk_errors.h" 2
# 158 "../../../../../../../../components/libraries/util/sdk_errors.h"
typedef uint32_t ret_code_t;
# 61 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../components/libraries/util/app_util.h" 1
# 54 "../../../../../../../../components/libraries/util/app_util.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 1 3 4
# 62 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 3 4

# 62 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 77 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stddef.h" 3 4
typedef unsigned wchar_t;
# 55 "../../../../../../../../components/libraries/util/app_util.h" 2


# 1 "../../../../../../../../modules/nrfx/mdk/nrf.h" 1
# 102 "../../../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 1
# 78 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"

# 78 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 156 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 1
# 210 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 1
# 61 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h"
# 1 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 1
# 40 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 58 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 134 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 188 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 226 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 274 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 314 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 373 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 416 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 450 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 469 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 484 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 504 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 526 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;


   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 544 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  return(result);
}
# 565 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 587 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 609 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 626 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 643 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 660 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 716 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 731 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 753 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 775 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 790 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *addr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 802 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *addr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 814 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *addr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*addr) : "r" (value) );
}
# 832 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 1152 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
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
# 1357 "../../../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}






#pragma GCC diagnostic pop
# 62 "../../../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 2
# 211 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmFunc.h" 1
# 212 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../../../components/toolchain/cmsis/include/core_cmSimd.h" 1
# 213 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 308 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 347 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 365 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 416 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 451 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 485 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 704 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 744 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 796 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 899 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1046 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1202 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1297 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1404 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1596 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1650 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1685 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}
# 1698 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1720 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1745 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1772 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1830 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1860 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 1872 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1893 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 1913 "../../../../../../../../components/toolchain/cmsis/include/core_cm4.h"
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
# 157 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 2
# 1 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h" 1
# 33 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern uint32_t SystemCoreClock;
# 44 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern void SystemInit (void);
# 55 "../../../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern void SystemCoreClockUpdate (void);
# 158 "../../../../../../../../modules/nrfx/mdk/nrf52840.h" 2
# 208 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 897 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 934 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 964 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1020 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1069 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1099 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1217 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1265 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1325 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1356 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1416 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1462 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1515 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1572 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1629 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1719 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1756 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1805 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1843 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1880 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1923 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1950 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 1975 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2009 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2053 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2082 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2131 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2170 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2208 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[48];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 2232 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 2247 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2302 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2342 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[512];
  volatile ACL_ACL_Type ACL[8];
} NRF_ACL_Type;
# 2358 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2397 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2422 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2458 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2505 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2520 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2638 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2689 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
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
# 2727 "../../../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[320];
  volatile uint32_t ENABLE;
} NRF_CRYPTOCELL_Type;
# 103 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840_bitfields.h" 1
# 104 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../../../modules/nrfx/mdk/nrf51_to_nrf52840.h" 1
# 105 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52_to_nrf52840.h" 1
# 106 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2
# 115 "../../../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 116 "../../../../../../../../modules/nrfx/mdk/nrf.h" 2
# 58 "../../../../../../../../components/libraries/util/app_util.h" 2
# 83 "../../../../../../../../components/libraries/util/app_util.h"
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
# 114 "../../../../../../../../components/libraries/util/app_util.h"
extern uint32_t * _vectors;
extern uint32_t __FLASH_segment_used_end__;
# 141 "../../../../../../../../components/libraries/util/app_util.h"
enum
{
    UNIT_0_625_MS = 625,
    UNIT_1_25_MS = 1250,
    UNIT_10_MS = 10000
};
# 311 "../../../../../../../../components/libraries/util/app_util.h"
typedef uint8_t uint16_le_t[2];


typedef uint8_t uint32_le_t[4];


typedef struct
{
    uint16_t size;
    uint8_t * p_data;
} uint8_array_t;
# 1018 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint64_t value_rescale(uint32_t value, uint32_t old_unit_reversal, uint16_t new_unit_reversal)
{
    return (uint64_t)((((uint64_t)value * new_unit_reversal) + ((old_unit_reversal) / 2)) / (old_unit_reversal));
}
# 1030 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0xFF00) >> 8);
    return sizeof(uint16_t);
}
# 1044 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint24_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    return 3;
}
# 1059 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0xFF000000) >> 24);
    return sizeof(uint32_t);
}
# 1075 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint40_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x0000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x00FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0xFF00000000) >> 32);
    return 5;
}
# 1092 "../../../../../../../../components/libraries/util/app_util.h"
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
# 1176 "../../../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_big_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) (value >> 8);
    p_encoded_data[1] = (uint8_t) (value & 0xFF);

    return sizeof(uint16_t);
}
# 1194 "../../../../../../../../components/libraries/util/app_util.h"
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
# 1251 "../../../../../../../../components/libraries/util/app_util.h"
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







static inline 
# 1289 "../../../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1289 "../../../../../../../../components/libraries/util/app_util.h"
                    is_word_aligned(void const* p)
{
    return (((uintptr_t)p & 0x03) == 0);
}
# 1302 "../../../../../../../../components/libraries/util/app_util.h"
static inline 
# 1302 "../../../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1302 "../../../../../../../../components/libraries/util/app_util.h"
                    is_address_from_stack(void * ptr)
{
    if (((uint32_t)ptr >= (uint32_t)&__StackLimit) &&
        ((uint32_t)ptr < (uint32_t)&__StackTop) )
    {
        return 
# 1307 "../../../../../../../../components/libraries/util/app_util.h" 3 4
              1
# 1307 "../../../../../../../../components/libraries/util/app_util.h"
                  ;
    }
    else
    {
        return 
# 1311 "../../../../../../../../components/libraries/util/app_util.h" 3 4
              0
# 1311 "../../../../../../../../components/libraries/util/app_util.h"
                   ;
    }
}
# 62 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../../../components/libraries/util/sdk_macros.h" 1
# 52 "../../../../../../../../components/libraries/util/sdk_macros.h"
# 1 "../../../../../../../../components/libraries/util/nrf_assert.h" 1
# 75 "../../../../../../../../components/libraries/util/nrf_assert.h"
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);
# 53 "../../../../../../../../components/libraries/util/sdk_macros.h" 2
# 63 "../../../../../../../../components/libraries/util/sdk_common.h" 2
# 41 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2

# 1 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h" 1
# 70 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
# 1 "../../../../../../../../components/libraries/util/app_error.h" 1
# 54 "../../../../../../../../components/libraries/util/app_error.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 1 3 4
# 78 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdio.h" 3 4

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
# 55 "../../../../../../../../components/libraries/util/app_error.h" 2




# 1 "../../../../../../../../components/libraries/util/app_error_weak.h" 1
# 77 "../../../../../../../../components/libraries/util/app_error_weak.h"

# 77 "../../../../../../../../components/libraries/util/app_error_weak.h"
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "../../../../../../../../components/libraries/util/app_error.h" 2
# 80 "../../../../../../../../components/libraries/util/app_error.h"
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
# 111 "../../../../../../../../components/libraries/util/app_error.h"
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "../../../../../../../../components/libraries/util/app_error.h"
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "../../../../../../../../components/libraries/util/app_error.h"
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);
# 71 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h" 2
# 1 "../../../../../../../../components/libraries/util/app_util.h" 1
# 72 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h" 2

# 1 "../../../../../../../../components/libraries/util/nordic_common.h" 1
# 74 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h" 2
# 131 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
typedef void (*app_timer_timeout_handler_t)(void * p_context);
# 166 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
typedef struct app_timer_t { uint32_t data[(((32) + (sizeof(uint32_t)) - 1) / (sizeof(uint32_t)))]; } app_timer_t;



typedef app_timer_t * app_timer_id_t;
# 180 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
typedef struct
{
    app_timer_timeout_handler_t timeout_handler;
    void * p_context;
} app_timer_event_t;


typedef enum
{
    APP_TIMER_MODE_SINGLE_SHOT,
    APP_TIMER_MODE_REPEATED
} app_timer_mode_t;





ret_code_t app_timer_init(void);
# 218 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
ret_code_t app_timer_create(app_timer_id_t const * p_timer_id,
                            app_timer_mode_t mode,
                            app_timer_timeout_handler_t timeout_handler);
# 242 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
ret_code_t app_timer_start(app_timer_id_t timer_id, uint32_t timeout_ticks, void * p_context);
# 254 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
ret_code_t app_timer_stop(app_timer_id_t timer_id);







ret_code_t app_timer_stop_all(void);





uint32_t app_timer_cnt_get(void);
# 277 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
uint32_t app_timer_cnt_diff_compute(uint32_t ticks_to,
                                    uint32_t ticks_from);
# 289 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.h"
uint8_t app_timer_op_queue_utilization_get(void);







void app_timer_pause(void);







void app_timer_resume(void);
# 43 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 1 3 4
# 106 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4

# 106 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
typedef struct
{
  int quot;
  int rem;
} div_t;





typedef struct
{
  long quot;
  long rem;
} ldiv_t;






typedef struct
{
  long long quot;
  long rem;
} lldiv_t;






int abs(int __j);






long int labs(long int __j);






long long int llabs(long long int __j);
# 168 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
div_t div(int __numer, int __denom);
# 184 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
ldiv_t ldiv(long int __numer, long int __denom);
# 201 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
lldiv_t lldiv(long long int __numer, long long int __denom);
# 213 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void *malloc(size_t __size);
# 225 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void *calloc(size_t __nobj, size_t __size);
# 248 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void *realloc(void *p, size_t __size);
# 261 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void free(void *__p);
# 279 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
double atof(const char *__nptr);
# 319 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
double strtod(const char *__nptr, char **__endptr);
# 359 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
float strtof(const char *__nptr, char **__endptr);
# 377 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int atoi(const char *__nptr);
# 395 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
long int atol(const char *__nptr);
# 414 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
long long int atoll(const char *__nptr);
# 472 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
long int strtol(const char *__nptr, char **__endptr, int __base);
# 530 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
long long int strtoll(const char *__nptr, char **__endptr, int __base);
# 588 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
unsigned long int strtoul(const char *__nptr, char **__endptr, int __base);
# 646 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
unsigned long long int strtoull(const char *__nptr, char **__endptr, int __base);
# 656 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int rand(void);
# 672 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void srand(unsigned int __seed);
# 686 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void *bsearch(const void *__key,
              const void *__buf,
              size_t __num,
              size_t __size,
              int (*__compare)(const void *, const void *));
# 701 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
void qsort(void *__buf,
           size_t __num,
           size_t __size,
           int (*__compare)(const void *, const void *));

void abort(void);






void exit(int __exit_code);
# 723 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int atexit(void (*__func)(void));

char *getenv(const char *__name);
int system(const char *__command);
# 745 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *itoa(int __val, char *__buf, int __radix);
# 759 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *utoa(unsigned val, char *buf, int radix);
# 777 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *ltoa(long __val, char *__buf, int __radix);
# 791 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *ultoa(unsigned long __val, char *__buf, int __radix);
# 809 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *lltoa(long long __val, char *__buf, int __radix);
# 823 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
char *ulltoa(unsigned long long __val, char *__buf, int __radix);
# 851 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int mblen(const char *__s, size_t __n);
# 879 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int mblen_l(const char *__s, size_t __n, struct __locale_s *__loc);
# 904 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
size_t mbstowcs(wchar_t *__pwcs, const char *__s, size_t __n);
# 915 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
size_t mbstowcs_l(wchar_t *__pwcs, const char *__s, size_t __n, struct __locale_s *__loc);
# 939 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int mbtowc(wchar_t *__pwc, const char *__s, size_t __n);
# 964 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.30c/include/stdlib.h" 3 4
int mbtowc_l(wchar_t *__pwc, const char *__s, size_t __n, struct __locale_s *__loc);


int wctomb(char *__s, wchar_t __wc);
int wctomb_l(char *__s, wchar_t __wc, struct __locale_s *__loc);

size_t wcstombs(char *__s, const wchar_t *__pwcs, size_t __n);
size_t wcstombs_l(char *__s, const wchar_t *__pwcs, size_t __n, struct __locale_s *__loc);
# 44 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2

# 1 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 1
# 65 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h"
# 1 "../../../../../../../../modules/nrfx/mdk/nrf52840_peripherals.h" 1
# 66 "../../../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 2
# 46 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2
# 1 "../../../../../../../../components/drivers_nrf/nrf_soc_nosd/nrf_soc.h" 1
# 73 "../../../../../../../../components/drivers_nrf/nrf_soc_nosd/nrf_soc.h"

# 73 "../../../../../../../../components/drivers_nrf/nrf_soc_nosd/nrf_soc.h"
uint32_t sd_app_evt_wait(void);
# 47 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2

# 1 "../../../../../../../../components/libraries/delay/nrf_delay.h" 1
# 44 "../../../../../../../../components/libraries/delay/nrf_delay.h"
# 1 "../../../../../../../../modules/nrfx/nrfx.h" 1
# 44 "../../../../../../../../modules/nrfx/nrfx.h"
# 1 "../../../../../../../../integration/nrfx/nrfx_config.h" 1
# 45 "../../../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 1
# 215 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
typedef void (* nrfx_irq_handler_t)(void);




typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED,
    NRFX_DRV_STATE_INITIALIZED,
    NRFX_DRV_STATE_POWERED_ON,
} nrfx_drv_state_t;
# 240 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 240 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 240 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object);
# 255 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 255 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 255 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_word_aligned(void const * p_object);
# 265 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline IRQn_Type nrfx_get_irq_number(void const * p_reg);
# 281 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_bitpos_to_event(uint32_t bit);
# 297 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_event_to_bitpos(uint32_t event);




static inline 
# 302 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 302 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

static inline 
# 307 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 307 "../../../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_word_aligned(void const * p_object)
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
# 46 "../../../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../../../integration/nrfx/nrfx_glue.h" 1
# 57 "../../../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../../../integration/nrfx/legacy/apply_old_config.h" 1
# 58 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2

# 1 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h" 1
# 53 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h"
# 1 "../../../../../../../../modules/nrfx/soc/nrfx_irqs_nrf52840.h" 1
# 54 "../../../../../../../../modules/nrfx/soc/nrfx_irqs.h" 2
# 60 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2



# 1 "../../../../../../../../components/libraries/util/nrf_assert.h" 1
# 64 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2
# 104 "../../../../../../../../integration/nrfx/nrfx_glue.h"
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
# 131 "../../../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 131 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 131 "../../../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_ENABLED(IRQn_Type irq_number)
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
# 176 "../../../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 176 "../../../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 176 "../../../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_PENDING(IRQn_Type irq_number)
{
    return (NVIC_GetPendingIRQ(irq_number) == 1);
}


# 1 "../../../../../../../../components/libraries/util/app_util_platform.h" 1
# 60 "../../../../../../../../components/libraries/util/app_util_platform.h"
# 1 "../../../../../../../../components/libraries/util/app_error.h" 1
# 61 "../../../../../../../../components/libraries/util/app_util_platform.h" 2
# 91 "../../../../../../../../components/libraries/util/app_util_platform.h"
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
# 172 "../../../../../../../../components/libraries/util/app_util_platform.h"
void app_util_critical_region_enter (uint8_t *p_nested);
void app_util_critical_region_exit (uint8_t nested);
# 261 "../../../../../../../../components/libraries/util/app_util_platform.h"
uint8_t current_int_priority_get(void);
# 270 "../../../../../../../../components/libraries/util/app_util_platform.h"
uint8_t privilege_level_get(void);
# 183 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2
# 203 "../../../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h" 1
# 96 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us);
# 140 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us)
{
    if (time_us == 0)
    {
        return;
    }
# 165 "../../../../../../../../modules/nrfx/soc/nrfx_coredep.h"
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
# 204 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2





# 1 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 1
# 44 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
# 1 "../../../../../../../../modules/nrfx/nrfx.h" 1
# 45 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 2
# 65 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
typedef volatile uint32_t nrfx_atomic_u32_t;




typedef volatile uint32_t nrfx_atomic_flag_t;
# 80 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 90 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_store(nrfx_atomic_u32_t * p_data, uint32_t value);
# 101 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 112 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_or(nrfx_atomic_u32_t * p_data, uint32_t value);
# 123 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 134 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_and(nrfx_atomic_u32_t * p_data, uint32_t value);
# 145 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 156 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_xor(nrfx_atomic_u32_t * p_data, uint32_t value);
# 167 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 178 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_add(nrfx_atomic_u32_t * p_data, uint32_t value);
# 189 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 200 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_sub(nrfx_atomic_u32_t * p_data, uint32_t value);
# 216 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"

# 216 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h" 3 4
_Bool 
# 216 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
    nrfx_atomic_u32_cmp_exch(nrfx_atomic_u32_t * p_data,
                              uint32_t * p_expected,
                              uint32_t desired);
# 229 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_fetch_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 240 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_u32_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);
# 250 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_set_fetch(nrfx_atomic_flag_t * p_data);
# 260 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_set(nrfx_atomic_flag_t * p_data);
# 270 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_clear_fetch(nrfx_atomic_flag_t * p_data);
# 280 "../../../../../../../../modules/nrfx/soc/nrfx_atomic.h"
uint32_t nrfx_atomic_flag_clear(nrfx_atomic_flag_t * p_data);
# 210 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2
# 279 "../../../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../../../components/libraries/util/sdk_errors.h" 1
# 280 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2
# 288 "../../../../../../../../integration/nrfx/nrfx_glue.h"
typedef ret_code_t nrfx_err_t;
# 311 "../../../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../../../components/libraries/util/sdk_resources.h" 1
# 312 "../../../../../../../../integration/nrfx/nrfx_glue.h" 2
# 47 "../../../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../../../modules/nrfx/drivers/nrfx_errors.h" 1
# 48 "../../../../../../../../modules/nrfx/nrfx.h" 2
# 45 "../../../../../../../../components/libraries/delay/nrf_delay.h" 2
# 64 "../../../../../../../../components/libraries/delay/nrf_delay.h"
static inline void nrf_delay_ms(uint32_t ms_time)
{
    if (ms_time == 0)
    {
        return;
    }

    do {
        nrfx_coredep_delay_us(1000);
    } while (--ms_time);
}
# 49 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 2
# 60 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
_Static_assert(6 == 6, "unspecified message");
# 85 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
typedef struct
{
    uint32_t ticks_to_expire;
    uint32_t ticks_at_start;
    uint32_t ticks_first_interval;
    uint32_t ticks_periodic_interval;
    
# 91 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   _Bool 
# 91 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                               is_running;
    app_timer_mode_t mode;
    app_timer_timeout_handler_t p_timeout_handler;
    void * p_context;
    void * next;
} timer_node_t;

_Static_assert(sizeof(timer_node_t) == 32, "unspecified message");


typedef enum
{
    TIMER_USER_OP_TYPE_NONE,
    TIMER_USER_OP_TYPE_START,
    TIMER_USER_OP_TYPE_STOP,
    TIMER_USER_OP_TYPE_STOP_ALL
} timer_user_op_type_t;


typedef struct
{
    uint32_t ticks_at_start;
    uint32_t ticks_first_interval;
    uint32_t ticks_periodic_interval;
    void * p_context;
} timer_user_op_start_t;


typedef struct
{
    timer_user_op_type_t op_type;
    timer_node_t * p_node;
    union
    {
        timer_user_op_start_t start;
    } params;
} timer_user_op_t;






typedef struct
{
    uint8_t first;
    uint8_t last;
    uint8_t size;
    timer_user_op_t user_op_queue[10 +1];
} timer_op_queue_t;

_Static_assert(sizeof(timer_op_queue_t) % 4 == 0, "unspecified message");



static timer_op_queue_t m_op_queue;
static timer_node_t * mp_timer_id_head;
static uint32_t m_ticks_latest;
static uint32_t m_ticks_elapsed[(2)];
static uint8_t m_ticks_elapsed_q_read_ind;
static uint8_t m_ticks_elapsed_q_write_ind;
static 
# 152 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
      _Bool 
# 152 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                    m_rtc1_running;
static 
# 153 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
      _Bool 
# 153 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                    m_rtc1_reset;
# 163 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static void rtc1_init(uint32_t prescaler)
{
    ((NRF_RTC_Type*) 0x40011000UL)->PRESCALER = prescaler;
    NVIC_SetPriority(RTC1_IRQn, 6);
}




static void rtc1_start(void)
{
    ((NRF_RTC_Type*) 0x40011000UL)->EVTENSET = (0x1UL << (16UL));
    ((NRF_RTC_Type*) 0x40011000UL)->INTENSET = (0x1UL << (16UL));

    NVIC_ClearPendingIRQ(RTC1_IRQn);
    NVIC_EnableIRQ(RTC1_IRQn);

    ((NRF_RTC_Type*) 0x40011000UL)->TASKS_START = 1;
    nrfx_coredep_delay_us(47);

    m_rtc1_running = 
# 183 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    1
# 183 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        ;
}




static void rtc1_stop(void)
{
    NVIC_DisableIRQ(RTC1_IRQn);

    ((NRF_RTC_Type*) 0x40011000UL)->EVTENCLR = (0x1UL << (16UL));
    ((NRF_RTC_Type*) 0x40011000UL)->INTENCLR = (0x1UL << (16UL));

    ((NRF_RTC_Type*) 0x40011000UL)->TASKS_STOP = 1;
    nrfx_coredep_delay_us(47);

    ((NRF_RTC_Type*) 0x40011000UL)->TASKS_CLEAR = 1;
    m_ticks_latest = 0;
    nrfx_coredep_delay_us(47);

    m_rtc1_running = 
# 203 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 203 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                         ;
}






static inline uint32_t rtc1_counter_get(void)
{
    return ((NRF_RTC_Type*) 0x40011000UL)->COUNTER;
}






static inline uint32_t ticks_diff_get(uint32_t ticks_now, uint32_t ticks_old)
{
    return ((ticks_now - ticks_old) & 0x00FFFFFF);
}







static inline void rtc1_compare0_set(uint32_t value)
{
    ((NRF_RTC_Type*) 0x40011000UL)->CC[0] = value;
}






static void timer_list_insert(timer_node_t * p_timer)
{
    if (mp_timer_id_head == 
# 244 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                           0
# 244 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                               )
    {
        mp_timer_id_head = p_timer;
    }
    else
    {
        if (p_timer->ticks_to_expire <= mp_timer_id_head->ticks_to_expire)
        {
            mp_timer_id_head->ticks_to_expire -= p_timer->ticks_to_expire;

            p_timer->next = mp_timer_id_head;
            mp_timer_id_head = p_timer;
        }
        else
        {
            timer_node_t * p_previous;
            timer_node_t * p_current;
            uint32_t ticks_to_expire;

            ticks_to_expire = p_timer->ticks_to_expire;
            p_previous = mp_timer_id_head;
            p_current = mp_timer_id_head;

            while ((p_current != 
# 267 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                0
# 267 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                    ) && (ticks_to_expire > p_current->ticks_to_expire))
            {
                ticks_to_expire -= p_current->ticks_to_expire;
                p_previous = p_current;
                p_current = p_current->next;
            }

            if (p_current != 
# 274 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                            0
# 274 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                )
            {
                p_current->ticks_to_expire -= ticks_to_expire;
            }

            p_timer->ticks_to_expire = ticks_to_expire;
            p_timer->next = p_current;
            p_previous->next = p_timer;
        }
    }
}
# 293 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static 
# 293 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
      _Bool 
# 293 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
           timer_list_remove(timer_node_t * p_timer)
{
    timer_node_t * p_old_head;
    timer_node_t * p_previous;
    timer_node_t * p_current;
    uint32_t timeout;


    p_old_head = mp_timer_id_head;
    p_previous = mp_timer_id_head;
    p_current = p_previous;

    while (p_current != 
# 305 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                       0
# 305 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                           )
    {
        if (p_current == p_timer)
        {
            break;
        }
        p_previous = p_current;
        p_current = p_current->next;
    }


    if (p_current == 
# 316 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 316 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        )
    {
        return 
# 318 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
              0
# 318 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                   ;
    }


    if (p_previous == p_current)
    {
        mp_timer_id_head = mp_timer_id_head->next;


        if (mp_timer_id_head == 
# 327 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                               0
# 327 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                   )
        {
            ((NRF_RTC_Type*) 0x40011000UL)->TASKS_CLEAR = 1;
            m_ticks_latest = 0;
            m_rtc1_reset = 
# 331 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                   1
# 331 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                       ;
            nrfx_coredep_delay_us(47);
        }
    }


    timeout = p_current->ticks_to_expire;


    p_previous->next = p_current->next;


    p_current = p_previous->next;
    if (p_current != 
# 344 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 344 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        )
    {
        p_current->ticks_to_expire += timeout;
    }

    return (p_old_head != mp_timer_id_head);
}




static void timer_timeouts_check_sched(void)
{
    NVIC_SetPendingIRQ(RTC1_IRQn);
}




static void timer_list_handler_sched(void)
{
    NVIC_SetPendingIRQ(SWI0_EGU0_IRQn);
}
# 383 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static void timeout_handler_exec(timer_node_t * p_timer)
{
# 393 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
    p_timer->p_timeout_handler(p_timer->p_context);

}




static void timer_timeouts_check(void)
{

    if (mp_timer_id_head != 
# 403 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                           0
# 403 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                               )
    {
        timer_node_t * p_timer;
        timer_node_t * p_previous_timer;
        uint32_t ticks_elapsed;
        uint32_t ticks_expired;


        ticks_expired = 0;


        ticks_elapsed = ticks_diff_get(rtc1_counter_get(), m_ticks_latest);


        p_timer = mp_timer_id_head;


        while (p_timer != 
# 420 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                         0
# 420 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                             )
        {

            if (ticks_elapsed < p_timer->ticks_to_expire)
            {
                break;
            }


            ticks_elapsed -= p_timer->ticks_to_expire;
            ticks_expired += p_timer->ticks_to_expire;


            p_previous_timer = p_timer;
            p_timer = p_timer->next;


            if (p_previous_timer->is_running)
            {
                p_previous_timer->is_running = 
# 439 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                              0
# 439 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                                   ;
                timeout_handler_exec(p_previous_timer);
            }
        }


        if (m_ticks_elapsed_q_read_ind == m_ticks_elapsed_q_write_ind)
        {





            if (++m_ticks_elapsed_q_write_ind == (2))
            {


                m_ticks_elapsed_q_write_ind = 0;
            }
        }


        m_ticks_elapsed[m_ticks_elapsed_q_write_ind] = ticks_expired;

        timer_list_handler_sched();
    }
}
# 474 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static 
# 474 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
      _Bool 
# 474 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
           elapsed_ticks_acquire(uint32_t * p_ticks_elapsed)
{

    if (m_ticks_elapsed_q_read_ind != m_ticks_elapsed_q_write_ind)
    {

        m_ticks_elapsed_q_read_ind++;
        if (m_ticks_elapsed_q_read_ind == (2))
        {
            m_ticks_elapsed_q_read_ind = 0;
        }

        *p_ticks_elapsed = m_ticks_elapsed[m_ticks_elapsed_q_read_ind];

        m_ticks_latest += *p_ticks_elapsed;
        m_ticks_latest &= 0x00FFFFFF;

        return 
# 491 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
              1
# 491 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                  ;
    }
    else
    {

        *p_ticks_elapsed = 0;
        return 
# 497 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
              0
# 497 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                   ;
    }
}
# 508 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static void expired_timers_handler(uint32_t ticks_elapsed,
                                   uint32_t ticks_previous,
                                   timer_node_t ** p_restart_list_head)
{
    uint32_t ticks_expired = 0;

    while (mp_timer_id_head != 
# 514 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                              0
# 514 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                  )
    {
        timer_node_t * p_timer;
        timer_node_t * p_timer_expired;


        p_timer = mp_timer_id_head;


        if (ticks_elapsed < p_timer->ticks_to_expire)
        {
            p_timer->ticks_to_expire -= ticks_elapsed;
            break;
        }


        ticks_elapsed -= p_timer->ticks_to_expire;
        ticks_expired += p_timer->ticks_to_expire;


        p_timer->ticks_to_expire = 0;


        p_timer_expired = mp_timer_id_head;
        mp_timer_id_head = p_timer->next;


        if (p_timer->ticks_periodic_interval != 0)
        {
            p_timer->ticks_at_start = (ticks_previous + ticks_expired) & 0x00FFFFFF;
            p_timer->ticks_first_interval = p_timer->ticks_periodic_interval;
            p_timer->next = *p_restart_list_head;
            *p_restart_list_head = p_timer_expired;
        }
    }
}
# 558 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static 
# 558 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
      _Bool 
# 558 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
           list_insertions_handler(timer_node_t * p_restart_list_head)
{
    
# 560 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   _Bool 
# 560 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
        compare_update = 
# 560 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                         0
# 560 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                              ;

    timer_node_t * p_timer_id_old_head;


    p_timer_id_old_head = mp_timer_id_head;


    while ((p_restart_list_head != 
# 568 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                  0
# 568 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                      ) || (m_op_queue.first != m_op_queue.last))
    {
        timer_node_t * p_timer;

        if (p_restart_list_head != 
# 572 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                  0
# 572 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                      )
        {
            p_timer = p_restart_list_head;
            p_restart_list_head = p_timer->next;
        }
        else
        {
            timer_user_op_t * p_user_op = &m_op_queue.user_op_queue[m_op_queue.first];

            m_op_queue.first++;
            if (m_op_queue.first == m_op_queue.size)
            {
                m_op_queue.first = 0;
            }

            p_timer = p_user_op->p_node;

            switch (p_user_op->op_type)
            {
                case TIMER_USER_OP_TYPE_STOP:

                    if (timer_list_remove(p_user_op->p_node))
                    {
                        compare_update = 
# 595 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                        1
# 595 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                            ;
                    }

                    p_timer->is_running = 
# 598 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                         0
# 598 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                              ;
                    continue;

                case TIMER_USER_OP_TYPE_STOP_ALL:

                    while (mp_timer_id_head != 
# 603 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                              0
# 603 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                                  )
                    {
                        timer_node_t * p_head = mp_timer_id_head;

                        p_head->is_running = 
# 607 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                            0
# 607 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                                 ;
                        mp_timer_id_head = p_head->next;
                    }
                    continue;
                case TIMER_USER_OP_TYPE_START:
                    break;
                default:

                    continue;
            }

            if (p_timer->is_running)
            {
                continue;
            }

            p_timer->ticks_at_start = p_user_op->params.start.ticks_at_start;
            p_timer->ticks_first_interval = p_user_op->params.start.ticks_first_interval;
            p_timer->ticks_periodic_interval = p_user_op->params.start.ticks_periodic_interval;
            p_timer->p_context = p_user_op->params.start.p_context;

            if (m_rtc1_reset)
            {
                p_timer->ticks_at_start = 0;
            }
        }


        if (
             ((p_timer->ticks_at_start - m_ticks_latest) & 0x00FFFFFF)
             <
             (0x00FFFFFF / 2)
            )
        {
            p_timer->ticks_to_expire = ticks_diff_get(p_timer->ticks_at_start, m_ticks_latest) +
                                       p_timer->ticks_first_interval;
        }
        else
        {
            uint32_t delta_current_start;

            delta_current_start = ticks_diff_get(m_ticks_latest, p_timer->ticks_at_start);
            if (p_timer->ticks_first_interval > delta_current_start)
            {
                p_timer->ticks_to_expire = p_timer->ticks_first_interval - delta_current_start;
            }
            else
            {
                p_timer->ticks_to_expire = 0;
            }
        }

        p_timer->ticks_at_start = 0;
        p_timer->ticks_first_interval = 0;
        p_timer->is_running = 
# 661 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                       1
# 661 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                           ;
        p_timer->next = 
# 662 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                       0
# 662 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                           ;


        timer_list_insert(p_timer);
    }

    return (compare_update || (mp_timer_id_head != p_timer_id_old_head));
}




static void compare_reg_update(timer_node_t * p_timer_id_head_old)
{

    if (mp_timer_id_head != 
# 677 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                           0
# 677 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                               )
    {
        uint32_t ticks_to_expire = mp_timer_id_head->ticks_to_expire;
        uint32_t pre_counter_val = rtc1_counter_get();
        uint32_t cc = m_ticks_latest;
        uint32_t ticks_elapsed = ticks_diff_get(pre_counter_val, cc) + 3;

        if (!m_rtc1_running)
        {

            rtc1_start();
        }

        cc += (ticks_elapsed < ticks_to_expire) ? ticks_to_expire : ticks_elapsed;
        cc &= 0x00FFFFFF;

        rtc1_compare0_set(cc);

        uint32_t post_counter_val = rtc1_counter_get();

        if (
            (ticks_diff_get(post_counter_val, pre_counter_val) + 3)
            >
            ticks_diff_get(cc, pre_counter_val)
           )
        {





            rtc1_compare0_set(rtc1_counter_get());
            nrfx_coredep_delay_us(47);
            timer_timeouts_check_sched();
        }
    }
    else
    {


        rtc1_stop();

    }
}




static void timer_list_handler(void)
{
    timer_node_t * p_restart_list_head = 
# 727 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                        0
# 727 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                            ;

    uint32_t ticks_elapsed;
    uint32_t ticks_previous;
    
# 731 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   _Bool 
# 731 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                  ticks_have_elapsed;
    
# 732 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   _Bool 
# 732 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                  compare_update = 
# 732 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                   0
# 732 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                        ;
    timer_node_t * p_timer_id_head_old;
# 750 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
    ticks_previous = m_ticks_latest;
    p_timer_id_head_old = mp_timer_id_head;


    ticks_have_elapsed = elapsed_ticks_acquire(&ticks_elapsed);


    if (ticks_have_elapsed)
    {
        expired_timers_handler(ticks_elapsed, ticks_previous, &p_restart_list_head);
        compare_update = 
# 760 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                        1
# 760 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                            ;
    }



    if (list_insertions_handler(p_restart_list_head))
    {
        compare_update = 
# 767 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                        1
# 767 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                            ;
    }


    if (compare_update)
    {
        compare_reg_update(p_timer_id_head_old);
    }
    m_rtc1_reset = 
# 775 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                  0
# 775 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                       ;
}






static void user_op_enque(uint8_t last_index)
{
    m_op_queue.last = last_index;
}
# 795 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static timer_user_op_t * user_op_alloc( uint8_t * p_last_index)
{
    uint8_t last;
    timer_user_op_t * p_user_op;

    last = m_op_queue.last + 1;
    if (last == m_op_queue.size)
    {

        last = 0;
    }
    if (last == m_op_queue.first)
    {

        return 
# 809 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
              0
# 809 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                  ;
    }

    *p_last_index = last;
    p_user_op = &m_op_queue.user_op_queue[m_op_queue.last];

    return p_user_op;
}
# 829 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static uint32_t timer_start_op_schedule(timer_node_t * p_node,
                                        uint32_t timeout_initial,
                                        uint32_t timeout_periodic,
                                        void * p_context)
{
    uint8_t last_index;
    uint32_t err_code = ((0x0) + 0);

    app_util_critical_region_enter(
# 837 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   0
# 837 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
   );
    timer_user_op_t * p_user_op = user_op_alloc(&last_index);
    if (p_user_op == 
# 839 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 839 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        )
    {
        err_code = ((0x0) + 4);
    }
    else
    {
        p_user_op->op_type = TIMER_USER_OP_TYPE_START;
        p_user_op->p_node = p_node;
        p_user_op->params.start.ticks_at_start = rtc1_counter_get();
        p_user_op->params.start.ticks_first_interval = timeout_initial;
        p_user_op->params.start.ticks_periodic_interval = timeout_periodic;
        p_user_op->params.start.p_context = p_context;

        user_op_enque(last_index);
    }
    app_util_critical_region_exit(0);

    if (err_code == ((0x0) + 0))
    {
        timer_list_handler_sched();
    }

    return err_code;
}
# 873 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
static uint32_t timer_stop_op_schedule(timer_node_t * p_node,
                                       timer_user_op_type_t op_type)
{
    uint8_t last_index;
    uint32_t err_code = ((0x0) + 0);

    app_util_critical_region_enter(
# 879 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
   0
# 879 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
   );
    timer_user_op_t * p_user_op = user_op_alloc(&last_index);
    if (p_user_op == 
# 881 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 881 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        )
    {
        err_code = ((0x0) + 4);
    }
    else
    {
        p_user_op->op_type = op_type;
        p_user_op->p_node = p_node;

        user_op_enque(last_index);
    }
    app_util_critical_region_exit(0);

    if (err_code == ((0x0) + 0))
    {
        timer_list_handler_sched();
    }

    return err_code;
}





void RTC1_IRQHandler(void)
{

    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_COMPARE[0] = 0;
    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_COMPARE[1] = 0;
    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_COMPARE[2] = 0;
    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_COMPARE[3] = 0;
    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_TICK = 0;
    ((NRF_RTC_Type*) 0x40011000UL)->EVENTS_OVRFLW = 0;


    timer_timeouts_check();
}






void SWI0_EGU0_IRQHandler(void)
{
    timer_list_handler();
}


ret_code_t app_timer_init(void)
{

    rtc1_stop();


    m_op_queue.first = 0;
    m_op_queue.last = 0;
    m_op_queue.size = 10 +1;

    mp_timer_id_head = 
# 941 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                 0
# 941 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                     ;
    m_ticks_elapsed_q_read_ind = 0;
    m_ticks_elapsed_q_write_ind = 0;





    NVIC_ClearPendingIRQ(SWI0_EGU0_IRQn);
    NVIC_SetPriority(SWI0_EGU0_IRQn, 6);
    NVIC_EnableIRQ(SWI0_EGU0_IRQn);

    rtc1_init(0);

    m_ticks_latest = rtc1_counter_get();

    return ((0x0) + 0);
}


ret_code_t app_timer_create(app_timer_id_t const * p_timer_id,
                            app_timer_mode_t mode,
                            app_timer_timeout_handler_t timeout_handler)
{

    do { if (!(((m_op_queue.size != 0)))) { return ((0x0) + 8); } } while (0);

    if (timeout_handler == 
# 968 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                          0
# 968 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                              )
    {
        return ((0x0) + 7);
    }
    if (p_timer_id == 
# 972 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                     0
# 972 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                         )
    {
        return ((0x0) + 7);
    }
    if (((timer_node_t*)*p_timer_id)->is_running)
    {
        return ((0x0) + 8);
    }

    timer_node_t * p_node = (timer_node_t *)*p_timer_id;
    p_node->is_running = 
# 982 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                               0
# 982 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                    ;
    p_node->mode = mode;
    p_node->p_timeout_handler = timeout_handler;
    return ((0x0) + 0);
}

ret_code_t app_timer_start(app_timer_id_t timer_id, uint32_t timeout_ticks, void * p_context)
{
    uint32_t timeout_periodic;
    timer_node_t * p_node = (timer_node_t*)timer_id;


    do { if (!(((m_op_queue.size != 0)))) { return ((0x0) + 8); } } while (0);

    if (timer_id == 0)
    {
        return ((0x0) + 8);
    }
    if (timeout_ticks < 5)
    {
        return ((0x0) + 7);
    }
    if (p_node->p_timeout_handler == 
# 1004 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                    0
# 1004 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                        )
    {
        return ((0x0) + 8);
    }


    timeout_periodic = (p_node->mode == APP_TIMER_MODE_REPEATED) ? timeout_ticks : 0;

    return timer_start_op_schedule(p_node,
                                   timeout_ticks,
                                   timeout_periodic,
                                   p_context);
}


ret_code_t app_timer_stop(app_timer_id_t timer_id)
{
    timer_node_t * p_node = (timer_node_t*)timer_id;

    do { if (!(((m_op_queue.size != 0)))) { return ((0x0) + 8); } } while (0);

    if ((timer_id == 
# 1025 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                    0
# 1025 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                        ) || (p_node->p_timeout_handler == 
# 1025 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                                           0
# 1025 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                                               ))
    {
        return ((0x0) + 8);
    }

    p_node->is_running = 
# 1030 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                        0
# 1030 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                             ;


    return timer_stop_op_schedule(p_node, TIMER_USER_OP_TYPE_STOP);
}


ret_code_t app_timer_stop_all(void)
{

    do { if (!(((m_op_queue.size != 0)))) { return ((0x0) + 8); } } while (0);

    return timer_stop_op_schedule(
# 1042 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c" 3 4
                                 0
# 1042 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
                                     , TIMER_USER_OP_TYPE_STOP_ALL);
}


uint32_t app_timer_cnt_get(void)
{
    return rtc1_counter_get();
}


uint32_t app_timer_cnt_diff_compute(uint32_t ticks_to,
                                    uint32_t ticks_from)
{
    return ticks_diff_get(ticks_to, ticks_from);
}
# 1065 "C:\\nRF5_SDK_for_Thread_and_Zigbee_v3.2.0_9fade31\\components\\libraries\\timer\\app_timer.c"
void app_timer_pause(void)
{
    ((NRF_RTC_Type*) 0x40011000UL)->TASKS_STOP = 1;
}

void app_timer_resume(void)
{
    ((NRF_RTC_Type*) 0x40011000UL)->TASKS_START = 1;
}