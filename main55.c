#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuiller saisir la valeur de n : ");
    scanf("%d" , &n);
    printf("veuiller saisir la valeur de m : ");
    scanf("%d" , &m);

    int M[n][m] ;
    printf("veuiller saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M[i][j]);
        }
    }
    int trouve = 0 ;
    int maxL ;
    int minC ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                maxL=1;
                minC=1;
            for(int k=0;k<m;k++){
                if(M[i][j]<M[i][k]){
                    maxL=0 ;
                    break ;
                }
            }
                for(int k=0;k<n;k++){
                    if(M[i][j]>M[k][j]){
                        minC=0;
                        break ;
                    }
                }

                if(maxL==1 && minC==1){
                    trouve++ ;
                }

        }
    }

    if(trouve!=0){
        printf("il existe %d points cols ." , trouve);
    }
    else
        printf("aucune point est point col .");
    return 0;
}
