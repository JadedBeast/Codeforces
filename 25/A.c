//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,i=1,rep,indexEv,indexOdd,counterEv=0,counterOdd=0;
    scanf("%d",&rep);
    while(i<=rep){
    scanf("%d",&n);
    if(n%2==0){
        counterEv++;
        indexEv=i;
    }else{
        counterOdd++;
        indexOdd=i;
    }
        i++;
    }
    printf("%d",counterEv>counterOdd?indexOdd:indexEv);
   
    return 0;
}
