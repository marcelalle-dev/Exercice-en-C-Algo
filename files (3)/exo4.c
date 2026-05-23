#include <stdio.h>

#define TAILLE1 5
#define TAILLE2 7

int main(void) {
    int tab1[TAILLE1], tab2[TAILLE2], tab3[TAILLE1 + TAILLE2], i;

    printf("Tableau 1 (%d elements):\n", TAILLE1);
    for (i = 0; i < TAILLE1; i++) {
        printf("tab1[%d]: ", i);
        scanf("%d", &tab1[i]);
    }

    printf("Tableau 2 (%d elements):\n", TAILLE2);
    for (i = 0; i < TAILLE2; i++) {
        printf("tab2[%d]: ", i);
        scanf("%d", &tab2[i]);
    }

    for (i = 0; i < TAILLE1; i++)
        tab3[i] = tab1[i];
    for (i = 0; i < TAILLE2; i++)
        tab3[TAILLE1 + i] = tab2[i];

    printf("Tableau 1: ");
    for (i = 0; i < TAILLE1; i++) printf("%d ", tab1[i]);
    printf("\n");

    printf("Tableau 2: ");
    for (i = 0; i < TAILLE2; i++) printf("%d ", tab2[i]);
    printf("\n");

    printf("Tableau joint: ");
    for (i = 0; i < TAILLE1 + TAILLE2; i++) printf("%d ", tab3[i]);
    printf("\n");

    return 0;
}
