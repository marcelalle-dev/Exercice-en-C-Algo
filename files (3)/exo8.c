#include <stdio.h>

int main(void) {
    float notes[5][6], poids[6] = {1.25, 1.0, 0.9, 0.75, 0.6, 0.5};
    float somme_ponderee = 0, somme_poids = 0;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Cours %d - entrez les notes (6 examens):\n", i + 1);
        for (j = 0; j < 6; j++) {
            printf("  Examen %d: ", j + 1);
            scanf("%f", &notes[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            if (notes[i][j] >= 10) {
                somme_ponderee += notes[i][j] * poids[j];
                somme_poids += poids[j];
                break;
            }
        }
    }

    if (somme_poids > 0)
        printf("Moyenne ponderee: %.2f\n", somme_ponderee / somme_poids);
    else
        printf("Aucun cours valide\n");

    return 0;
}
