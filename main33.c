#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[4][5] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    //Affichage
    printf("La matrice est:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("\t%d" , M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
