#include <stdio.h>

#define MAX_BITS 16

int main(void) {
    int n, bits[MAX_BITS], i, nb_bits = 0;

    printf("Entrez un entier positif (max %d): ", (1 << MAX_BITS) - 1);
    scanf("%d", &n);

    if (n <= 0 || n > (1 << MAX_BITS) - 1) {
        printf("Valeur invalide\n");
        return 1;
    }

    while (n > 0) {
        bits[nb_bits] = n % 2;
        n /= 2;
        nb_bits++;
    }

    printf("Representation binaire: ");
    for (i = nb_bits - 1; i >= 0; i--)
        printf("%d", bits[i]);
    printf("\n");

    return 0;
}
