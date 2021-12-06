#ifndef FLGB_SINCOS
#define FLGB_SINCOS

#define SIN(a)  (sine_wave[(UBYTE)(a)])
#define COS(a)  (sine_wave[(UBYTE)((UBYTE)(a) + 64u)])

extern const INT8 sine_wave[];

#endif