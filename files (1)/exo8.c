#include <stdio.h>

int main(void) {
    int n, compteur = 0, somme = 0;

    while (compteur < 10 && somme <= 100) {
        printf("Entrez un nombre: ");
        scanf("%d", &n);
        somme += n;
        compteur++;
    }

    if (compteur >= 10 && somme > 100)
        printf("Les deux conditions sont atteintes\n");
    else if (compteur >= 10)
        printf("10 nombres saisis\n");
    else
        printf("La somme depasse 100\n");

    return 0;
}
