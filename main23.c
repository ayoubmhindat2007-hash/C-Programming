#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4] , B[4][2] ;
    //Remplissage des deux tableaux
    printf("Veuillez saisir les elements de premier tableau :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d" , A[i][j]);
        }
    }
    printf("veuillez saisir les elements de deuxieme tableau :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d" , B[i][j]);
        }
    }
    // Le produit
    int C[3][2];
    int p ;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                p=0 ;
            for(int k=0;k<4;k++){
                p = p + A[i][k]*B[k][j];
            }
            C[i][j] = p ;
        }

    }
    //Affichage
    printf("le tableau C est :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("\t%d" , C[i][j]);
        }
        printf("\n");
    }
    return  0;
}
