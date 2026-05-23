#include <stdio.h>

int main(void) {
    int a, b;
    printf("Entrez le premier nombre: ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &b);
    if (a % b == 0)
        printf("%d est divisible par %d\n", a, b);
    else
        printf("%d n'est pas divisible par %d\n", a, b);
    return 0;
}
