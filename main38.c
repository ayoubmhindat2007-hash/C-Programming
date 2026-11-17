#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Déterminer les éléments de la diagonale principale d'une matrice carrée A donnée.
    int n , m ;
    printf("veuillez saisir le nombre de lignes de matrice: ");
    scanf("%d" , &n);
    printf("veuillez saisir lenombre de colones de matrice : ");
    scanf("%d" , &m);

    int M[n][m] ;
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           scanf("%d" , &M[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == j)
                M[i][j]=0 ;
        }
    }

    //Affichage
    printf("le neuveau matrice est :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d" , M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
