#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez saisir un entier : ");
    scanf("%d" , &n);
    int M[14][14] ;
    for(int i=0;i<=n;i++){
            M[i][0] = 1 ;
            M[i][i] = 1 ;
        for(int j=1;j<i;j++){

            M[i][j] = M[i-1][j] + M[i-1][j-1] ;
        }

    }
    //Affichage
    printf("le triangle de Pascale est :\n");
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d\t" , M[i][j]);

        }
        printf("\n");
    }
    return 0;
}
