//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,i=1,x;
    scanf("%d",&n);
    int T[n+1];
    T[0]=0;
    while(i<=n){
        scanf("%d",&x);
        T[x]=i;
        i++;
    }
    for(int i=1;i<=n;i++){
       printf("%d ",T[i]);
    }
    return 0;
}

