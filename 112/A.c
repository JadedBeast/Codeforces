#include <stdio.h>
#include <string.h>


int main(void){
    char word1[100];
    char word2[100];
    scanf("%s",word1);
    scanf("%s",word2);

    for(int i=0 ;i<strlen(word1);i++){
        word1[i]=tolower(word1[i]);
    }
    for(int i=0 ;i<strlen(word2);i++){
        word2[i]=tolower(word2[i]);
    }

    int result=strcmp(word1,word2);
    if(result==0){
        printf("0");
    }
    else if(result<0){
        printf("-1");
    }else{
        printf("1");
    }
    
    return 0;
}
