#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][6] ;
    printf("Veuillez saiser les elements de matrice :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            scanf("%d" , &A[i][j]);
        }
    }

    int T[6][4];

    for(int i=0;i<6;i++){
    for(int j=0;j<4;j++){

            T[i][j] = A[j][i] ;

        }

    }
     printf("\nle transpose de matrice est :\n");
    for(int i=0;i<6;i++){
    for(int j=0;j<4;j++){

            printf("\t%d" , T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
