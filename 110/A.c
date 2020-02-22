//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 19

int main(void){
    int flag=1,occurrence=0;
    char *number=(char *)malloc(N*sizeof(char));
    scanf("%s",number);
    for(int i=0;i<strlen(number);i++){
        if(number[i]=='7' || number[i]=='4' ){
        occurrence++;
        }
    }
    if(occurrence!=4 && occurrence!=7){
        flag=0;
    }
    printf("%s",flag?"YES":"NO");
    
    return 0;
}


