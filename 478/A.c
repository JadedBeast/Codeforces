//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n=5,x,sum=0;
    while(n--){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d",(sum%5==0 && sum>0)?sum/5:-1);
    return 0;
}


