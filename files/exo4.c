#include <stdio.h>

int main(void) {
    float base, hauteur, aire_triangle, rayon, aire_cercle;

    printf("Entrez la hauteur du triangle: ");
    scanf("%f", &hauteur);
    printf("Entrez la base du triangle: ");
    scanf("%f", &base);
    aire_triangle = (base * hauteur) / 2;
    printf("Triangle rectangle de hauteur %.2f et de base %.2f. Aire %.2f.\n", hauteur, base, aire_triangle);

    printf("Entrez le rayon du cercle: ");
    scanf("%f", &rayon);
    aire_cercle = 3.14159 * rayon * rayon;
    printf("Aire du cercle de rayon %.2f: %.2f\n", rayon, aire_cercle);

    return 0;
}
