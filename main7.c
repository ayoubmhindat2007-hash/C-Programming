#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX11 : permetb d'afficher le nombre des occurrences d'un nombre donnee X dans un tableau .

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);

    int T[n];
    int *p ;
    p=T ;
    // Remplissage
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }

    // Demande un nombre X
    int X ;
    printf("veuillez saiser un nombre : ");
    scanf("%d" , &X);

    // Comptage des occurrences
    int counter=0 ;
    for(p=T;p<n+T;p++){
        if(*p == X){
            counter++ ;
        }
    }
     // Affichage de resultat
     printf("Le nombre des occurrences de %d dans le tableau est : %d ." , X , counter);
    return 0;
}
