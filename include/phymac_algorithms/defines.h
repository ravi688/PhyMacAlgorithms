
#pragma once


#include <stdint.h>
#include <stdbool.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef float f32;
typedef double f64;

#define U8_MIN 0
#define U8_MAX UINT8_MAX
#define U16_MIN 0
#define U16_MAX UINT16_MAX
#define U32_MIN 0
#define U32_MAX UINT32_MAX
#define U64_MIN 0
#define U64_MAX UINT64_MAX
#define S8_MIN INT8_MIN
#define S8_MAX INT8_MAX
#define S16_MIN INT16_MIN
#define S16_MAX INT16_MAX
#define S32_MIN INT32_MIN
#define S32_MAX INT32_MAX
#define S64_MIN INT64_MIN
#define S64_MAX INT64_MAX

#include <float.h>
#define F32_MIN FLT_MIN
#define F32_MAX FLT_MAX
#define F64_MIN DBL_MIN
#define F64_MAX DBL_MAX

#define DEPRECATED_FUNCTION __attribute__((deprecated))
#define REMOVED_FUNCTION __attribute__((unavailable))
#define FORCE_INLINE_FUNCTION inline __attribute__((always_inline))
#define NO_RETURN_FUNCTION __attribute__((noreturn))
#define COLD_FUNCTION __attribute__((cold))
#define HOT_FUNCTION __attribute__((hot))
#define CONST_FUNCTION __attribute__((const))
#define PURE_FUNCTION __attribute__((pure))
#define NON_NULL_RETURN_FUNCTION __attribute__((returns_nonnull))
#define CONSTRUCTOR_FUNCTION __attribute__((constructor))
#define DESTRUCTOR_FUNCTION __attribute__((destructor))
#define UNUSED_FUNCTION __attribute__((unused))
#define WARN_UNUSED_RESULT_FUNCTION __attribute__((warn_unused_result))
#define INLINE_FUNCTION inline

#define INLINE INLINE_FUNCTION
#define FORCE_INLINE FORCE_INCLINE_FUNCTION
#define CONSTRUCTOR CONSTRUCTOR_FUNCTION
#define DESTRUCTOR DESTRUCTOR_FUNCTION
#define HOT HOT_FUNCTION
#define COLD COLD_FUNCTION

#ifdef __cplusplus
#	define RESTRICT __restrict__
#else
#	define RESTRICT restrict
#endif

#if defined(PHYMAC_ALGORITHS_STATIC_LIBRARY) || defined(PALG_STATIC_LIBRARY)
#	define PHYMAC_ALGORITHS_API
#elif defined(PHYMAC_ALGORITHS_DYNAMIC_LIBRARY) || defined(PAGL_DYNAMIC_LIBRARY)
#	define PHYMAC_ALGORITHS_API __declspec(dllimport)
#elif BUILD_DYNAMIC_LIBRARY
#	define PHYMAC_ALGORITHS_API __declspec(dllexport)
#else
#	define PHYMAC_ALGORITHS_API
#endif

#define PALG_API PHYMAC_ALGORITHS_API

#ifdef __cplusplus
#	define BEGIN_CPP_COMPATIBLE extern "C" {
#	define END_CPP_COMPATIBLE }
#else
#	define BEGIN_CPP_COMPATIBLE
#	define END_CPP_COMPATIBLE
#endif

#define DREF_TO(type, ptr) (*(type*)(ptr))
#define DREF(ptr) (*(ptr))
#define CAST_TO(to, s) ((to)(s))
#define REINTERPRET_TO(to, s) (*(to*)(&s))

#define BIT64(index) (CAST_TO(u64, 1) << index)
#define BIT32(index) (CAST_TO(u32, 1) << index)

#define OUT * const
#define IN const *

