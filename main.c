#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Permet de calculer et afficher ensuite la somme des elements d'un tableaude n elements .

   int n ;
   printf("veuillez saiser la taille de tableau : ");
   scanf("%d" , &n);

   if(n<=1)
    return 1 ;

   int T[n];
   int *p ;
   p = T ;

   // Remplissage
   printf("veuillez saiser les elements de tableau :\n");
   for(p=T;p<n+T;p++){
    scanf("%d" , p);
   }

   // La somme
   int s = 0 ;
   for(p=T;p<n+T;p++){
    s = s + *p ;
   }

   // Affichage de la somme
   printf("la somme de elements de tableau est : %d" , s);

    return 0;
}

