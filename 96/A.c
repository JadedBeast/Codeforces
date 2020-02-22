#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int main(void){
    char *word=(char *)malloc(N*sizeof(char));
    scanf("%s",word);
    word=(char *)realloc(word,strlen(word)*sizeof(char));
    int sum=1;
    int length= (int) strlen(word);
    int current=word[0];
    for (int i = 1;i < length; i++){
        if(word[i]==current){
            sum+=1;
        }else{
            sum=1;
            current=word[i];
        }
        if(sum>=7){
            break;
        }
    }
    printf("%s",sum<7?"NO":"YES");
    
}
