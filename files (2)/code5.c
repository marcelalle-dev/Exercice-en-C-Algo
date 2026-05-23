#include <stdio.h>

#define PRIX_NORMAL 7.0

int main(void) {
    int age;
    float prix;
    printf("Entrez votre age: ");
    scanf("%d", &age);
    if (age < 5)
        prix = PRIX_NORMAL * 0.40;
    else if (age > 60)
        prix = PRIX_NORMAL * 0.45;
    else
        prix = PRIX_NORMAL;
    printf("Prix du billet: %.2f euros\n", prix);
    return 0;
}
