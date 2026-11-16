#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M[4][6];
   //Remplissage
   printf("Veuilleez saisir les elements de matrice:\n");
   for(int i=0;i<4;i++){
    for(int j=0;j<6;j++){
        scanf("%d" , &M[i][j]);
    }
   }
   //Maximum et Minimum de chaque ligne
   int maxl , minl ,maxc , minc ;
   for(int i=0;i<4;i++){
        maxl = M[i][0];
        minl = M[i][0];
    for(int j=1;j<6;j++){
        if(M[i][j]>maxl){
            maxl = M[i][j] ;
        }
        if(M[i][j]<minl){
            minl = M[i][j] ;
        }
    }
    printf("le maximum de ligne %d est : %d\n" , i+1 , maxl);
    printf("le minimum de ligne %d est : %d\n" , i+1 , minl);
   }

   //Maximum et minimum de chaque colone
   for(int i=0;i<6;i++){
        maxc = M[0][i];
        minc = M[0][i];
    for(int j=0;j<4;j++){
        if(M[j][i]>maxc){
            maxc = M[j][i];
        }
        if(M[j][i]<minc){
            minc = M[j][i];
        }
    }
    printf("le maximum de colone %d est : %d\n" , i+1 , maxc);
    printf("le minimum de colone %d est : %d\n" , i+1 , minc);
   }
    return 0;
}
