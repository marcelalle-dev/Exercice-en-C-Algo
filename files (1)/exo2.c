#include <stdio.h>

int main(void) {
    int n, i;
    printf("Combien de termes voulez-vous afficher? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", 5 * i);
    printf("\n");
    return 0;
}
