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
    printf("%d",tab2[i]);*/

//=========================================================================Exercices de bases [TABLEUX]

    /*int tab1[10];
    for (int i=0 ;i< 10;i++){
        tab1[i]=0;
    }
    for (int i=0 ;i< 10;i++){
        printf("tab1[%d] = %d \n",i+1,tab1[i]);
    }*/

    //--------------------------------------------------EX2

    /*char tab2[6];
    int i;
    tab2[0]='a';
    tab2[1]='e';
    tab2[2]='o';
    tab2[3]='y';
    tab2[4]='u';
    tab2[5]='i';
    for (i=0 ; i<6 ; i++)
        printf("tab2[%d] = %c \n",i+1 ,tab2[i]);*/
    //-------------------------------------------------EX3

    /*int t3[4];
    int i;
    int somme =0;
    int produit =1;
    int moyenne;

    for (i=0;i<4;i++){
        printf("vueillez remplir le tableaux \n");
        scanf("%d",&t3[i]);
    }

    for (i=0; i<4;i++){
        somme += t3[i];
        produit *= t3[i];
        moyenne = produit/somme;
    }
    printf("la somme est : %d \n" , somme);
    printf("le produit est : %d \n" , produit);
    printf("la moyenne est : %d \n" , moyenne);*/

    //--------------------------------------------------EX4
    /*int t1[3],t2[3], i;
    int somme=0;
    int produit;

    for (i=0 ; i< 3 ; i++){
        printf("remplir le tableaux 1: \n");
        scanf("%d",&t1[i]);
    }
    for(i=0 ; i<3 ; i++){
        printf("remplir le tableaux 2: \n");
        scanf("%d",&t2[i]);
    }
    for (i=0;i<3;i++){
        produit = t1[i]*t2[i];
        somme += produit;
    }
    printf("la resultat est : %d",somme);*/

    //------------------------------------------------------EX5
    /*int T[5];
    int min , i;
    for (  i=0; i<5;i++){
        printf("veulliez remplir le tableau \n");
        scanf("%d",&T[i]);
    }
    min = T[0];
    for (i=0; i<5;i++){
        if ( min>T[i]){
            min = T[i];
        }
    }
    printf(" le minimum est : %d :",min);*/
    //----------------------------------------------------EX6
    /*int T[3];
    int i , max;
    for ( i=0 ; i< 3; i++){
        printf(" veuillez remplir le tableau : \n ");
        scanf(" %d",&T[i]);
    }
    max = T[0];
    for ( i=1; i< 3; i++){
        if (max  < T[i]){
        max = T[i];
        }
    }
    printf(" la maximum est : %d" , max);*/
