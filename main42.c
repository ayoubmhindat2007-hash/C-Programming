#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, o ;
    printf("veuillez saisir n : ");
    scanf("%d" , &n);
    printf("veuillez saisir o : ");
    scanf("%d" , &o);
    int p , m ;
    printf("veuillez saisir p : ");
    scanf("%d" , &p);
    printf("veuillez saisir m : ");
    scanf("%d" , &m);

    int M[n][o];
    printf("veuillez saisir les elements de matrice 1 :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            scanf("%d" , &M[i][j]);
        }
    }
    int N[p][m];
    printf("veuillez saisir les elements de matrice 2 :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &N[i][j]);
        }
    }

    int C[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                C[i][j] = 0 ;
            for(int k=0;k<p;k++){
                C[i][j] += M[i][k]*N[k][j] ;
            }
        }
    }

    //Affichage
    printf("la matrice produite est :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d" , C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
