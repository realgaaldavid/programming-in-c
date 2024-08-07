// greatest common divisor function, 08-05 modified

#include <stdio.h>

int gcd(int u, int v) {

    int temp;

    while (v) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;

}

int main(void) {

    int result;

    result = gcd(150, 35);
    printf("the greatest common divisor of 150 and 35 is %i\n", result);

    result = gcd(1026, 405);
    printf("the greatest common divisor of 1026 and 405 is %i\n", result);

    printf("the greatest common divisor of 83 and 240 is %i\n", gcd(83, 240));

    return 0;

}