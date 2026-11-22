#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez saisior la taille de tableau : ");
    scanf("%d" , &n);
    int T[n] ;
    printf("veuillez saisir les elements de tableau :\n");
    for(int i=0;i<n;i++){
        scanf("%d" , &T[i]);
    }

    int max=1 ;
    int longeur=1 ;
    int debut = 0 ;
    int max_debut=0 ;

    for(int i=1;i<n;i++){
        if(T[i]>T[i-1]){
            longeur++ ;
            if(longeur>max){
                max = longeur ;
                max_debut=debut ;
            }
        }

        else {
            longeur = 1 ;
            debut = i ;
        }
    }

    printf("la plus longue sequence croissante :\n");
    for(int i=max_debut;i<max_debut+max;i++){
        printf("\t%d" , T[i]);
    }
    return 0;
}
