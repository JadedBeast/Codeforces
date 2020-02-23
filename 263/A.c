#include <stdio.h>
#include <math.h>
#define N 5

int main(void){
    int m[5][5],indexI=0,indexJ=0;
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            scanf("%d",&m[i][j]);
            if(m[i][j]==1){
                indexI=i;
                indexJ=j;
            }
        }
    }
    int result=abs(2-indexI)+abs(2-indexJ);
    printf("%d",result);
    return 0;
}
