/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//=====================================================================================BOUCLES
//------------------------------------------------------------------ex1
    /*int M,nb, i;
    printf("Veuillez taper un nombre !\n");
    scanf("%d",&nb);
    for(i=0 ; i<=10 ; i++){
        M=nb*i;
        printf("%d x %d = %d \n" ,nb, i, M);
    }*/
//------------------------------------------------------------------ex2
    /*int n, i;
    int factorielle = 1;
    printf("taper un nombre n !\n");
    scanf("%d",&n);
    if(n > 0){
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }
    }
    printf(" %d ! = %d", n , factorielle);*/
//------------------------------------------------------------------ex3
    /*int n, i, somme;
    printf("taper un nombre !\n");
    scanf("%d",&n);
    if (n < 0) {
        printf("nombre incorrect\n");
    }
    else{
        for (i = 1; i <= n; i++) {
            somme += i;
        }
        printf(" %d => %d", n , somme);
    }*/
//------------------------------------------------------------------ex4

    /*int n, nbr = 1, compteur = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);

    while (compteur < n) {
        printf("%d", nbr);
        nbr += 2;
        compteur++;
    }
    printf("\n");*/


//------------------------------------------------------------------ex5
    /*int base, exposant;
    int res = 1;
    int i = 0;

    printf("taper le nombre base !\n");
    scanf("%d",&base);

    printf("taper le nombre exposant !\n");
    scanf("%d",&exposant);
        while (i < exposant) {
        res *= base;
        i++;
        }
    printf(" %d ^ %d = %d", base, exposant , res);*/
//------------------------------------------------------------------ex6

    /*int n, nbr =0 , compteur = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);

    while (compteur < n) {
        printf("%d", nbr);
        nbr += 2;
        compteur++;
    }
    printf("\n");*/

//------------------------------------------------------------------ex7
    /*int nbr , chiffre;
    printf("Entrez un nombre: \n");
    scanf("%d", &nbr);

    while (nbr!= 0) {
        chiffre = nbr % 10;
        printf("%d", chiffre);
        nbr = nbr / 10;
    }
    printf("\n");*/


//------------------------------------------------------------------ex9
    /*int n , compteur = 0;
    printf("Entrez un nombre: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("nombre incorrect !");
    } else {
        while (n!= 0) {
            n = n / 10;
            compteur++;
        }
        printf("%d", compteur);
    }*/
//------------------------------------------------------------------ex10

    /*int n, i, somme;
    printf("Entrer un nombre !\n");
    scanf("%d",&n);
    if (n < 0) {
        printf("nombre incorrect\n");
    }
    else{
        for (i = 1; i <= n; i++) {
            somme += i;
        }
        printf(" les %d entier naturels sont : %d", n , somme);
    }*/
    //return 0;
    //}
