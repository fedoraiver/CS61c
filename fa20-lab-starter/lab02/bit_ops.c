#include "bit_ops.h"
#include <stdio.h>

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)
    return ((x >> n) << 31 >> 31) | 0;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned *x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    unsigned y = (((*x) >> (n + 1) << 1) | v) << n;
    unsigned z = 0;
    if (n != 0) {
        z = ((*x) << (32 - n) >> (32 - n));
    }
    *x = z | y;
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned *x,
              unsigned n) {
    // YOUR CODE HERE
    unsigned y = (~(*x) >> n << 31 >> (31 - n));
    *x         = y | ((*x) >> (n + 1) << (n + 1)) | ((*x) << (32 - n) >> (32 - n));
}
