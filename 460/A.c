//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,m,socks=0,day=1;
    scanf("%d %d",&n,&m);
    socks=n;
    
    while(m*day<=socks){
        socks++;
        day++;
    }
    printf("%d",socks);
    
    return 0;
}


