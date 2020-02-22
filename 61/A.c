//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 101

int main(void){
    char *b1=(char *)malloc(N*sizeof(char));
    char *b2=(char *)malloc(N*sizeof(char));
    scanf("%s",b1);
    scanf("%s",b2);
    for(int i=0;i<strlen(b1);i++){
        printf("%d",b1[i]^b2[i]);
    }
    
    
    
    return 0;
}


