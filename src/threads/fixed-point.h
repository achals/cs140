#define fixed_f 2**14;

typedef long fixed_point;

static int round_down(fixed_point);
static int round_nearest(fixed_point);
static fixed_point to_fp(int i);
static fixed_point divide(int, int);
