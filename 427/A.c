//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,a,sum=0,counter=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
         if(a>0 || (a<0 && sum>0)){
            sum+=a;
        }
        else{
            counter++;
        } 
    }
    printf("%d",counter);
    return 0;
}


