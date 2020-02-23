//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
#include <tgmath.h>
int main(void){
    unsigned long long n,x,y;
    scanf("%I64u",&n);
    scanf("%I64u %I64u",&x,&y);
    unsigned long long white=sqrt(powl((x-1),2) +powl(y-1,2));
    unsigned long long black=sqrt(powl((n-x),2) +powl(n-y,2));
    if(white<=black){
        printf("White");
    }else{
        printf("Black");
    }
    return 0;            
}
