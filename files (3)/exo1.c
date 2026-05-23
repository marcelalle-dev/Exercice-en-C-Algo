#include <stdio.h>

int main(void) {
    int tab[10], i;
    for (i = 0; i < 10; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Valeurs du tableau: ");
    for (i = 0; i < 10; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
