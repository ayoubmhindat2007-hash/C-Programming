#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez un entier n : ");
    scanf("%d" , &n);

    if(n<=0)
        return 1 ;

    int M[n][n] ;
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d" , &M[i][j]);
        }
    }

    printf("le vech de M est :\n");
    for(int k=0;k<n;k++){
    for(int j=k;j<=k;j++){
        for(int i=j;i<n;i++){
            printf("%d\n" , M[i][j]);
        }
    }
    }

    return 0;
}
