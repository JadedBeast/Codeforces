//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,p,q,available=0;
    scanf("%d",&n);
    for (int i =0;i<n;i++){
        scanf("%d %d",&p,&q);
        if(q-p>=2){
            available++;
        }
    }
    printf("%d",available);
    
    return 0;
}


