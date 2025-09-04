/*#include <stdio.h>

int main(){
    //--------------------------------------------Challenge 1 : Initialisation et Affichage
    /*
    int tab[] = {1,2,3,4,5};
    int i=0;
    int lenght = sizeof(tab)/sizeof(tab[0]);
    for(i = 0;i < lenght;i++ ){
        printf("%d \n",tab[i]);
    };
    /



    //-----------------------------------------Challenge 2 : Saisie et Affichage des Éléments
    /*
    int tab[100];
    int i=0;
    int nombre;
    printf("donne un nombre ");
    scanf("%d", &nombre);
    for(i = 0;i < nombre;i++ ){
        printf("remplir le tableaux");
        scanf("%d", &tab[i]);
    };
    for(i = 0;i <nombre;i++ ){
        printf("%d\n",tab[i]);
    };
    */
    //---------------------------------------------Challenge 3: Somme des Éléments

    /*int tab2[]= {1,2,3,4,5,5,8};
    int i=0;
    int somme=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        somme += tab2[i];
    };
    printf("la somme %d",somme);*/
    //-------------------------------------------------------Challenge 4 : Trouver le Maximum

    /*int tab2[]= {1,2,3,4,5,6,7,8,9,10,11};
    int i=0;
    int max=0;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] > max ){
            max = tab2[i];
        };
    };
    printf("le max est  %d",max);*/

    //-----------------------------------------------------------Challenge 5 : Trouver le Minimum

    /*int tab2[]= {1,2,3,4,5,5,8,9,16,4};
    int i=0;
    int min;
    int lenght = sizeof(tab2)/sizeof(tab2[0]);
    for(i = 0;i < lenght;i++ ){
        if(tab2[i] < min ){
            min = tab2[i];
        };
    };
    printf("la min c'est  %d",min);*/
    //------------------------------------------------------------Challenge 6 : Multiplication des Éléments
    /*int tab3[]= {1,2,3,4,5};
    int i;
    int mult;
    int nb;
    int lenght = sizeof(tab3)/sizeof(tab3[0]);
    printf("donne un nb");
    scanf("%d", &nb);
    for(i = 0;i < lenght;i++ ){
            tab3[i] *= nb;
        };
    for(i = 0;i < lenght;i++ ){
            printf("la resultat est  %d \n", tab3[i]);
        };*/
//--------------------------------------------------------------------Challenge 7
    /*int tab[100];
    int nb , i, j, var;
    printf("donne un nombre ");
    scanf("%d", &nb);
    for(i = 0;i < nb;i++ ){
        printf("Entrez la valeur %d: ", i + 1);
        scanf("%d", &tab[i]);
    };

    for (i = 0; i < nb - 1; i++) {
        for (j = i + 1; j < nb; j++) {
            if (tab[i]> tab[j]) {
                var = tab[i];
                tab[i] = tab[j];
                tab[j] = var;
    }}}
    printf("Tableau trié:\n");
    for (i = 0; i < nb; i++) {
        printf("%d ", tab[i]);
}
    printf("\n");*/
//--------------------------------------------------------------Challenge 8 : Copie d'un Tableau
    /*int tab1[]= {1,2,3,4,5};
    int tab2[5];
    int i;
    int lenght = sizeof(tab1)/sizeof(tab1[0]);
    for(i = 0;i < lenght;i++ ){
            tab2[i] = tab1[i];
    };
    printf("");
    return 0;
}*/
