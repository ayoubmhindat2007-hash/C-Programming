#include <stdio.h>
#include <stdlib.h>
void type_annee (int a){
  if((a%100!=0 && a%4==0) || (a%400==0)){
    printf("l'annee %d est bissextile (366 jours)" ,a);
  }
  else
    printf("l'annee %d n'est pas bissextile ." ,a);
}
int main()
{
    int annee ;
    printf("veuillez saisir une annee : ");
    scanf("%d" ,&annee);

    type_annee (annee);
    return 0;
}
