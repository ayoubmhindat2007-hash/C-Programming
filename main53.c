#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez saisir la taille de tableau : ");
    scanf("%d" , &n);

    if(n<=0)
        return 1 ;

    int T[n] ;
    printf("veuillez saisir les elements de tableau :\n");
    for(int i=0;i<n;i++){
        scanf("%d" , &T[i]);
    }

    int m ;
    printf("veuillez saisir un entier m : ");
    scanf("%d" , &m);
    int tem[m];
    for(int i=0;i<m;i++){
        tem[i] = T[i] ;
    }

    for(int i=0;i<n-m;i++){
        T[i] = T[m+i] ;
    }

    for(int i=0;i<m;i++){
        T[n-m+i] = tem[i];
    }

    printf("le neuveau tableau est :\n");
    for(int i=0;i<n;i++){
        printf("\t%d" , T[i]);
    }
    return 0;
}
