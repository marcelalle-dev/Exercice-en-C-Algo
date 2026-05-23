#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);
    printf("Entrez la valeur de c: ");
    scanf("%d", &c);
    if (a == 1 && b == 2 && c == 3)
        printf("Acces autorise\n");
    else
        printf("Acces refuse\n");
    return 0;
}
