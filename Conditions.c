/*#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
//------------------------------------------------------------------Challenge 1

    /*int nb;

    printf("entrer un nombre\n");
    scanf("%d",&nb);

    if (nb%2 = 0){
        printf("le nombre et pair");
    }else{
        printf("le nombre est impair")
    }*/
//-----------------------------------------------------------------Challenge 2

    /*char caract;
    printf(" veuillez entrer un caractere ");
    scanf("%c",&caract);
    switch(caract){
        case 'a' : printf("c'est une voyelle") ;
                break;
        case 'e': printf("c'est une voyelle");
                break;
        case 'y': printf("c'est une voyelle");
                break;
        case 'u': printf("c'est une voyelle");
                break;
        case 'i': printf("c'est une voyelle");
                break;
        case 'o': printf("c'est une voyelle");
                break;
        default: printf("pas une voyelle");
                break;

}*/
//-----------------------------------------------------------Challenge 3
   /* int v1, v2;
    int res;

    printf("Entrez deux entiers : \n");
    scanf("%d %d", &v1, &v2);

    if (v1 == v2) {
        res = (v1 + v2) *3;
    } else {
        res = v1 + v2;
    }

    printf("Résultat : %d\n", res);*/

//-----------------------------------------------------------Challenge 4
//-----------------------------------------------------------Challenge 5

    /*int choix;
    int annee;
    int continuer = 1;

    printf("=== Programme de Conversion d'Année ===\n");

    while (continuer) {
        printf("\nEntrez une année (nombre d'années) : ");
        scanf("%d", &annee);

        printf("\n--- Menu de Conversion ---\n");
        printf("1. Convertir en mois\n");
        printf("2. Convertir en jours\n");
        printf("3. Convertir en heures\n");
        printf("4. Convertir en minutes\n");
        printf("5. Convertir en secondes\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d année(s) = %d mois\n", annee, annee * 12);
                break;
            case 2:
                printf("%d année(s) = %d jours\n", annee, annee * 365);
                break;
            case 3:
                printf("%d année(s) = %d heures\n", annee, annee * 365 * 24);
                break;
            case 4:
                printf("%d année(s) = %d minutes\n", annee, annee * 365 * 24 * 60);
                break;
            case 5:
                printf("%d année(s) = %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
                break;
            case 6:
                printf("Fin du programme.\n");
                continuer = 0;
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    }*/

//-----------------------------------------------------------Challenge 6
    /*float nombre;

    printf("Entrez un nombre : ");
    scanf("%f", &nombre);

    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est négatif.\n");
    } else {
        printf("Le nombre est nul.\n");
    }*/

//-----------------------------------------------------------Challenge 8
    /*float moyenne;

    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Mention : Recalé\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne >= 16) {
        printf("Mention : Tres bien\n");
    } else {
        printf("Moyenne invalide.\n");
    }*/


//-----------------------------------------------------------Challenge 9

    /*char caractere;

    printf("Entrez un caractere : ");
    scanf(" %c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        printf("C'est une lettre de l'alphabet.\n");

        if (caractere >= 'a' && caractere <= 'z') {
            printf("C'est une minuscule.\n");
        } else {
            printf("C'est une majuscule.\n");
        }
    } else {
        printf(" pas une lettre de l'alphabet.\n");
    }*/
//-----------------------------------------------------------Challenge 10
/*
    int jour, mois, annee;

    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    printf("%d-", jour);

    switch (mois) {
        case 1:  printf("Janvier"); break;
        case 2:  printf("Février"); break;
        case 3:  printf("Mars"); break;
        case 4:  printf("Avril"); break;
        case 5:  printf("Mai"); break;
        case 6:  printf("Juin"); break;
        case 7:  printf("Juillet"); break;
        case 8:  printf("Août"); break;
        case 9:  printf("Septembre"); break;
        case 10: printf("Octobre"); break;
        case 11: printf("Novembre"); break;
        case 12: printf("Décembre"); break;
        default:
            printf("Mois invalide");
            return 1;
    }

    printf("-%d\n", annee);
*/
//-----------------------------------------------------------Challenge 11
   /* int nb;
    printf(" veuillez entrer un nombre ");
    scanf("%d",&nb);
    switch(nb){
        case 1 : printf("lundi") ;
                break;
        case 2: printf("mardi");
                break;
        case 3: printf("mercredi");
                break;
        case 4: printf("jeudi");
                break;
        case 5: printf("vendredi");
                break;
        case 6: printf("samedi");
                break;
        case 7: printf("dimanche");
                break;
        default: printf("le nombre est incorrect");
                break;*/
//-----------------------------------------------------------Challenge 12
    /*int h1, m1, s1;
    int h2, m2, s2;

    printf("Entrez le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Entrez le deuxième instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Comparaison directe
    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier instant vient avant le deuxieme.\n");
    } else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le deuxieme instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du meme instant.\n");
    }
    return 0;
}*/
