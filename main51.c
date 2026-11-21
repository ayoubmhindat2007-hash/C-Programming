#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuillez saisir la taille n : ");
    scanf("%d" , &n);
    printf("veuillez saisir la taille m : ");
    scanf("%d" , &m);

    int M[n][m] , N[n][m] ;
    printf("veuillez saisir les elements de premier tableau :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M[i][j]);
        }
    }
    printf("veuillez saisir les elements de deuxieme tableau :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &N[i][j]);
        }
    }

     int H[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             H[i][j] = M[i][j] * N[i][j] ;
        }
    }


    printf("le neuveau matrice de Hadamard est :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d" , H[i][j]);
        }
        printf("\n");
    }
    return 0;
}
