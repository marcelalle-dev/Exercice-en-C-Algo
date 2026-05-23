#include <stdio.h>

int main(void) {
    int a, b, c, d, e, min;
    printf("Entrez 5 nombres entiers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    printf("Le plus petit est: %d\n", min);
    return 0;
}
