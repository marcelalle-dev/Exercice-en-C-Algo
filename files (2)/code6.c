#include <stdio.h>

int main(void) {
    float x, resultat;
    printf("Entrez la valeur de x: ");
    scanf("%f", &x);
    if (x <= 0)
        resultat = x + 3;
    else
        resultat = x * x + 2 * x;
    printf("f(%.2f) = %.2f\n", x, resultat);
    return 0;
}
