//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,sum=0,a,k=1,max=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
        if(a>max){
            max=a;
        }
    }
    k=(2*sum+n)/n;
    printf("%d",k<max?max:k);
    return 0;
}

