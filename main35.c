#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l , c ;
    printf("veuillez saisir le nombre de lignes : ");
    scanf("%d" , &l);
    printf("veuillez saisir le nombre de colone : ");
    scanf("%d" , &c);
    int T[l][c];
    // Remplissage
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%d" , &T[i][j]);
        }
    }
    // La somme des elements de matrice
    int s = 0 ;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            s = s + T[i][j] ;
        }
    }
    printf("\nla somme des elements de matrice est %d ." , s);
    return 0;
}
