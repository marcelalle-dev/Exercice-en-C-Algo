#include <stdio.h>

int main(void) {
    int quantite, lignes = 0;
    float prix, total = 0;

    while (1) {
        do {
            printf("Entrez la quantite (0 pour terminer): ");
            scanf("%d", &quantite);
        } while (quantite < 0);

        if (quantite == 0)
            break;

        do {
            printf("Entrez le prix unitaire: ");
            scanf("%f", &prix);
        } while (prix < 0);

        total += quantite * prix;
        lignes++;
    }

    printf("Nombre de lignes: %d\n", lignes);
    printf("Prix total: %.2f euros\n", total);

    return 0;
}
