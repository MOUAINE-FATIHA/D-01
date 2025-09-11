/*#include <stdio.h>
#include <string.h>


// Définition de la structure Contact
struct Contact {
    char nom[50];
    char telephone[20];
    char email[50];
};

// Tableau de contacts
struct Contact contacts[100];
int totalContacts = 0;

//------------------------------------1.function d'Ajouter d'un contact

void ajouterContact() {
    if (totalContacts>= 100) {
        printf("Carnet plein!\n");
        return;
}

    printf("Nom: ");
    scanf(" %[^\n]", contacts[totalContacts].nom);

    printf("Telephone: ");
    scanf(" %[^\n]", contacts[totalContacts].telephone);

    printf("Email: ");
    scanf(" %[^\n]", contacts[totalContacts].email);

    totalContacts++;
    printf("Contact ajoute avec succes.\n");
}


//-----------------------------------2. Rechercher un contact

int rechercherContact(char nom[]) {
    for (int i = 0; i < totalContacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            return i;
}
}
    return -1;
}


//---------------------------------------3. Modifier un contact

void modifierContact() {
    char nom[50];
    printf("Entrez le nom du contact a modifier: ");
    scanf(" %[^\n]", nom);

    int index = rechercherContact(nom);
    if (index == -1) {
        printf("Contact introuvable.\n");
        return;
}

    printf("Nouveau Telephone: ");
    scanf(" %[^\n]", contacts[index].telephone);

    printf("Nouvel email: ");
    scanf(" %[^\n]", contacts[index].email);
}


//------------------------------------4. Supprimer un contact

void supprimerContact() {
    char nom[50];
    printf("Entrez le nom du contact a supprimer: ");
    scanf(" %[^\n]", nom);

    int index = rechercherContact(nom);
    if (index == -1) {
        printf("Contact introuvable.\n");
        return;
    }

    for (int i = index; i < totalContacts-1; i++) {
        contacts[i] = contacts[i + 1];
    }
    totalContacts--;

    printf("Contact supprime avec succes.\n");
    }


//----------------------------------5. Afficher tous les contacts

void afficherContacts() {
    if (totalContacts == 0) {
        printf("Aucun contact a afficher.\n");
        return;
}

    for (int i = 0; i < totalContacts; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Nom: %s\n", contacts[i].nom);
        printf("Telephone: %s\n", contacts[i].telephone);
        printf("Email: %s\n", contacts[i].email);
}
}
int main() {
    int choix;
    do {
        printf("\n Les Contacts: \n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");

        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterContact(); break;
            case 2: modifierContact(); break;
            case 3: supprimerContact(); break;
            case 4: afficherContacts(); break;
            case 5: {
                char nom[50];
                printf("Entrez le nom rechercher: ");
                scanf(" %[^\n]", nom);
                int index = rechercherContact(nom);
                if (index!= -1) {
                    printf("Nom: %s\n", contacts[index].nom);
                    printf("Telephone: %s\n", contacts[index].telephone);
                    printf("Email: %s\n", contacts[index].email);
                } else {
                    printf("Contact introuvable.\n");
                }
                break;
            }
            case 0: printf("Au revoir!\n"); break;
            default: printf("Choix invalide.\n");
        }
        } while (choix!= 0);

    return 0;
}
*/
