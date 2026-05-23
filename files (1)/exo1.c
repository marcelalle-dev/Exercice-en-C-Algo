#include <stdio.h>

int main(void) {
    int i;

    printf("De 1 a 100:\n");
    for (i = 1; i <= 100; i++)
        printf("%d ", i);
    printf("\n");

    printf("De 1 a 100 par 2:\n");
    for (i = 1; i <= 100; i += 2)
        printf("%d ", i);
    printf("\n");

    printf("De 100 a 1:\n");
    for (i = 100; i >= 1; i--)
        printf("%d ", i);
    printf("\n");

    printf("Multiples de 3 de 1 a 100:\n");
    for (i = 3; i <= 100; i += 3)
        printf("%d ", i);
    printf("\n");

    return 0;
}
