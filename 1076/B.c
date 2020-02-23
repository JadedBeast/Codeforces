//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define N 100001

int main(void){ 
    bool *sieve=(bool *)malloc(N*sizeof(bool));
    sieve[0]=false,sieve[1]=false;
    for(int i=2;i<N;i++){
    sieve[i]=true;
        }
    for(int i=2;i<=N/2;i++){
        for(int j=2*i;j<N;j+=i){
            sieve[j]=false;
        }
    }
    long long *primes=(long long *)malloc(N*sizeof(long long));
    int counter=0;
    for(int i=2;i<N;i++){
        if(sieve[i]){
            primes[counter]=i;
            counter++;
        }
    }
    long long n,result=0;
    scanf("%I64d",&n);
    while(n>0){
    for(int i=0;i<counter;i++){
         if(n%primes[i]==0){
            result++;
            n=n-primes[i];
            if(n%2==0){
                result+=n/2;
                n=n%2;
                }
            break;
            }
        else if(i==counter-1 && result==0){
            result=1;
            n=0;
            break;
            }
        }
    }
   printf("%I64d\n",result);
    return 0;
}
