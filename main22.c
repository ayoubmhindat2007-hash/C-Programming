#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][5] , B[4][5] ;
    printf("Veuillez saisir les elements de premiere matrice :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d" , &A[i][j]);
        }
    }
    printf("Veuillez saisir les elements de deuxieme matrice :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            scanf("%d" , &B[i][j]);
        }
    }

    // Utilisons un troisieme matrice pour affectuie la somme
    int C[4][5];
    for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
        C[i][j] = A[i][j] + B[i][j] ;
    }
    }
    // Affichage de matrice C
    printf("The new matrix is :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("\t%d" , C[i][j]);
        }
        printf("\n");


    }
    return 0;
}
