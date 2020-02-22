//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,i=0,max=0,min=101,minIndex=-1,maxIndex=-1;
    scanf("%d",&n);
    int T[n];
    while(i<n){
        scanf("%d",&T[i]);
        if(T[i]>max){
            max=T[i];
            maxIndex=i;
        }
        if(T[i]<=min){
            min=T[i];
            minIndex=i;
        }
        i++;
    }
    int result;
    if(maxIndex<minIndex){
        result=maxIndex+(n-1-minIndex);
    }else if(maxIndex>minIndex){
        result=maxIndex+(n-1-minIndex)-1;
    }else{
        result=0;
    }
    

    printf("%d",result);
    
    return 0;
}

