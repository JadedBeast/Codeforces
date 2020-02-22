//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 101 
int main(void){
    char *word=(char *)malloc(N*sizeof(char));
    scanf("%s",word);
    int flag=0;
    int length=strlen(word);
    for(int i=0;i<length;i++){
        if(word[i]=='H' || word[i]=='Q' || word[i]=='9' ){
            flag++;
            break;
        }
    }
    printf("%s",flag?"YES":"NO");
   
    return 0;
}
