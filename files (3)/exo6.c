#include <stdio.h>

#define N 3
#define M 4

int main(void) {
    int tab[N][M], trans[M][N], i, j;

    printf("Entrez la matrice %dx%d:\n", N, M);
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            printf("tab[%d][%d]: ", i, j);
            scanf("%d", &tab[i][j]);
        }

    printf("Matrice originale:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            printf("%d ", tab[i][j]);
        printf("\n");
    }

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            trans[j][i] = tab[i][j];

    printf("Matrice transposee:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
