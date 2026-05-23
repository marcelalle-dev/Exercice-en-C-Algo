#include <stdio.h>

int main(void) {
    int a, b, c, temp;
    printf("Entrez a: ");
    scanf("%d", &a);
    printf("Entrez b: ");
    scanf("%d", &b);
    printf("Entrez c: ");
    scanf("%d", &c);

    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }

    printf("Ordre decroissant: %d %d %d\n", a, b, c);
    return 0;
}
