#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m , o , p ;
    printf("veuillez saisir lavaleur de n : ");
    scanf("%d" , &n);
    printf("veuillez saisir lavaleur de m : ");
    scanf("%d" , &m);
    printf("veuillez saisir lavaleur de o : ");
    scanf("%d" , &o);
    printf("veuillez saisir lavaleur de p : ");
    scanf("%d" , &p);
    if(n!=o || m!=p)
        return 1 ;

        int M1[n][m] , M2[o][p] ;

    printf("veuillez saisir les elements de premiere matrice:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d" , &M1[i][j]);
        }
    }
    printf("veuillez saisir les elements de deuxieme matrice:\n");
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            scanf("%d" , &M2[i][j]);
        }
    }

    //  matrice somme

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            M1[i][j] = M1[i][j] + M2[i][j] ;
        }
    }
    //Affichage
    printf("la matrice somme est :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d" , M1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
