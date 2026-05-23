#include <stdio.h>

#define SECRET 42

int main(void) {
    int n, essais = 0;

    do {
        printf("Devinez le nombre (1-100): ");
        scanf("%d", &n);
        essais++;
        if (n < SECRET)
            printf("Trop petit\n");
        else if (n > SECRET)
            printf("Trop grand\n");
    } while (n != SECRET);

    printf("Bravo! Vous avez trouve en %d essais\n", essais);
    if (essais < 5)
        printf("Excellent!\n");
    else if (essais <= 10)
        printf("Pas mal!\n");
    else
        printf("Mauvais joueur!\n");

    return 0;
}
