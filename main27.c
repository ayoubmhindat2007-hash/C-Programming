#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[3][3];
    //Remplissage
    printf("veuillez saisir les elements de matrice:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d" , &M[i][j]);
        }
    }

    //Echangement de triangle inferieur avec le triangle superieur
    int T ;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=j){
                T =M[i][j];
                M[i][j]=M[j][i];
                M[j][i] = T ;
            }

        }
    }
    //Affichage

    printf("The new matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\t%d" , M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
