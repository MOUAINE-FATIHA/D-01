#include <stdio.h>
#include <string.h>

// Définition de la structure
/*struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};*/
// method 2 :
/*typedef struct{
    char nom[50];
    char prenom[50];
    int age;
}Personne;*/
//---------------------------------------------------challenge 2
/*struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[5];
};*/
//---------------------------------------------------challenge 3
    /*struct rectangle{
    int longueur;
    int largeur;
    };
    int calcul(int lo , int la){
        int aire = lo * la;
    }*/
//-----------------------------------------------------challenge 5
    struct livre{
    char titre[50];
    char auteur[50];
    int annee;
    };
    void informations(char titre[] , char auteur[], int annee){
        printf("Titre: %s\nAuteur: %s\nAnnée: %d\n", titre, auteur, annee);
    }

int main() {
    /*
    // Creation d'une variable de type Personne
    struct Personne p;
    // suite method 2 :
    //Personne p ;
//====================================
    // Affectation des valeurs
    strcpy(p.nom, "salimi");
    strcpy(p.prenom, "israe");
    p.age = 26;
    //autre method :
    //Personne p = {"salimi","israe",26};
//====================================
    // Affichage des valeurs
    printf("Nom: %s\n", p.nom);
    printf("Prenom: %s\n", p.prenom);
    printf("Age: %d ans\n", p.age);
    */
    //-----------------------------------------------challenge 2
    /*struct Etudiant e;

    // Affectation des valeurs
    strcpy(e.nom, "Benali");
    strcpy(e.prenom, "Sara");

    // Exemple de notes
    e.notes[0] = 14;
    e.notes[1] = 16;
    e.notes[2] = 13;
    e.notes[3] = 15;
    e.notes[4] = 17;

    // Affichage des informations
    printf("Nom: %s\n", e.nom);
    printf("Prénom: %s\n", e.prenom);
    printf("Notes: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", e.notes[i]);
    }
    printf("\n");*/
    //-----------------------------------------------challenge 3
    /*struct rectangle rec1;
    rec1.longueur = 4;
    rec1.largeur = 2;
    printf("l'aire de cet rectangle est : %d",calcul(rec1.longueur , rec1.largeur));*/
    //------------------------------------------------Challenge 5 : Structure et Fonction de Retour
    struct livre liv;
    strcpy(liv.titre ,"livre1");
    strcpy(liv.auteur ,"auteur1");
    liv.annee = 2004;

    informations(liv.titre ,liv.auteur, liv.annee);

    return 0;
}

