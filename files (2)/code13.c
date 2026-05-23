#include <stdio.h>

#define HEURES_NORMALES 37.5

int main(void) {
    float heures, salaire_heure, salaire_total;
    printf("Entrez les heures travaillees: ");
    scanf("%f", &heures);
    printf("Entrez le salaire par heure (euros): ");
    scanf("%f", &salaire_heure);

    if (heures <= HEURES_NORMALES) {
        salaire_total = heures * salaire_heure;
    } else {
        salaire_total = HEURES_NORMALES * salaire_heure;
        salaire_total += (heures - HEURES_NORMALES) * salaire_heure * 2;
    }

    printf("Salaire hebdomadaire: %.2f euros\n", salaire_total);
    return 0;
}
