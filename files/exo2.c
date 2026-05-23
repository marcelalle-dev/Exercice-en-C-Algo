#include <stdio.h>

int main(void) {
    int a, b, c, somme;
    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Entrez la valeur de c: ");
    scanf("%d", &c);
    somme = a + b + c;
    printf("La somme de a + b + c = %d\n", somme);
    return 0;
}
