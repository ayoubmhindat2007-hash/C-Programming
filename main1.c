#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Augmente de 1 tous les elements d'un tableau .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;
    int T[n] ;
    int *p ;
    p = T ;

    // Remplissage
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }

    // L'augmentation par 1
    for(p=T;p<n+T;p++){
        *p = *p + 1 ;
    }

    // Affichage
    printf("le neuveau tableau est :\n");
    for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
    }
    return 0;
}
