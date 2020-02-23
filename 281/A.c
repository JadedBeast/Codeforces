#include <stdio.h>
#include <string.h>
#define N 1000

int main(void){
    char word[N];
    scanf("%s",word);
    word[0]=toupper(word[0]);
    
    printf("%s",word);
    return 0;
}
