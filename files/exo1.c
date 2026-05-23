#include <stdio.h>

int main(void) {
    int date, age;
    printf("Bienvenue!\n");
    printf("Entrez votre annee de naissance: ");
    scanf("%d", &date);
    age = 2026 - date;
    printf("Vous etes ne en %d. Vous avez %d ans cette annee.\n", date, age);
    return 0;
}
