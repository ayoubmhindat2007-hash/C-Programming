#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX8 : permet de rechercher l'existence d'un nombrev donne dans un tableau T de n elements .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);

    if(n<=0)
        return 1 ;
    // Remplissage
    int T[n];
    int *p ;
    p = T ;
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }

    // Demande de saiser un nombre x

    int x ;
    printf("veuillez saiser un nombre : ");
    scanf("%d" , &x);

    // Cherchons x
    int exist = 0 ;
    for(p=T;p<n+T;p++){
        if(*p=x){
            exist = 1 ;
            break ;
        }
    }

    // Affichage

    if(exist==1)
        printf("%d est existe dans le tableau ." , x);
    else
        printf("%d n'existe pas dans le tableau ." , x);

    return 0;
}
