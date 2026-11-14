#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Permet de verifier que deux tableaux sont identiques .

    int n ;
    printf("veuillez saiser la taille de deux tanleau (une seule) : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;

    int T1[n] , T2[n] ;
    int *p1 , *p2 ;
    p1 = T1 ;
    p2 = T2 ;

    // Remplissage
    printf("veuillez saiser les elements de premier tableau :\n");
    for(p1=T1;p1<n+T1;p1++){
        scanf("%d" , p1);
    }
    printf("veuillez saiser les elements de deuxieme tableau :\n");
    for(p2=T2;p2<n+T2;p2++){
        scanf("%d" , p2);
    }

    // Comparaison
    int egal = 1 ;
    for(p1=T1,p2=T2;p1<n+T1,p2<n+T2;p1++,p2++){
        if(*p1 != *p2){
            egal = 0 ;
        }
    }

    // Affichage
    if(egal==1){
        printf("les deux tableaus sont identiques .");
    }
    else
        printf("les deux tableaus ne sont pas identiques .");
    return 0;
}