//-------------------------------------------------------EX7
    /*int T[3];
    int nb , i ,x=0;
    for ( i=0;i<3;i++){
        printf("remplir le tableau\n");
        scanf("%d",&T[i]);
    }
    printf(" donne moi un nombre\n");
    scanf(" %d", &nb);
    for ( i=0;i<3;i++){
        if (nb == T[i]){
        x++;
        }
    }
    if ( x==0){
        printf(" %d ne se trouve pas dans le tableau !",nb);
    }else
        printf(" %d se trouve dans le tableau !", nb);*/
    //---------------------------------------------------EX8
    /* int T[3];
    int nb , i , cmp=0;
    for ( i=0;i<3;i++){
        printf("remplir le tableau\n");
        scanf("%d",&T[i]);
    }
    printf(" donne moi un nombre\n");
    scanf(" %d", &nb);

    for ( i=0;i<3;i++){
         if (nb == T[i]){
            cmp++;
         }
    }
    if (cmp==0){
        printf("%d ne se trouve pas dans le tableau",nb);
    }else
        printf("le nobmre d'existence de %d est %d",nb,cmp);
*/
    //---------------------------------------------------EX9
    /*int t[3];
    int i, somme=0,moy, nb=0;
    for ( i=0;i<3;i++){
        printf("remplir le tableau\n");
        scanf("%d",&t[i]);
    }
    for(i=0; i<3;i++){
        somme+=t[i];
        moy= somme/3;
    }
    printf("la moyenne est: %d\n",moy);
    for ( i=0;i<3;i++){
        if(moy<t[i]){
            nb++;
        }
    }
    if(nb==0){
        printf(" pas de note superieur!");
    }else
        printf(" le nombre des notes superieures a la moyenne est : %d", nb);*/
    //--------------------------------------------------EX10

     /* float tab[20];
      int i;
      float somme=1000;

      for (i=0;i<20;i++){
        somme += (somme * 2)/100;
        tab[i]=somme;
      }
      for (i=0;i<20;i++){
        printf("A l'anniversaire de mohamed %d , la somme de mohamed est : %.2f \n",i+1,tab[i]);
      }*/
      //---------------------------------------------------EX11

      /*int te[6]={1,2,3,4,5,6};
      int i , ts[6];

      for (i=0; i<6 ; i++){
        ts[5-i] = te[i];
      }
      for (i=0; i<6 ; i++){
        printf("le tableau inverse est : ts[%d] = %d \n",i+1, ts[i]);
      }*/
      //---------------------------------------------------EX12

      //------------------------------------???
      /*int i , n ,cmp=0,x=2;
      int t[n];
      int estPremier;

      printf("entrez un nombre !");
      scanf("%d",&n);

      do{
        estPremier =0;
        for(i=2; i<=x/2; i++){
            if (x%i ==0){
                estPremier=1;
            break;
            }
        }
        if(estPremier ==0){
            t[cmp]=x;
            cmp++;
        }
        x++
      }while (cmp <n);
      printf("les %d premiers sont : \n",n);
      for (i=0 ; i<n; i++){
        printf("%d\n",t[i]);
      }*/
      //------------------------------------------------------EX13

    /*int T[3];
    int i , max1 , max2;
    for ( i=0 ; i< 3; i++){
        printf(" veuillez remplir le tableau : \n ");
        scanf(" %d",&T[i]);
    }
    max1 = T[0];
    max2 = T[0];
    for ( i=1; i< 3; i++){
        if (max1  < T[i]){
            max2 = max1;
            max1 = T[i];
        }
        if (max2  < T[i] && T[i] < max1){
        max2 = T[i];
        }
    }
    printf(" les 2 nombres maximum est : %d , %d" , max1, max2);*/
//===============================CRUD==============================
//-------------------------------------------------INSERTION A UNE POSITION SPECIFIQUE:
    /*int t[100];
    int i, nb, pos , taille;

    printf("veuillez saisir la taille du tableau\n");
    scanf("%d",&taille);
    for(i=0 ; i<taille; i++){
        printf("veuillez remplir le tableau\n");
        scanf("%d",&t[i]);
    }
    printf("veuillez saisir un nombre\n");
    scanf("%d",&nb);
    printf("veuillez saisir la position sur tableau\n");
    scanf("%d",&pos);

    if (pos<=0 || pos> taille+1){
        printf("impossible !");
    }else{
        for(i=taille ; i >= pos ; i--){
            t[i]=t[i-1];
        }
        t[pos-1] = nb;
        taille++;
        for (i=0 ; i< taille ; i++){
            printf("t[%d]= %d \n",i+1,t[i]);
    }
    }*/
//----------------------------------------------------SUPPRESSION
    /*int t[100];
    int i, nb, pos , taille;

    printf("veuillez saisir la taille du tableau\n");
    scanf("%d",&taille);
    for(i=0 ; i<taille; i++){
        printf("veuillez remplir le tableau\n");
        scanf("%d",&t[i]);
    }
    printf("veuillez saisir la position sur tableau\n");
    scanf("%d",&pos);

    if (pos<=0 || pos> taille){
        printf("impossible !");
    }else{
        for(i=pos ; i<taille ; i++){
            t[i-1]=t[i];
        }
        taille--;
        for (i=0 ; i< taille ; i++){
            printf("t[%d]= %d \n",i+1,t[i]);
    }
    }*/
