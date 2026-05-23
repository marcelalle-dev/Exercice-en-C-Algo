#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        printf("Entrez un nombre: ");
        scanf("%d", &n);
        if (n <= 0)
            break;
        if (n >= 100 && n % 2 == 0)
            printf("Grand nombre pair\n");
    }

    return 0;
}
