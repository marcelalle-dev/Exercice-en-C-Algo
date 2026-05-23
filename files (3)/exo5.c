#include <stdio.h>

#define N 4

int main(void) {
    int tab[N][N], i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            tab[i][j] = 1;

    printf("Tableau rempli de 1:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", tab[i][j]);
        printf("\n");
    }

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            tab[i][j] = (i == j) ? 1 : 0;

    printf("Diagonale principale a 1:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", tab[i][j]);
        printf("\n");
    }

    return 0;
}
