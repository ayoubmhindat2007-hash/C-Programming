#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[3][6] ;
    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
                T[i][j] = 0 ;
            printf("%d\t" , T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
