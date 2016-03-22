#include <stddef.h>

#define fixed_f 16384

typedef long fixed_point;

static int round_down(fixed_point);
static int round_nearest(fixed_point);
static fixed_point to_fp(int i);
static fixed_point divide(int, int);

static int round_down(fixed_point fp)
{
  return fp/fixed_f;
}

static int round_nearest(fixed_point fp)
{
  return fp/fixed_f;
}

static fixed_point to_fp(int i)
{
  return (i * fixed_f);
}

static fixed_point divide(int num, int denom)
{
  return ((long) num) * fixed_f / denom;
}
