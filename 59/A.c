//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    const int n=101;
    int counterUpper=0;
    char *word=(char *)malloc(n*sizeof(char));
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++){
        if(isupper(word[i])){
            counterUpper++;
        }
    }
    if(counterUpper>strlen(word)/2){
         for(int i=0;i<strlen(word);i++){
             word[i]=toupper(word[i]);
         }
    }else{
        for(int i=0;i<strlen(word);i++){
             word[i]=tolower(word[i]);
         }
    }
    printf("%s",word);
    
    return 0;
}


