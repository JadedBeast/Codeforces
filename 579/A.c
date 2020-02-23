//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    long long n,a,result=0;
    scanf("%I64d",&n);
    a=n;
    while(a>0){
        int test=a%2;
        if(test==1)
        result++;
        a/=2;
    }
    printf("%I64d",result);
    return 0;
}
