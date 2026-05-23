#include <stdio.h>

#define SECRET 42
#define MAX_ESSAIS 5

int main(void) {
    int n, essais = 0;

    while (essais < MAX_ESSAIS) {
        printf("Devinez le nombre (1-100): ");
        scanf("%d", &n);
        essais++;
        if (n == SECRET) {
            printf("Vous avez gagne en %d essais!\n", essais);
            return 0;
        } else if (n < SECRET)
            printf("Trop petit\n");
        else
            printf("Trop grand\n");
    }

    printf("Vous avez perdu! Le nombre etait %d\n", SECRET);
    return 0;
}
