//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int N,M,result;
    scanf("%d %d",&M,&N);


    result=(N%2!=0)?(N/2)*M+M/2:(N/2)*M;
    printf("%d",result);
    
    return 0;
}


