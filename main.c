#include <stdio.h>
#include <stdlib.h>

int main()
{
    // La boucle for
    int n ;
    printf("veuillez saiser la taille de tableau : ");
    scanf("%d" , &n);
    if(n<=0)
        return 1 ;
    int T[n];
    int *p ;
    p = T ;
    printf("\nla boucle for .\n");
    // Remplissage
    printf("\nveuillez saiser les elements de tableau : ");
    for(p=T;p<T+n;p++){
        scanf("%d" , p);
    }
    // Affichage
    printf("les elements de tableau sont :\n");
    for(p=T;p<n+T;p++){
        printf("\t%d" , *p);
    }
    // La boucle while
    printf("\nla boucle while .\n");
    // Remplissage
    printf("\nveuillez saiser les elments de tableau : ");
    while(p < n + T){
        scanf("%d" , p);
        p++ ;
    }
    // Affichage
    printf("les elements de tableau sont :\n");
    while(p < n + T){
        printf("\t%d" , *p);
        p++ ;
    }
    // La boucle do...while
    printf("\nla boucle do...while .\n");
    // Remplissage
    printf("veuillez saiser les elements de tableau : ");
    do{
        scanf("%d" , p);
        p++ ;
    }while(p < n + T);
    // Affichage
    printf("les elments de tableau sont :\n");
    do{
        printf("\t%d" , *p);
        p++ ;
    }while(p < n + T);


    return 0;
}
