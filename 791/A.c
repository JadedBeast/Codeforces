//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int a,b,counter=0;
    scanf("%d %d",&a,&b);
    do{
        counter++;
        a=3*a;
        b=2*b;
        
    }while(a<=b);   
    printf("%d",counter);
    return 0;
}
