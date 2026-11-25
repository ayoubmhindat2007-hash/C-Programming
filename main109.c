#include <stdio.h>
#include <stdlib.h>
int somme (int T[]){
   int s=0 ;
   for(int i=0;i<10;i++){
    s = s + T[i] ;
   }
   return s ;
}
int produit (int T[]){
   int p=1 ;
   for(int i=0;i<10;i++){
    p = p * T[i];
   }
   return p ;
}
float moyenne (int T[]){
   int m , s;
   s = somme(T);
   m = s/10 ;
   return m ;
}
void PN (int T[]){
    printf("les elements positives de tableau sont :\n");
   for(int i=0;i<10;i++){
    if(T[i]>=0){
        printf("\t%d" , T[i]);
    }
   }
    printf("les elements negatives de tableau sont :\n");
   for(int i=0;i<10;i++){
    if(T[i]<0){
        printf("\t%d" , T[i]);
    }
   }
}

int main()
{
    int T[10];
    printf("veuyillez saisir les 10 elements de tableau :\n");
    for(int i=0;i<10;i++){
        scanf("%d" , &T[i]);
    }

    printf("la somme des elements de tableau est : %d\n" , somme(T));
    printf("le produit des elements de tableau est : %d\n" , produit(T));
    printf("la moyenne est : %d\n" , moyenne(T));
    PN(T);
    return 0;
}
