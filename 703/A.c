//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,x,y,c=0,m=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x>y){
            m++;
        }
        else if(y>x){
            c++;
        }
    }
    if(m==c){
        printf("Friendship is magic!^^");
    }else if(m>c){
        printf("Mishka");
    }else{
        printf("Chris");
    }
    return 0;            
}
