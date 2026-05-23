#include <stdio.h>

int main(void) {
    float montant, taux, interet;
    printf("Entrez le montant initial: ");
    scanf("%f", &montant);
    printf("Entrez le taux d'interet (en %%): ");
    scanf("%f", &taux);
    interet = montant * taux / 100;
    printf("Interet gagne: %.2f\n", interet);
    return 0;
}
