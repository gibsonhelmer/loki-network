#ifndef int32_sort_h
#define int32_sort_h

#include <sodium/crypto_int32.h>

#define int32_sort crypto_kem_sntrup4591761_ref_int32_sort
extern void
int32_sort(crypto_int32 *, int);

#endif
