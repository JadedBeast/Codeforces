//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,counter=0;
    scanf("%d",&n);
    char *numbers=(char *)malloc(n*sizeof(char));
    scanf("%s",numbers);
    for(int i=0;i<n;i++){
        if(numbers[i]=='8'){
            counter++;
        }
        if(counter*11>n){
            counter--;
            break;
        }
    }
    printf("%d",counter);
    return 0;
}
