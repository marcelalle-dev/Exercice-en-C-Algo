#include <stdio.h>

int main(void) {
    float x1, y1, x2, y2, pente;
    printf("Entrez x1: "); scanf("%f", &x1);
    printf("Entrez y1: "); scanf("%f", &y1);
    printf("Entrez x2: "); scanf("%f", &x2);
    printf("Entrez y2: "); scanf("%f", &y2);

    if (x2 - x1 == 0)
        printf("La pente est infinie (droite verticale)\n");
    else {
        pente = (y2 - y1) / (x2 - x1);
        printf("La pente de la droite est: %.2f\n", pente);
    }
    return 0;
}
