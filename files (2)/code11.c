#include <stdio.h>

int main(void) {
    char c;
    printf("Entrez un caractere: ");
    scanf(" %c", &c);

    switch (c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("(switch) C'est un chiffre\n");
            break;
        default:
            printf("(switch) Ce n'est pas un chiffre\n");
    }

    if (c >= '0' && c <= '9')
        printf("(if) C'est un chiffre\n");
    else
        printf("(if) Ce n'est pas un chiffre\n");

    return 0;
}
