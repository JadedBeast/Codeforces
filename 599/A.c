//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
long long min(long long a, long long b){
    return a<b?a:b;
}
long long max(long long a, long long b){
    return a>b?a:b;
}
int main(void){
    long long d1,d2,d3;
    scanf("%I64d %I64d %I64d",&d1,&d2,&d3);
    printf("%I64d",min(2*(d1+d2),min(2*(d1+d3),min(d1+d3+d2,2*(d2+d3)))));
   
    return 0;
}
