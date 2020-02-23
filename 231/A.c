#include <stdio.h>
#define N 3

int main(void){
    int rep,i=0,counter=0,x,sum;
    scanf("%d",&rep);
    while(i++<rep){
        sum=0;
        for (int k=0;k<N;k++){
            scanf("%d",&x);
            sum+=x;
        }
        if(sum>=2){
            counter++;
        }
    }
    printf("%d",counter);
}
