#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuillez saisir le nombre de lignes de matrice : ");
    scanf("%d" , &n);
    printf("veuillez saisir le nombre de colonos de matrice : ");
    scanf("%d" , &m);

    int M[n][m];
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M[i][j]);
        }
    }
    int T[n+m] ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

                T[i*n+j] = M[i][j] ;
            }
        }

    printf("\nle resultat est :\n");
    for(int k=0;k<n+m;k++){
        printf("\t%d" , T[k]);
    }
    return 0;
}
