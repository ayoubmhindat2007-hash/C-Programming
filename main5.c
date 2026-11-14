#include <stdio.h>
#include <stdlib.h>

int main()
{
    // EX9 : permet de lire 10 notes et de determiner le nombre de celles qui sont superieurs a la moyenne .

    int T[10];
    int *p ;
    p=T ;

    // Remplissage
    printf("veuillez saiser les 10 notes :\n");
    for(p=T;p<T+10;p++){
        scanf("%d" , p);
    }

    // la moyenne
    int s = 0 , m ;
    for(p=T;p<T+10;p++){
        s = s + *p ;
    }
    m = s / 10 ;

    int counter=0 ;
    for(p=T;p<T+10;p++){
        if(*p>m){
            counter++;
        }
    }

    // Affichage

    printf("le nombre des notes qui sont superieurs a la moyenne est %d ." , counter);

    return 0;
}
