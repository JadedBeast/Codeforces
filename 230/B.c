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
    int n,flag=0;
    long  long x,test;
    bool *sieve=(bool*)malloc(N*sizeof(bool));
    sieve[0]=false,sieve[1]=false;
    for(int i=2;i<=N;i++){
        sieve[i]=true;
    }
    for(int i=2;i<=N;i++){
        for(int j=2*i;j<=N;j+=i){
        sieve[j]=false;
        }
    }
    scanf("%d",&n);
    while(n--){
        flag=0;
        scanf("%I64d",&x);
        test=sqrt(x);
        if(test*test==x  && sieve[test]){
                flag++;
        }
        printf("%s",flag?"YES\n":"NO\n");
    }
    return 0;
}


