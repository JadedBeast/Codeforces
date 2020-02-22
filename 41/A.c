//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 101

int main(void){
    int flag=1;
    char *word1=(char *)malloc(N*sizeof(char));
    char *word2=(char *)malloc(N*sizeof(char));
    scanf("%s",word1);
    scanf("%s",word2);
    if(strlen(word1)!=strlen(word2)){
        flag=0;
    }else{
    for (int i =0;i<strlen(word1);i++){
        if(word1[i]!=word2[strlen(word2)-1-i]){
            flag=0;
         }
      }
    }
    printf("%s",flag?"YES":"NO");
    
    return 0;
}


