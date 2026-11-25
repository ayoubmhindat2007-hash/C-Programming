#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a,b,c ;
void saisi (){
   printf("veuillez saisir le coeficient a : ");
    scanf("%d" , &a);
    printf("veuillez saisir le coeficient b : ");
    scanf("%d" , &b);
    printf("veuillez saisir le coeficient c : ");
    scanf("%d" , &c);

}

int delta (){
  int del ;
  del = (b*b) - 4*a*c ;
  return del ;
}
int solution (int d){
    int x1 , x2 , x ;
   if(d<0){
    printf("l'equation a aucun solution .");
   }
   else if (d==0){
        x = (-b)/(2*a) ;
    printf("l'equation admet un seul solution x = %d " , x);
   }
   else {
       x1 = (-b - sqrt(d))/(2*a) ;
       x2 = (-b + sqrt(d))/(2*a) ;
    printf("l'equation admet deux solutions x1 = %d et x2 = %d" , x1 , x2);
   }

}


int main()
{
    int delt ;
    saisi ();
    delt = delta ();
    solution (delt);


    return 0;
}
