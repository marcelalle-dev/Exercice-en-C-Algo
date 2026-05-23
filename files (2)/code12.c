#include <stdio.h>

int main(void) {
    int choix;
    float base, hauteur, a, b, c, aire;

    printf("Calculer l'aire\n");
    printf("------------------------\n");
    printf("1. Triangle (base, hauteur)\n");
    printf("2. Trapeze (cote a, cote b, hauteur)\n");
    printf("3. Rectangle (base, hauteur)\n");
    printf("4. Triangle quelconque (cote a, cote b, cote c)\n");
    printf("Votre choix: ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Base: "); scanf("%f", &base);
            printf("Hauteur: "); scanf("%f", &hauteur);
            aire = (base * hauteur) / 2;
            printf("Aire du triangle: %.2f\n", aire);
            break;
        case 2:
            printf("Cote a: "); scanf("%f", &a);
            printf("Cote b: "); scanf("%f", &b);
            printf("Hauteur: "); scanf("%f", &hauteur);
            aire = ((a + b) * hauteur) / 2;
            printf("Aire du trapeze: %.2f\n", aire);
            break;
        case 3:
            printf("Base: "); scanf("%f", &base);
            printf("Hauteur: "); scanf("%f", &hauteur);
            aire = base * hauteur;
            printf("Aire du rectangle: %.2f\n", aire);
            break;
        case 4:
            printf("Cote a: "); scanf("%f", &a);
            printf("Cote b: "); scanf("%f", &b);
            printf("Cote c: "); scanf("%f", &c);
            float s = (a + b + c) / 2;
            aire = s * (s - a) * (s - b) * (s - c);
            if (aire > 0)
                printf("Aire du triangle: %.2f\n", aire);
            else
                printf("Ces cotes ne forment pas un triangle valide\n");
            break;
        default:
            printf("Option invalide\n");
    }
    return 0;
}
