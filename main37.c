#include <stdio.h>
#include <stdlib.h>

int main()

{
     int n ;
     printf("veuillez saisir un entier : ");
     scanf("%d" , &n);
     int M[n][n];
     printf("veuillez saisir les elements de matrice:\n");
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d" , &M[i][j]);
        }
     }

     printf("le diagonale de notre matrice est :\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("\t%d" , M[i][j]);

            }

        }
     }

    return 0;
}
