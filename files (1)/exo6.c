#include <stdio.h>
#include <math.h>

int main(void) {
    float x, resultat;
    int n, i;

    printf("Entrez x: ");
    scanf("%f", &x);
    printf("Entrez n: ");
    scanf("%d", &n);

    resultat = pow(x, n);
    printf("Avec pow: %.2f\n", resultat);

    resultat = 1;
    for (i = 0; i < n; i++)
        resultat *= x;
    printf("Sans pow: %.2f\n", resultat);

    return 0;
}
