#include <stdio.h>
#include <string.h>

int main() {
    int i, j, choix, cmp = 0;
    int prix, quantite, nouvelleQuantite;
    char titreRechercher[100];
    char TableTitre[100][100], TableAuteur[100][100];
    int TablePrix[100], TableQuantite[100];
    int repeter;

    do {
        printf("\nMENU : \n");
        printf("1 - Ajouter un livre\n");
        printf("2 - Afficher tous les livres\n");
        printf("3 - Mettre a jour la quantite\n");
        printf("4 - Supprimer un livre\n");
        printf("5 - Afficher le nombre total de livres\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("tapez le titre du livre: ");

                scanf("%s", TableTitre[cmp]);

                printf("tapez l'auteur du livre: ");
                scanf("%s", TableAuteur[cmp]);

                printf("Prix du livre: ");
                scanf("%d", &TablePrix[cmp]);

                printf("Quantite: ");
                scanf("%d", &TableQuantite[cmp]);

                cmp++;
                printf("Livre ajoute avec succes.\n");
                break;

            case 2:
                for (i = 0; i < cmp; i++) {
                    printf("Livre %d: Titre : %s, Auteur : %s, Prix : %d, quantite : %d\n",
                           i + 1, TableTitre[i], TableAuteur[i], TablePrix[i], TableQuantite[i]);
}
                break;

            case 3: {
                int trouve = 0;
                printf("Titre du livre a modifier: ");
                scanf("%s", titreRechercher);

                printf("Nouvelle quantite: ");
                scanf("%d", &nouvelleQuantite);

                for (i = 0; i < cmp; i++) {
                    if (strcmp(titreRechercher, TableTitre[i]) == 0) {
                        TableQuantite[i] = nouvelleQuantite;
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Livre not existe.\n");
                }
                break;
            }

            case 5:
                printf("Nombre total de livres: %d\n", cmp);
                break;

            default:
                printf("Choix invalide.\n");
}

        printf("Voulez-vous continuer? (1= Oui/ 0= Non): ");
        scanf("%d", &repeter);

} while (repeter == 1);

    return 0;
}
