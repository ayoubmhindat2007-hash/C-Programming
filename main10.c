#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Exercice 14 — Séparation des nombres positifs et négatifs avec les pointeurs
   // Lire la dimension N d'un tableau T de type int (dimension maximale : 20 éléments),
   // remplir le tableau par des valeurs entrées au clavier et afficher le tableau. Copier ensuite
   // toutes les composantes strictement positives dans un deuxième tableau TPOS et toutes
   // les valeurs strictement négatives dans un troisième tableau TNEG. Afficher les tableaux TPOS et TNEG.

   int n ;
   printf("veuillez saiser la taille de tableau : ");
   scanf("%d" , &n);
   if(n<=0 || n>20)
    return 1 ;
   // remplissage
   int T[n];
   int *p ;
   p=T ;
   printf("veuillez saiser les elements de tableau :\n");
   for(p=T;p<n+T;p++){
    scanf("%d" , p);
   }
   // Affichage
   printf("T[%d]= " , n);
   for(p=T;p<n+T;p++){
    printf("\t%d" , *p);
   }

   // Copage des composantes trictement positives
   int TPOS[n];
   int *q ;
   q=TPOS ;
   for(p=T;p<n+T;p++){
    if(*p>0){
        *q = *p ;
        q++ ;
    }
   }
   // Affichage de deuxieme tableau
   printf("TPOS[]= ");
   for(p=TPOS;p<q;p++){
    printf("\t%d" , *p);
   }

   // Copage des composantes strictement negatives
   int TNEG[n] ;
   int *r ;
   r = TNEG ;
   for(p=T;p<n+T;p++){
    if(*p<0){
        *r = *p ;
        r++ ;
    }
   }
   // Affichage de troisieme tableau
   printf("TNEG[]= ");
   for(p=TNEG;p<r;p++){
    printf("\t%d" , *p);
   }
    return 0;
}
