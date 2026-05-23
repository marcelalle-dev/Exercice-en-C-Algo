#include <stdio.h>

int main(void) {
    int tab[4][3], i, j, somme, max_somme;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++) {
            printf("Entrez tab[%d][%d]: ", i, j);
            scanf("%d", &tab[i][j]);
        }

    max_somme = 0;
    for (j = 0; j < 3; j++) {
        somme = 0;
        for (i = 0; i < 4; i++)
            somme += tab[i][j];
        printf("Somme colonne %d: %d\n", j + 1, somme);
        if (j == 0 || somme > max_somme)
            max_somme = somme;
    }

    printf("Plus grande somme de colonne: %d\n", max_somme);
    return 0;
}
