#include <stdio.h>

int main(void) {
    int a, b, temp;
    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Avant echange: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Apres echange: a = %d, b = %d\n", a, b);
    return 0;
}
