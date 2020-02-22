//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define N 101 
int main(void){
    int counter=0;
    char *word=(char *)malloc(N*sizeof(char));
    scanf("%s",word);
    int length=strlen(word);
    for(int i=1;i<length;i++){
        if(isupper(word[i])){
            counter++;
        }
    }

    if(counter==length-1 ||length==1){
    if(isupper(word[0]) && counter==length-1){
    word[0]=tolower(word[0]);
    }else{
       word[0]=toupper(word[0]); 
    }
    for(int i=1;i<length;i++){
        word[i]=tolower(word[i]);
    }
    }
    printf("%s",word);
    return 0;
}
