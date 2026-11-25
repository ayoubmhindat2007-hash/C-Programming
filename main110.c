#include <stdio.h>
#include <stdlib.h>
 int maximum (int T[]){
   int max = T[0] ;
   for(int i=1;i<10;i++){
    if(T[i]>max){
        max = T[i];
    }
   }
   return max ;
 }
 int minimum (int T[]){
   int min = T[0] ;
   for(int i=1;i<10;i++){
    if(T[i]<min){
        min = T[i];
    }
   }
   return min ;
 }
 void renvoie (int T[]){
   int P[10];
   for(int i=0;i<10;i++){
    P[i] = T[10-i-1] ;
   }
   printf("le neuveau tableau est :\n");
   for(int i=0;i<10;i++){
    printf("\t%d" , P[i]);
   }
 }
int main()
{
    int T[10] ;
    printf("veuillez saisir les elements de tableau :\n");
    for(int i=0;i<10;i++){
        scanf("%d" , &T[i]);
    }
    printf("le maximum de tableau est : %d\n" , maximum(T));
    printf("le minimum de tableau est : %d\n" , minimum(T));
    renvoie (T);
    return 0;
}
