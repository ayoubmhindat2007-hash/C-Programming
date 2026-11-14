#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercice 15 — Tri d'un tableau en ordre croissant
    //Saisir N nombres dans un tableau T et trier ses éléments en ordre croissant.

    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;
    //Remplissage
    int T[n] ;
    int *p ;
    p=T ;
    printf("veuillez saiser les elments de tableau :\n");
    for(p=T;p<n+T;p++){
        scanf("%d" , p);
    }
    // Trier en ordre croissant
    int *min ;

    int tem ;
    int *q ;
    q=T+1 ;
    for(p=T;p<q;p++){
             min = p ;

    for(q=p+1;q<n+T;q++){
       if(*q<*min){
               min = q ;
            }
    }
    tem = *p ;
    *p = *min ;
    *min = tem ;


    }
    // Affichage de tableau apres le trier en ordre croissant
    printf("Le neuveau tableau est :\n");
    for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
    }
    return 0;
}
