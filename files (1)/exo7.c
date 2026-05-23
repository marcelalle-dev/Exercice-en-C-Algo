#include <stdio.h>

int main(void) {
    float n, somme = 0, max, min, moyenne;
    int i;

    printf("Entrez le 1er nombre: ");
    scanf("%f", &n);
    max = n;
    min = n;
    somme = n;

    for (i = 2; i <= 10; i++) {
        printf("Entrez le %d eme nombre: ", i);
        scanf("%f", &n);
        somme += n;
        if (n > max) max = n;
        if (n < min) min = n;
    }

    moyenne = somme / 10;
    printf("Somme: %.2f\n", somme);
    printf("Moyenne: %.2f\n", moyenne);
    printf("Plus grand: %.2f\n", max);
    printf("Plus petit: %.2f\n", min);

    return 0;
}
