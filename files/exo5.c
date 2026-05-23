#include <stdio.h>

int main(void) {
    int i1, i2, i3;
    float r1, r2, r3;

    i1 = 12;
    i2 = 5;
    r1 = 12.0;
    r2 = 5;

    r3 = r1 / r2;
    printf("r3 = r1/r2 = %.2f\n", r3);

    r3 = i1 / i2;
    printf("r3 = i1/i2 = %.2f\n", r3);

    i3 = i1 / r2;
    printf("i3 = i1/r2 = %d\n", i3);

    return 0;
}
