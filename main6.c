#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX10 : Effacer toutes les occurrences .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;

    // Remplissage
    int T[n] ;
    int *p ;
    p=T ;
    printf("veuillez saiser les elments de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }
     // 1er affichage
     printf("T[%d]= " , n);
     for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
     }

     // L'efface de occurrences .
     int *p1 ;
     p1=T ;
     for(p=T;p<n+T;p++){
       if(*p!=0){
        *p1 = *p ;
        p1++;
       }

     }
     n = p1 - T ;

     // Affichage
     printf("\nle neuveau tableau est :\n");
     for(p1=T;p1<n+T;p1++){
        printf("\t%d" , *p1);
     }
    return 0;
}
