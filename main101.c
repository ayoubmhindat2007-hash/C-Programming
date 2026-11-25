#include <stdio.h>
#include <stdlib.h>
void cube(int a){
 int C ;
 C = a*a*a ;
 printf("le cube d'entier %d est : %d" ,a , C);
}
int main()
{
    int n ;
    printf("veuillez saisir un entier n : ");
    scanf("%d" , &n);
    cube(n);
    return 0;
}
   // OR
 float cube(int a){
 int C ;
 C = a*a*a ;
 return C ;
}
int main()
{
    int n ;
    printf("veuillez saisir un entier n : ");
    scanf("%d" , &n);
    printf("le cube d'entier %d est : %d" ,n , cube(n));
    return 0;
}
