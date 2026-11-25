#include <stdio.h>
#include <stdlib.h>
void nom_premier (int m){
    int c = 0 ;
   for(int i=2;i<m;i++){
    if(m%i==0){
        printf("le nombre %d n'est pas premier ." , m);
            break ;
    }
    else
         c=1 ;
   }
   if(c==1){
    printf("le nombre %d est premier ." , m);
   }

}


int main()
{
    int n ;
  printf("veuillez saisir un entier n : ");
  scanf("%d" , &n);

  nom_premier (n);
    return 0;
}
