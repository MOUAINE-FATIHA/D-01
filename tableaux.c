#include <stdio.h>

int main(){
    // Challenge 1 : Initialisation et Affichage
    /*
    int tab[] = {1,2,3,4,5};
    int i=0;
    int lenght = sizeof(tab)/sizeof(tab[0]);
    for(i = 0;i < lenght;i++ ){
        printf("%d\n",tab[i]);
    };
    /



    //Challenge 2 : Saisie et Affichage des Éléments
    /
    int tab1[100];
    int i=0;
    int nombre;
    scanf("%d", &nombre);
    for(i = 0;i < nombre;i++ ){
        scanf("%d", &tab1[i]);
    };
    for(i = 0;i <nombre;i++ ){
        printf("%d\n",tab1[i]);
    };
    /



    //Challenge 3 : Somme des Éléments
    /
    int tab2[]= {1,2,3,4,5,5,8};
    int i=0;
    int somme=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        somme += tab2[i];
    };
    printf("la somme %d",somme);
    /



    //Challenge 4 : Trouver le Maximum
    /
    int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int max=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] > max ){
            max = tab2[i];
        };
    };
    printf("la max c'est  %d",max);
    */




    //Challenge 5 : Trouver le Minimum

    int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int min;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] < min ){
            min = tab2[i];
        };
    };
    printf("la min c'est  %d",min);

    return 0;
}
