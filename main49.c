#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n ;
     printf("veuillez saisir un entier n : ");
     scanf("%d" , &n);

     if(n<=0)
        return 1 ;

     int P[n+1][n+1] ;

     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j==0){
                P[i][0]=1 ;
            }

            else if(i==j){
                P[i][j]=1 ;
            }

            else {
                P[i][j] = P[i-1][j] + P[i-1][j-1] ;
            }
        }
     }

     //Affichage

     printf("le triangle de pascal :\n");
     for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("\t%d" , P[i][j]);

        }
        printf("\n");
     }

     //With hard work you can achieve what ever you want , so work your ass-off and don't half-ass it .
    return 0;
}
