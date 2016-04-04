#include <stdint.h>

/* This represents 14 bits of sub-integer precision */
#define FP_PRECISION 16384


typedef int32_t fixed_point;

static inline fixed_point int2fp(int32_t num) {
  return num*FP_PRECISION;
}

static inline int32_t fp2int(fixed_point fp) {
  return fp/FP_PRECISION;
}

static inline fixed_point fpadd(fixed_point first, fixed_point second) {
  return first + second;
}

static inline fixed_point fpsub(fixed_point first, fixed_point second) {
  return first - second;
}

static inline fixed_point fpmul(fixed_point first, fixed_point second) {
  int64_t product = ((int64_t)first)*second/FP_PRECISION;
  return product;
}

static inline fixed_point fpdiv(fixed_point first, fixed_point second) {
  int64_t quotient = ((int64_t)first)*FP_PRECISION/second;
  return quotient;
}