//-------------------------------------------------AFFICHAGE UNIQUE
    /*int t[100] , frq[100];
    int i, j, cmp , taille;

    printf("veuillez saisir la taille du tableau\n");
    scanf("%d",&taille);
    printf("veuillez remplir le tableau\n");
    for(i=0 ; i<taille; i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }

    for(i=0 ; i<taille ; i++){
        frq[i]= -1;
    }
    for (i=0 ; i<taille; i++){
        cmp=1;
        for(j=i+1; j<taille ; j++){
            if(t[i]==t[j]){
                cmp++;
                frq[j]=0;
            }
        }
        if(frq[i]!=0){
            frq[i]=cmp;
        }
    }
    printf("\n les elements uniques du tableau sont: \n");
    for (i=0 ; i<taille; i++){
        if(frq[i]==1){
            printf("%d ",t[i]);
        }
    }*/
    //--------------------------------------------PAS UNIQUE
    /*int t[100] , frq[100];
    int i, j, cmp , taille;

    printf("veuillez saisir la taille du tableau\n");
    scanf("%d",&taille);
    printf("veuillez remplir le tableau\n");
    for(i=0 ; i<taille; i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }

    for(i=0 ; i<taille ; i++){
        frq[i]= -1;
    }
    for (i=0 ; i<taille; i++){
        cmp=1;
        for(j=i+1; j<taille ; j++){
            if(t[i]==t[j]){
                cmp++;
                frq[j]=0;
            }
        }
        if(frq[i]!=0){
            frq[i]=cmp;
        }
    }
    printf("\n les elements qui ne sont pas uniques du tableau sont: \n");
    for (i=0 ; i<taille; i++){
        if(frq[i]>=2){
            printf("%d ",t[i]);
        }
    }*/
    //-------------------------------------------------pair/impair
    /*int t[100] , pair[100], impair[100];
    int i,taille,pcmp , icmp;

    printf("veuillez saisir la taille du tableau\n");
    scanf("%d",&taille);
    printf("veuillez remplir le tableau\n");
    for(i=0 ; i<taille; i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    pcmp=0;
    icmp=0;
    for(i=0 ; i < taille ; i++){
        if(t[i] % 2 == 0){
            pair[pcmp]= t[i];
            pcmp++;
        }
        else{
            impair[pcmp]= t[i];
            icmp++;
        }
    }

    printf("\n les elements pairs sont: \n");
    for (i=0 ; i<pcmp; i++){
        printf("%d ",pair[i]);
    }

    printf("\n les elements impairs sont: \n");
    for (i=0 ; i<icmp; i++){
        printf("%d ",impair[i]);
    }*/
    //--------------------------------------------------LE TRI croissant
    /*int t[8];
    int i , j , tmp;
    printf("veuillez remplir le tableau\n");
    for(i=0 ; i<8; i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    for (i=0 ; i<8; i++){
        for (j=i+1; j<8 ; j++){
            if(t[i]>t[j]){
                tmp= t[i];
                t[i]= t[j];
                t[j]=tmp;
            }
        }
    }
    printf("\n les elements du tableau par ordre croissant sont : ");
    for (i=0 ; i<8 ; i++)
        printf("%d ",t[i]);
*/
//--------------------------------------------------TRI DECROISSANT
    /*int t[8];
    int i , j , tmp;
    printf("veuillez remplir le tableau\n");
    for(i=0 ; i<8; i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    for (i=0 ; i<8; i++){
        for (j=i+1; j<8 ; j++){
            if(t[i]<t[j]){
                tmp= t[i];
                t[i]= t[j];
                t[j]=tmp;
            }
        }
    }
    printf("\n les elements du tableau par ordre decroissant sont : ");
    for (i=0 ; i<8 ; i++)
        printf("%d ",t[i]);
    return 0;
}
*/
