#include <stdio.h>

int main(void) {
    int age;
    printf("Entrez votre age: ");
    scanf("%d", &age);
    if (age > 21)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
