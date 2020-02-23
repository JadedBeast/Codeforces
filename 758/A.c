//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,max=0,distinct=0,sum=0;
    scanf("%d",&n);
    int T[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&T[i]);
        if(T[i]>max){
            max=T[i];
        }
    }
    for(int i=0 ;i<n;i++){
        if(T[i]!=max){
            distinct++;
            sum+=T[i];
        }
    }
    printf("%d",distinct*max-sum);
    
    return 0;
}

