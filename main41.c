#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m ;
    printf("veuillez saisir n : ");
    scanf("%d" , &n);
    printf("veuillez saisir m : ");
    scanf("%d" , &m);

    int M[n][m];
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M[i][j]);
        }
    }

    int x ;
    printf("veuillez saisir un entier x : ");
    scanf("%d" , &x);

    int ext=0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==x){
                ext++ ;
            }
        }
    }
    if(ext>0){
        printf("%d est existe dans le matrice %d fois ." , x , ext);

    }
    else
        printf("%d n'existe pas dans le matrice ." , x);
    return 0;
}
