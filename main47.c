#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m , o ;
    printf("veuillez saisir la valeur de m : ");
    scanf("%d" , &m);
    printf("veuillez saisir la valeur de o : ");
    scanf("%d" , &o);
    int p , n ;
    printf("veuillez saisir la valeur de p : ");
    scanf("%d" , &p);
    printf("veuillez saisir la valeur de n : ");
    scanf("%d" , &n);

    int M[m][o] ;
    printf("veuillez saisir les elments de premier matrice :\n");
    for(int i=0;i<m;i++){
            for(int j=0;j<o;j++){
        scanf("%d" , &M[i][j]);
    }
    }
     int N[p][n] ;
    printf("veuillez saisir les elments de deuxieme matrice :\n");
    for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
        scanf("%d" , &N[i][j]);
    }
    }

    int C[m][n] ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                C[i][j]=0 ;
            for(int k=0;k<o;k++){
                C[i][j]= C[i][j] + M[i][k]*N[k][j];
            }
        }
    }

    printf("la matrice produite est :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\t%d" , C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
