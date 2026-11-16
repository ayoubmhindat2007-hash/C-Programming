#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[5][5] ;
   printf("veuillez saisir les elements de tableau :\n");
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d" , &T[i][j]);
    }
   }
   // Produit des elements de diagonale
   int p = 1 ;
   for(int i=0;i<5;i++){
    p = p * T[i][i];
   }
   //Affichage
   printf("the new matrix is %d ." , p);



    return 0;
}
