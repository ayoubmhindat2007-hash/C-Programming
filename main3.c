#include <stdio.h>
#include <stdlib.h>

int main()
{
    // La somme de deux tableaux de meme longueur
    int n ;
    printf("veuillez saiser la taille de deux tableaux : ");
    scanf("%d" , &n);

    if(n<=0)
        return 1 ;
    int T1[n] , T2[n] ;
    int *p1 , *p2 ;
    p1=T1;
    p2=T2;
    // Remplissage
    printf("veuillez saiser les elments de premier tableau :\n");
    for(p1=T1;p1<n+T1;p1++){
        scanf("%d" , p1);
    }
    printf("veuillez saiser les elements de deuxieme tableau :\n");
    for(p2=T2;p2<n+T2;p2++){
        scanf("%d" , p2);
    }
    // Utilisons une seule methode a la fois


    // Premiere : la somme sera effectuee dans l'un des deux tableaux

    for(p1=T1,p2=T2;p1<n+T1,p2<n+T2;p1++,p2++){
        *p1 = *p1 + *p2 ;
    }

    // Affichage
    printf("le neuveau tableau est :\n");
    for(p1=T1;p1<n+T1;p1++){
        printf("\t%d" , *p1);
    }

    // Deuxieme : la somme sera effectuee dans un 3eme tableau
    int T[n];
    int *p ;
    p=T;

    for(p=T,p1=T1,p2=T2;p<n+T,p1<n+T1,p2<n+T2;p++,p1++,p2++){
        *p = *p1 + *p2 ;
    }

    // Affichage
    printf("le neuveau tableau est :\n");
    for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
    }

    // Troixieme : la somme sera effectuee dans la derniere case du plus petit des 2 tableaux
    int n  , m;
    printf("veuillez saiser la taille de premier tableau : ");
    scanf("%d" , &n);
    printf("veuillez saiser la taille de deuxieme tableau : ");
    scanf("%d" , &m);

    if(n<=0 || m<=0)
        return 1 ;
    int T1[n] , T2[m] ;
    int *p1 , *p2 ;
    p1=T1;
    p2=T2;
    // Remplissage
    printf("veuillez saiser les elments de premier tableau :\n");
    for(p1=T1;p1<n+T1;p1++){
        scanf("%d" , p1);
    }
    printf("veuillez saiser les elements de deuxieme tableau :\n");
    for(p2=T2;p2<m+T2;p2++){
        scanf("%d" , p2);
    }

    // Comparaison
    int s=0 ;
    for(p1=T1,p2=T2;p1<n+T1,p2<m+T2;p1++,p2++){
      s = s + (*p1 + *p2) ;
    }

     if(n>=m){

      *(n + T1 -1) = s ;
     }
     else {


        *(m+T2-1) = s ;
     }

     // Affichage
     printf("T1[%d]= " , n);
     for(p1=T1;p1<n+T1;p1++){
        printf("\t%d" , *p1);
     }

     printf("\nT2[%d]= "   , m);
     for(p2=T2;p2<m+T2;p2++){
        printf("\t%d" , *p2);
     }



    return 0;
}
