#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M , N ;
    printf("veuillez saisir le nombre de ligne : ");
    scanf("%d" , &M);
    printf("veuillez saisir le nombre de colone : ");
    scanf("%d" , &N);
    if(M<=0 || N<=0)
        return 1 ;

    int T[M][N];
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d" , &T[i][j]);
        }
    }

    int min = T[0][0];
    for(int i=0;i<M;i++){
        for(int j=1;j<N;j++){
            if(T[i][j]<min)
                min = T[i][j] ;
        }
    }

    printf("l'element minimale de matrice est %d .\n" , min);

    int max = T[0][0];
    int ligne , colone ;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(T[i][j]>max){
                max = T[i][j] ;
                ligne = i ;
                colone = j ;
            }
        }
    }

     printf("l'element maximale de matrice est %d , est sa position est %d,%d ." , max , ligne+1 , colone+1);
    return 0;
}
