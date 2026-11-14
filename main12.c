#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 17 — Inverser l'ordre des éléments d'un tableau
    //Remplir un tableau T de taille N par des valeurs entrées au clavier.
    //Afficher le tableau.
    //Ranger ensuite les éléments de T dans l'ordre inverse.
    //Afficher le tableau résultant.

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;
    // Remplissage
    int T[n] ;
    int *p ;
    p=T ;
    printf("veuillez saiser les elements de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d"  , p);
    }
    // Ordre inverse
    int tem ;
    int *q ;
    q = T ;
    for(p=T,q=n+T-1;p<q;p++,q--){
        tem = *p ;
        *p = *q ;
        *q = tem ;
    }
    //Affichage de neuveau tableau
    printf("le neuveau tableau est :\n");
    for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
    }
    return 0;
}
