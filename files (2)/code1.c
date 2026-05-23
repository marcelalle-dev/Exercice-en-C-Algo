#include <stdio.h>

int main(void) {
    int n;
    printf("Entrez un nombre entier: ");
    scanf("%d", &n);
    if (n > 100)
        printf("Le nombre est superieur a 100\n");
    return 0;
}
