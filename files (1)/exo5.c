#include <stdio.h>

int main(void) {
    int i;
    printf("Decimal  Caractere  Hexadecimal\n");
    printf("-----------------------------------\n");
    for (i = 33; i <= 126; i++)
        printf("%-9d%-11c%x\n", i, i, i);
    return 0;
}
