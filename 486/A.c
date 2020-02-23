//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
   long long n,result,k;
   scanf("%I64d",&n);
   k=n/2;
   if(n%2!=0){
       result=-n/2-1;
   }else{
       result=n/2;
   }
   printf("%I64d",result);
   
    return 0;
}
