/*#include <stdio.h>
#include < stdlib.h>
#include <string.h>
int main (){
    //--------------------------------DECLARATION & INITIALISATION
    char chaine[6]={'H','e','l','l','o','\0'};
    char chaine[10]={'H','e','l','\0'};
    char chaine[]={'H','e','l','l','o','\0'};
    char chaine[6]="Hello";
    char chaine[10]="Hello";
    char chaine[]="Hello";  // la meuilleure methode !
    //------------------------------------------ -----AFFECTATION
    chaine[4] = 's';
    //----------------------------------DECLARATION D'UN CONSTANTE
    char *chaine="Hello";
    //-------------------
    char *chaine;
    chaine="Hello";
    //----------------------------------------AFFICHAGE & ECRETURE
    char c="ALI";
    printf("%s",c);
    //----------------
    char c[10];
    printf("Entrer votre nom :");
    scanf("%s",c); //sans adresse
    //------------------------------AVEC L'ESPACE
    char c[10];
    printf("Entrer votre nom :");
    gets(c);
    printf("%s \n",c);    //OR
    puts(c);
    //--------------------------------------------FONCTIONS SUR LES CHAINES
    char c[]='ali';
    int taille = strlen(c);        //resultat ==> 3
    //strlen() : renvoi la longueur du chaine de caractere
    printf("%d",taille);
    //========================================
    char c[]='ali';
    char d[10];
    strcpy(d,c);
    //strcpy() : copier une chaine de caractere a l'interieur d'une autre
    puts(d);  //===> resultat : d[a,l,i,\0,\0,\0,\0,\0,\0,\0]
    //========================================
    char c[]='ali';
    char d[10];
    strncpy(d,c,2);
    //strcpy() : copier n caracteres a l'interieur d'une autre
    puts(d); //===> resultat : d[a,l,\0,\0,\0,\0,\0,\0,\0,\0]
    //========================================
    char c[]="ali";
    char d[10]="Amine";
    strcat(d,c);     // la concatenation
    puts(d);  //===> resultat : d[A,m,i,n,e, ,a,l,i,\0]
    //========================================
    //la meme chose pour strncat(d,c,2);
    //========================================
    char a[]="Ali";
    char b[]="Ali";
    char c[]="ali";
    char d[]="Amine";
    printf("%d",strcmp(a,b));          //res : 0
    printf("%d",strcmp(a,c));          //res : -1 ( A < a )
    printf("%d",strcmp(a,b));          //res : 1 ( m > l)
    //=========================================
    char a[]="hello world";
    printf("%s",strchr(a,'w'));        //res : world
    //-----Autre method
    char *b=strchr(a,'o');
    printf("%s",b);                    //res: o world
    //=========================================
    char a[]="hello world";
    printf("%s",strrchr(a,'l'));        //res : ld
    //-----Autre method
    char *b=strrchr(a,'o');
    printf("%s",b);                    //res: orld
    //============================================
    char a[]="hello world";
    printf("%s",strstr(a,"lo"));        //res : lo world
    //-----Autre method
    char *b=strstr(a,"wo");
    printf("%s",b);                    //res: world
    //=============================================
    char a[]="world";
    //strrev: renvoyer l'inverse d'une chaine
    printf("%s",strrev(a));        //res : dlrow
    //============================================
    char a[]="ALI";
    //strlwr: renvoyer la chaine en minuscules
    printf("%s",strlwr(a));        //res : ali
    //=============================================
    char a[]="ali";
    //strupr: renvoyer la chaine en majuscules
    printf("%s",strupr(a));        //res : ALI

    return 0;
}*/
