#include <stdio.h>

int main(void) {
    int n;
    printf("Entrez un nombre entier: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Le nombre est pair\n");
        if (n % 3 == 0)
            printf("Il est aussi divisible par 3\n");
    } else {
        printf("Le nombre est impair\n");
    }
    return 0;
}
