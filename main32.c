#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuillez saisir la valeur de n : ");
    scanf("%d" , &n);
    printf("veuillez saisir la valeur de m : ");
    scanf("%d" , &m);

    int M[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M[i][j]);
        }
    }

    int max = M[0][0] ;
    int min = M[0][0] ;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(M[i][j]<min){
                min = M[i][j] ;
            }
            if(M[i][j]>max){
                max = M[i][j] ;
            }
        }
    }
    printf("le maximum est %d ." , max);
    printf("\nle minimum est %d ." , min);

    //----------------------------------------------------

    int v = 0 ;
    int creux = 1 ;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0){
                v++;
                if(M[i][j]]>=M[i-1][j]){
                    creux = 0 ;
                }
            }
            if(i<n-1){
                v++;
                if(M[i][j]>=M[i+1][j]){
                    creux = 0 ;
                }
            }
            if(j>0){
                v++;
                if(M[i][j]>=M[i][j-1]){
                    creux = 0 ;
                }
            }
            if(j<m+1){
                v++;
                if(M[i][j]>=M[i][j+1]){
                    creux = 0 ;
                }
            }


        }
    }

    //----------------------------------------------
    int nbcreux = 0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(creux==1 && v > 0){
                printf("\n%d est un creux ." , M[i][j]);
                nbcreux++ ;
            }
        }
    }

    printf("le nombre des creux dans se matrice est %d ." , nbcreux);

    return 0;
}
