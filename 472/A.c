//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define N 1000001

int main(void){
    bool *sieve=(bool *)malloc(N*sizeof(bool));
    sieve[0]=false,sieve[1]=true;
    for(int i=2;i<N;i++){
        sieve[i]=true;
    }
    int rcn=sqrt(N);
    for(int i=2;i<=rcn;i++){
        for(int j=2*i;j<N;j+=i){
            sieve[j]=false;
        }
    }
    int n;
    scanf("%d",&n);
    int x=n,y;
    while(1){
        x--;
        y=n-x;
        if(!sieve[x] && !sieve[y]){
            break;
        }
    }
    printf("%d %d",y,x);
    return 0;
}
