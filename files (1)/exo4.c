#include <stdio.h>
#include <string.h>

int main(void) {
    char nom[10], mdp[10];
    int essais = 0;

    while (essais < 3) {
        printf("Nom d'utilisateur: ");
        scanf("%s", nom);
        printf("Mot de passe: ");
        scanf("%s", mdp);
        if (strcmp(nom, "root") == 0 && strcmp(mdp, "1234") == 0) {
            printf("Connexion reussie\n");
            return 0;
        }
        essais++;
        printf("Identifiants incorrects\n");
    }
    printf("Plus d'essais disponibles\n");
    return 0;
}
