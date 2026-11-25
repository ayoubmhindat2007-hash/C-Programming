#include <stdio.h>
#include <stdlib.h>
int diametre (int A){
    int D ;
  D = A + A ;
  return D ;
}
float surface (int A){
    float S ;
   S = A * A * (3.14);
   return S ;
}
float perimetre (int A){
    float P ;
   P = A * (6.28);
   return P ;
}

int main()
{
    int R ;
    printf("veuiller saisir le rayon de cercle :  ");
    scanf("%d" , &R);

    printf("le diametre de cercle est : %d\n " , diametre(R));
    printf("la surface de cercle est : %.2f\n" , surface(R));
    printf("le perimetre de cercle est : %.2f" , perimetre(R));
    return 0;
}
