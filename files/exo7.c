#include <stdio.h>

int main(void) {
    int secondes, minutes, sec_restantes;
    printf("Entrez un temps en secondes: ");
    scanf("%d", &secondes);
    minutes = secondes / 60;
    sec_restantes = secondes % 60;
    printf("%d secondes = %d minutes et %d secondes\n", secondes, minutes, sec_restantes);
    return 0;
}
