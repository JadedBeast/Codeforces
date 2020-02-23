//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int result= k*w*(w+1)/2-n;
    printf("%d",result<0?0:result);
    
    return 0;
}


