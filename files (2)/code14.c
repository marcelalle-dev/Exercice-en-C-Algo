#include <stdio.h>

int main(void) {
    int c;
    printf("Entrez le numero de la carte (1-12): ");
    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("As\n");
            break;
        case 10:
            printf("Sota\n");
            break;
        case 11:
            printf("Caballo\n");
            break;
        case 12:
            printf("Rey\n");
            break;
        case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9:
            printf("Ce n'est pas un As ni une Figure\n");
            break;
        default:
            printf("Valeur invalide\n");
    }
    return 0;
}
