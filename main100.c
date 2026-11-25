#include <stdio.h>
#include <stdlib.h>
void tab_multiplication(int a){
    printf("le tableau de multiplication est :\n");
    for(int i=0;i<=10;i++){
        printf("%d x %d = %d\n" ,a,i,a*i);
    }
}

int main()
{
    int n ;
    printf("veuillez saisir un entier n : ");
    scanf("%d" , &n);

    tab_multiplication(n) ;

    return 0;
}
