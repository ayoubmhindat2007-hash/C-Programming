#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("veuillez saisir un nombre n : ");
    scanf("%d" , &n);

    int M[n][n];
    printf("veuiller saisir les elements de matrice :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d" , &M[i][j]);
        }
    }

    int s = 0 ;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    if(i == j){
        s = s + M[i][j];
    }
            }
    }

    int magic=1 ;
    int somme ;

    //verifier les lignes
    for(int i=0;i<n;i++){
            somme = 0;
        for(int j=0;j<n;j++){
            somme = somme + M[i][j];

    }
    if(somme!=s){
        magic=0 ;
        }
    }

    //verifier les colones
    for(int j=0;j<n;j++){
            somme=0 ;
        for(int i=0;i<n;i++){
            somme = somme + M[i][j] ;

        }
       if(somme!=s){
        magic=0 ;
    }
    }

    //deuxieme diagonale
    somme = 0;
    for(int i=0;i<n;i++){
        somme = somme + M[i][n-1-i];
    }
    if(somme!=s){
        magic = 0 ;
    }

    //Affichage de resultat
    if(magic==1){
        printf("Ce matrice est un carree magique .");
    }
    else
        printf("Ce matrice n'est pas un carree magique .");

    return 0;
}
