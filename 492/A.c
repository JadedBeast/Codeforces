//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,k=1;
    scanf("%d",&n);
    while(n>k*(k+1)*(4*k+8)/24){
        k++;
    }
    k=n<(k*(k+1)*(4*k+8)/24)?(k-1):k;
    printf("%d",k);
   
    return 0;
}
