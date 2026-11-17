#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[2][2] ;
    //Remplissage
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d" , &M[i][j]);
        }
    }
    //Determinent
    int d ;
    d = M[0][0] * M[1][1] - M[1][0] * M[0][1] ;

    //Affichage de resultat
    printf("le determinent de matrice saisir est %d ." , d);
    return 0;
}
