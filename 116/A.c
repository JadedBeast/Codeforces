//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int a,b,rep,max=-1,sum=0;
    scanf("%d",&rep);
    while(rep--){
    scanf("%d %d",&a,&b);
    sum+=b-a;
    if(sum>max){
        max=sum;
        }
    }
    printf("%d",max);
   
    return 0;
}
