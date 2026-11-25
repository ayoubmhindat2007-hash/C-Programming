#include <stdio.h>
#include <stdlib.h>
void remplissage (int T[]){
  printf("veuillez saisir les elements de tableau :\n");
  for(int i=0;i<10;i++){
    scanf("%d" , &T[i]);
  }
}
void croisant (int T[]){
    int temp ;
  for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
    if(T[j]<T[i]){
       temp = T[i];
       T[i] = T[j];
       T[j] = temp ;
    }
  }
  }
  printf("le tableau en ordre croisant :\n");
  for(int i=0;i<10;i++){
    printf("\t%d" , T[i]);
  }
}
void decroisant (int T[]){
  int temp ;
  for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
    if(T[j]>T[i]){
        temp = T[i] ;
        T[i] = T[j] ;
        T[j] = temp ;
    }
  }
  }
  printf("le tableau decroisant est :\n");
  for(int i=0;i<10;i++){
    printf("\t%d" , T[i]);
  }
}
void affichage (int T[]){
  printf("les elements de tableau sont :\n");
  for(int i=0;i<10;i++){
    printf("\t%d" , T[i]);
  }
}
int main()
{
    int T[10];
    remplissage (T);
    printf("\n");
    affichage (T);
    printf("\n");
    croisant (T);
    printf("\n");
    decroisant (T);


    return 0;
}
