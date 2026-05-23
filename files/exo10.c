#include <stdio.h>

int main(void) {
    float pesetas, euros, dollars;
    printf("Entrez le montant en pesetas: ");
    scanf("%f", &pesetas);
    euros = pesetas / 166.386;
    dollars = euros * 1.31;
    printf("%.2f pesetas = %.2f euros\n", pesetas, euros);
    printf("%.2f euros = %.2f dollars\n", euros, dollars);
    return 0;
}
