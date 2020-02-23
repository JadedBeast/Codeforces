//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n,h,a,counter=0;
    scanf("%d %d",&n,&h);
    while(n--){
        scanf("%d",&a);
        int x=a>h?2:1;
        counter+=x;
    }
    printf("%d",counter);
    return 0;
}
