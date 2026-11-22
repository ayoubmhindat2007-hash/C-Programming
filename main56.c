#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
        printf("veuillez saisir n : ");
        scanf("%d" , &n);
        printf("veuillez saisir m : ");
        scanf("%d" , &m);

        int M[n][m] ;
        printf("veuillez saisir les elements de matrice :\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d" , &M[i][j]);
            }
        }

        int s = 0 ;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(i==j){
                s += M[i][j];
                    }
            }
        }

        int some ;
        int magic = 1;
        for(int i=0;i<n;i++){
                some = 0;
            for(int j=0;j<m;j++){
                some = some + M[i][j] ;
            }
            if(some != s){
                magic=0;
            }
        }

        for(int j=0;j<m;j++){
                some = 0 ;
            for(int i=0;i<n;i++){
                some = some + M[i][j] ;
            }
        if(some != s){
            magic=0;
        }
        }
        some = 0 ;
        for(int j=0;j<n;j++){
                some += M[j][n-1-j] ;

            }
        if(some != s){
            magic=0;
        }


        if(magic==1){
            printf("la matrice est magique .");
        }
        else
            printf("la matrice n'est pas magique .");





    return 0;
}
