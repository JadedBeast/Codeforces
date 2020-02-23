//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n,x,groups=1,current;
    scanf("%d",&n);
    scanf("%d",&x);
    current=x;
    n--;
    while(n--){
        scanf("%d",&x);
        if(x!=current){
            groups++;
            current=x;
        }
    }
    printf("%d",groups);
   
    return 0;
}
