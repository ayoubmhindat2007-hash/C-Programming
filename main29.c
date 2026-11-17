#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , m ;
    printf("veuillez saisir le nombre de lignes :");
    scanf("%d" , &n);
    printf("\nveuillez saisir le nombre de colones :");
    scanf("%d" , &m);
    //Remplissage
    int M[n][m] ;
    printf("veuillez saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d" , &M[i][j]);
    }
    }
    //Demande d'un entier x
    int x ;
    printf("veuillez saisir un entier : ");
    scanf("%d" , &x);

    //Cherchons les occurrences de x
    int occ = 0 ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j]==x){
                occ++ ;
            }
        }
    }

    //Affichage de resultat
    if(occ>0){
        printf("L'entier %d est existe dans la matrice %d fois ." , x , occ);

    }
    else
        printf("l'entier %d n'existe pas dans la materice ." , x);


    return 0;
}
