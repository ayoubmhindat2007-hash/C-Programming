#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX13 :
    // - permet de remplir un tableau avec des nombres positifs et negatifs .
    // - remplir un deuxieme tableau avec les valeurs absolues des nombres positifs et negatifs .
    // - remplir un "eme tableau avec les carres des nombre positifs et l'affichier .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;

    // Remplissage
    int T[n];
    int *p ;
    p=T ;
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }
    // deuxieme tableau
    int T2[n] ;
    int *q ;
    q = T2 ;
    for(p=T;p<n+T;p++){
        if(*p<0){
            *q = -(*p) ;
            q++;
        }
    }
    printf("T2[]= ");
    for(p=T2;p<q;p++){
        printf("\t%d" , *p);
    }

    // troisieme tableau
    int T3[n];
    int *r ;
    r=T3 ;
    for(p=T;p<n+T;p++){
        if(*p>0){
            *r = (*p) * (*p) ;
            r++ ;
        }
    }

    printf("\nT3[]= ");
    for(p=T3;p<r;p++){
        printf("\t%d" , *p);
    }

    return 0;
}
