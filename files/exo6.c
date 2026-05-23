#include <stdio.h>

int main(void) {
    int a, b, reste;
    printf("Entrez le premier entier: ");
    scanf("%d", &a);
    printf("Entrez le deuxieme entier: ");
    scanf("%d", &b);
    reste = a % b;
    printf("Le reste de %d / %d = %d\n", a, b, reste);
    return 0;
}
