//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int a,b,c,case0,case1,case2,case3,case4,case5,max;
    scanf("%d %d %d",&a,&b,&c);
    case0=a+b+c;
    case1=a*b*c;
    case0=case0>case1?case0:case1;
    case2=(a+b)*c;
    case3=a*(b+c);
    case2=case2>case3?case2:case3;
    case4=a+b*c;
    case5=a*b+c;
    case4=case4>case5?case4:case5;
    case0=case0>case2?case0:case2;
    max=case0>case4?case0:case4;
    printf("%d",max);
   
   
    return 0;
}
