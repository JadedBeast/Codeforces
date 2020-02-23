//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n,x,flag=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x==1){
            flag=1;
            break;
        }
    }
    printf("%s",flag?"HARD":"EASY");
   
   
    return 0;
}
