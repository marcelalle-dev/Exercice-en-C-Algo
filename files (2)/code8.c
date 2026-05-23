#include <stdio.h>

int main(void) {
    int n, chiffre1, chiffre2, somme, nb_pairs;
    printf("Entrez un nombre a deux chiffres: ");
    scanf("%d", &n);
    if (n >= 10 && n <= 99) {
        chiffre1 = n / 10;
        chiffre2 = n % 10;
        somme = chiffre1 + chiffre2;
        nb_pairs = 0;
        if (chiffre1 % 2 == 0) nb_pairs++;
        if (chiffre2 % 2 == 0) nb_pairs++;
        printf("Somme des chiffres: %d\n", somme);
        printf("Nombre de chiffres pairs: %d\n", nb_pairs);
    } else {
        printf("Le nombre n'a pas deux chiffres\n");
    }
    return 0;
}
