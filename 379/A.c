//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int a,b,candles;
    scanf("%d %d",&a,&b);
    candles=a;
    while(a/b>0){
        int c=a/b;
        candles+=c;
        a+=c-c*b;
    }
    printf("%d",candles);
    return 0;
}


