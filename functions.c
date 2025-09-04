#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int multiplication( int A, int B){
    return A * B;
}

int maximum (int A ,int B){
    int max;
    if (A<B){
        max= B;
    }
}

int minimum( int A , int B){
    int min;
    if(A<B){
        min=A;
    }
}

int fatorielle(int a){
    int factor= 1;
    for(int i=1; i<=a ;i++){
        factor *= i;
    }
    return factor;
}

int inversion (char carac){


}

int signe (int a){
    if ( a%2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int main() {
    //-----------------------------------------------------Challenge 1 : Fonction de Somme
    /*int x, y;

    printf("Entrez le premier nombre: ");
    scanf("%d", &x);

    printf("Entrez le deuxième nombre: ");
    scanf("%d", &y);

    printf("La somme de %d et %d est: %d\n", x, y, somme(x, y));*/
    //-----------------------------------------------------Challenge 2 : Fonction de Multiplication

    /*int x ,y ;
    printf("Veuillez saisir le nb1 : \n");
    scanf("%d",&x);
    printf("Veuillez saisir le nb2 : \n");
    scanf("%d",&y);

    printf(" %d * %d = %d" , x, y, multiplication(x,y));*/

//-----------------------------------------------------------Challenge 3 : Fonction de Maximum
    /*int x , y;
    printf("saisir le nb 1 : \n");
    scanf("%d",&x);

    printf("saisir le nb 2 : \n");
    scanf("%d",&y);
    printf(" le maximum entre ces deux nombres est : %d",maximum ( x,y));*/

//----------------------------------------------------------Challenge 4 : Fonction de Minimum
    /*int x, y;
    printf("saisir nb 1\n");
    scanf("%d",&x);

    printf("saisir nb 2\n");
    scanf("%d",&y);

    printf("le maximum entre ces deux nombres est : %d",minimum ( x,y));*/
//----------------------------------------------------------Challenge 5 : Fonction de Factorielle
    /*int nb;
    printf("tapez un nombre ");
    scanf("%d",&nb);
    if(nb>0){
        printf("factorielle de ce nombre est : %d",fatorielle(nb));
    }else{
        printf("impossible!");
    }*/

//----------------------------------------------------------Challenge 7 : Fonction d'Inversion de Chaîne

   /* char caractere;
    printf("entrez un caractere");
    scanf("%s", &caractere);

    printf("l'inverse de cette chaine est : %s",inversion(caractere));*/

//----------------------------------------------------------Challenge 8 : Fonction de Vérification de Parité
    int nb;
    printf("tapez un nombre ");
    scanf("%d",&nb);
        printf("le nombre est : %d",signe(nb));
    return 0;
}


