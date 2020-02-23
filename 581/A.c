//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int a,b,normal=0,hipster=0,max,min;
    scanf("%d %d",&a,&b);
    min=a<=b?a:b;
    max=a>=b?a:b;
    hipster=min;
    normal=(max-min)/2;
    printf("%d %d",hipster,normal);
   
    return 0;
}
