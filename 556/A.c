//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,ones=0,zeroes=0,min;
    scanf("%d",&n);
    char *number=(char *)malloc((n+1)*sizeof(char));
    scanf("%s",number);
    for(int i=0;i<n;i++){
        if(number[i]=='1'){
            ones++;
        }
    }
    zeroes=n-ones;
    min=ones<zeroes?ones:zeroes;
    
    printf("%d",n-2*min);
    return 0;
}


