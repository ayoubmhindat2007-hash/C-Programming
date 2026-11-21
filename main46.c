#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n , m ;
   printf("veuillez saisir la taille de matrice : ");
   scanf("%d" , &n);
   printf("veuillez saisir la taille de matrice : ");
   scanf("%d" , &m);


   int M[n][m] ;
   printf("veuillez saisir les elements de matrice:\n");
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d" , &M[i][j]);
    }
   }

   //2 compter et afficher le nombre de zeros de chaque colones

   int comp;
   for(int j=0;j<m;j++){
        comp = 0 ;
   for(int i=0;i<n;i++){

    if(M[i][j]==0){
        comp++ ;
    }

   }
   printf("0 existe %d fois dans le colone %d .\n" , comp , j);

   }


   //3 compter et afficher le nombre de colones contenant au moins un zero

   int compC =0 ;
   for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if(M[i][j]==0){
            compC++ ;
             break ;
        }

    }
   }
   printf("le nombre de colones qui contenant au moins un zero est %d .\n" , compC);

   //4 AFFICHER LE MINIMUM DE CHAQUE COLONE

   int min  ;
   for(int j=0;j<m;j++){
        min = M[0][j];
    for(int i=0;i<n;i++){
        if(M[i][j]<min){
            min = M[i][j] ;
        }
    }
    printf("le minimum de colone %d est %d .\n" , j ,min);
   }

   //5 AFFICHER LE NUMERO DE LA COLONE QUI CONTENANT LE MINIMUM DE MATRICE

   int minM=M[0][0] ;
   for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if(M[i][j]<minM){
            minM = M[i][j];
        }
    }
   }
   for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if(M[i][j]==minM){
            printf("le colone contenant le minimum de matrice est %d ." , j);
            break ;
        }
    }
   }

    return 0;
}
