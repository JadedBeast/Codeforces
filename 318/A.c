//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    unsigned long long n,k,oddNumbers,result;
    scanf("%I64u %I64u",&n,&k);
    oddNumbers=ceil((double)n/2);
    if(k>oddNumbers){
        result=2*(k-oddNumbers);
    }else{
        result=2*k-1;
    }
    
    printf("%I64u",result);
   
    return 0;
}
