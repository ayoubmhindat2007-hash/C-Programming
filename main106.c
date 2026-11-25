#include <stdio.h>
#include <stdlib.h>
int composant (long m){
  int nbr=0 ;
  do{
    m = m/10 ;
    nbr++ ;
  }while(m!=0);
  return nbr ;
}


int main()
{
    long n ;
    printf("veuiller saisir un nombre : ");
    scanf("%ld" , &n);
    printf("le nombre de chiffres qui composent %d est : %d" , n , composant(n));

    return 0;
}
