// bitwise shift function, 12-03 modified

#include <stdio.h>

unsigned int shift(unsigned int value, int n) {

    if (n > 0) value <<= n; // left shift
    else value >>= -n; // right shift

    return value;

}

int main(void) {

    unsigned int shift(unsigned int value, int n);

    unsigned int w1 = 0177777u, w2 = 0444u;

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
    printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
    printf("%o\n", shift(shift(w1, 3), 3));

    return 0;

}