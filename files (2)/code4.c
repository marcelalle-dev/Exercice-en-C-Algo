#include <stdio.h>

int main(void) {
    int a, b;
    printf("Entrez le premier nombre: ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &b);
    if (a > b)
        printf("Le plus grand est: %d\n", a);
    else if (b > a)
        printf("Le plus grand est: %d\n", b);
    else
        printf("Les deux nombres sont egaux\n");
    return 0;
}
