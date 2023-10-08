#include "lfsr.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    *reg = (((((*reg) & ((uint16_t)(1) << 0))) >> 0) ^ ((((*reg) & ((uint16_t)(1) << 2))) >> 2) ^ ((((*reg) & ((uint16_t)(1) << 3))) >> 3) ^ ((((*reg) & ((uint16_t)(1) << 5)))) >> 5) << 15 | ((*reg) >> 1);
}
