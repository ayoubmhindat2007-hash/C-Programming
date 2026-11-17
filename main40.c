#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuilleez saisir n : ");
    scanf("%d" , &n);
    printf("veuilleez saisir m : ");
    scanf("%d" , &m);

    int T[n][m] ;
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &T[i][j]);
        }
    }
    int P[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            P[i][j]=T[j][i] ;
        }
    }

    printf("le transpose de matrice est :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\t%d" , P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
