#include <stdio.h>

int main(void) {
    int tab[20], n = 0, val, i;

    while (n < 20) {
        printf("Entrez un nombre (0 pour arreter): ");
        scanf("%d", &val);
        if (val == 0) break;
        tab[19 - n] = val;
        n++;
    }

    printf("Tableau en ordre inverse: ");
    for (i = 20 - n; i < 20; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
