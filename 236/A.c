#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1000001

int main(void){
    char *word=(char *)malloc(N*sizeof(char));
    char *distinct=(char *)malloc(N*sizeof(char));
    scanf("%s",word);
    distinct[0]=word[0];
    int counter=1;
    for (int i =0;i<strlen(word);i++){
        int flag=0;
        for(int j=0;j<strlen(distinct);j++){
            if(word[i]==distinct[j]){
                flag++;
            }
        }
        if(!flag){
            distinct[counter]=word[i];
            counter++;
        }
    }
    printf("%s",counter%2==0?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}
