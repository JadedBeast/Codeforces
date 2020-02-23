//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n,k;
    float t;
    scanf("%d %d",&n,&k);
    t=(float)2*(240-k)/5;
    while(n*(n+1)>t){
        n--;
    }
    printf("%d",n);
   
    return 0;
}
