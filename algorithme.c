#include <stdio.h>

void bubbleSortCroissante(int arr[], int n) {
    int i, j, temp;
    //i < n-1 : Elle contrôle le nombre de passages sur le tableau.
    //On fait n - 1 = 4 passages maximum (c’est suffisant pour trier).
    for (i = 0; i < n - 1; i++) {
        //Elle évite de comparer les derniers éléments déjà triés grâce à n - i - 1.
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//--------------------------------------------TRI DECROISSANT

int bubbleSortDecroissant(int arr[], int n){
    int tmp, swaps=0;
    for (int i=0; i< n-1; i++){
        for (int j = 0 ; j < n-i-1; j++){
            if ( arr[j] < arr[j+1]){
                tmp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=tmp;

                swaps++;
            }
        }
    }
return swaps;
}
//-----------------------------------TTRI D'ELEMENT ALPHABETIQUE
//==========EX3=============tri par sélection(o.croissant)

    int sortselection(int arr[], int n){
        int tmp,i,j;
        int swaps=0;
        int min;

        for(i=0; i < n-1; i++){
            min = i;
            for (j=i+1 ; j<n ;j++ ){
                if (arr[j]< arr[min]){
                    min = j;
                }
            }

            if( min != i){
             tmp = arr[i];
             arr[i]=  arr[min];
             arr[min]=tmp;
             swaps++;
            }
        }
    return swaps;
    }
//----------------------------------------------exercice liniaire
    int liniaireRechrche(int tab[],int n , int valeur){
        for(int i = 0; i<n ; i++ ){
            if(tab[i] == valeur){
                return i;
            }else
                return -1;
        }
    }
//--------------------------------------------EX3. liniaire
    int lineairemin(int tab[],int lenght){
        int min= tab[0];
        for (int i=1; i<lenght; i++){
            if(min > tab[i]){
                min = tab[i];
            }
            }
        return min;
    }
//----------------------------------------EX4.Maximum.lineaire

    int lineairemax(int tab[], int taille){
        int max=tab[0];
        for (int i=1 ; i <= taille; i++ ){
            if(max< tab[i]){
                max=tab[i];
            }
        }
        return max;
    }
//-----------------------------------EX5.Recherche d'une Sous-chaîne
    int RechercheSousChaine(char chaine[], int taille, char caractere){
        for( int i=0 ; i < taille ; i++){
            if( caractere== chaine[i]){
                return i;
            }else{
                return 0;
            }
        }
    }

//-----------------------------------------------exercice binaire:

    int rechercheBinaire(int tableau[], int taille, int nombre){
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tableau[milieu] == nombre)
            return milieu;
        else if (tableau[milieu] < nombre)
            debut = milieu + 1;
        else
            fin = milieu - 1;
}

    return 0;
}
int main() {
    //==========EX1=========================Tri à Bulles croissant
    /*int arr[] = {5, 9, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Tableau avant le trie : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSortCroissante(arr, n);

    printf("Tableau trie:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");*/
//------------------------------------TRI DECROISSANT AVEC CMPTEUR
    /*int arr[]={7,6,2,4,3};
    int i,n = sizeof(arr)/sizeof(arr[0]);
    int swaps;

    printf(" le tableau avant le trie : \n");
    for (i=0; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    swaps = bubbleSortDecroissant(arr,n);

    printf(" le tableau apres le trie : \n");
    for (i=0; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("le nombre total de changement (swaps) effectues pendant le tri est : %d",swaps);*/

    //----------------------------------TRI D'ELEMENT ALPHABETIQUE
    //==========EX3=============tri par sélection(o.croissant)

    /*int arr[]={2,45,77,33,16,47};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i,swaps;

    printf("le tableau avant le tri: \n");
    for (i=0; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    swaps= sortselection(arr, n);

    printf("le tableau apres le tri: \n");
    for (i=0; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("le nombre total de changement (swaps) effectues pendant le tri est : %d",swaps);*/


    //======================================= ALGO. RECHERCHE
    //--------------------------Challenge 1 : Recherche Linéaire

    /*int tab[]={2,12,55,19,20};
    int n = sizeof(tab)/sizeof(tab[0]);
    int res,valeur;

    printf("tapez une valeur \n ");
    scanf("%d",&valeur);
    res = liniaireRechrche(tab,n,valeur);

    if (res != -1) {
        printf("La valeur %d se trouve sur indice %d.\n", valeur, res);
    } else {
        printf("La valeur %d pas existe \n", valeur);
    }*/
//-------------------------------------EX2.recherche binaire
    /*int tableau[] = {3,46,10,5,99};
    int taille = sizeof(tableau)/ sizeof(tableau[0]);
    int nombre = 5;
    bubbleSortCroissante(tableau, taille);

    printf("Tableau trie:\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    int resultat = rechercheBinaire(tableau, taille, nombre);

    if (resultat!= 0)
        printf("element trouve dans %d\n", resultat);
    else
        printf("element pas exsist\n");*/
//----------------------------------EX3.minimum.lineaire
 /*int tab[]={21,4,65,87,1,3};
 int lenght=sizeof(tab)/sizeof(tab[0]);
 int i;
 int res= lineairemin(tab,lenght);

 printf("le minimum est : %d \n",res);*/
//----------------------------------------EX4.Maximum.lineaire
    /*int tab2[]={21,4,65,87,1,3};
    int taille =sizeof(tab2)/sizeof(tab2[0]);
    int resultat = lineairemax(tab2, taille);

    printf(" le maximum est :%d" , resultat);*/
//---------------------------------------EX5.Recherche d'une Sous-chaîne
    char chaine[]= "hello";
    char caractere;
    printf("saisir un caractere ");
    scanf("%c",&caractere);

    printf("")
    return 0;
}
