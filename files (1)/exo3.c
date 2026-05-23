#include <stdio.h>

int main(void) {
    int a, compteur = 0, somme = 0;
    do {
        printf("Entrez un nombre (0 pour quitter): ");
        scanf("%d", &a);
        if (a != 0) {
            printf("Nombre saisi: %d\n", a);
            compteur++;
            somme += a;
        }
    } while (a != 0);
    printf("Nombre de valeurs saisies: %d\n", compteur);
    printf("Somme des valeurs: %d\n", somme);
    return 0;
}
