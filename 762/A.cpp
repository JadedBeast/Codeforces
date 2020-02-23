//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <cmath>
#include <iostream>

#include <cstdlib>
#include <algorithm>

int main(void){
     long long n,k;
    scanf("%I64d %I64d",&n,&k);
    long long rcn=sqrt(n);
    int counter=1;
     long long *divisors=( long long  *)malloc(100000*sizeof(long long));
    divisors[0]=0;
    for(long long  i=1;i<=rcn;i++){
        if(n%i==0){
            divisors[counter]=i;
            counter++;
        }
    }
     long long *moreDivisors=( long long  *)malloc((2*counter)*sizeof( long long));
    for(int i=0;i<counter;i++){
        moreDivisors[i]=divisors[i];
    }
    int length=counter,flag=1;
    for(int i=1;i<length;i++){
        long long test = n/divisors[i];
        for(int j=1;j<counter;j++){
            if(moreDivisors[j]==test){
                flag=0;
                break;
            }
        }
        if(flag){
            moreDivisors[counter]=test;
            counter++;
        }
    }
    std::sort(moreDivisors,moreDivisors+counter);
    if(k>=counter){
        printf("-1");
    }else{
        printf("%I64d",moreDivisors[k]);
    }
    return 0;
}


