#include <stdio.h>
#include "util.h"

void swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a  = *b;
    *b  = tmp;
}
