#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Premiere methode
    int T[4][4] ;
    //Remplissage
    printf("veuillez saisir les elements de matrice:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d" , &T[i][j]);
        }
    }
    //Somme des elements de diagonale
    int s=0 ;
    for(int i=0;i<4;i++){
        s = s + T[i][i] ;
    }
    //Affichage de resultat
    printf("La somme d'elements de de diagonale est %d ." , s);

    //---------------------------------------------------------------

    //Deuxieme methode
    int F[5][5] ;
    //Remplissage
    printf("Veuillez saisir les elements de matrice F:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d" , &F[i][j]);
        }
    }
    //Somme d'elements de diagonale
    int s = 0 ;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                s = s + F[i][j] ;
            }
        }
    }
    //Affichage
    printf("La somme d'elements de matrice est %d ." , s);

    return 0;
}
