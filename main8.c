#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX12 : permet de rechercher le plus grand etb le plus petit nombre parmi les elements d'un tableau .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);

    int T[n] ;
    int *p ;
    p=T ;
    // Remplissage
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }
    // Minimum & Maximum
    int max = *T;
    int min = *T;
    int pos1 = 1 ;
    int pos2 = 1 ;
    int pos = 2 ;

    for(p=T+1;p<n+T;p++){
        if(*p>max){
            max = *p ;
            pos1 = pos ;
        }
       pos++ ;
    }
    printf("Le plus grand nombre des elements du tableau est : %d , et sa position est %d ." , max , pos1);
    for(p=T+1;p<n+T;p++){
        if(*p<min){
            min = *p ;
            pos2 = pos ;
        }
        pos++ ;
    }
     printf("\nLe plus petit nombre des elements du tableau est : %d , et sa position est %d ." , min , pos2);
    return 0;
}
