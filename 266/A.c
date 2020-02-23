#include <stdio.h>

int main(void){
    int n,sum=0;
    scanf("%d",&n);
    char word[n];
    scanf("%s",word);
    char current=word[0];
    for (int i =1;i<n;i++){
        if(word[i]==current){
            sum++;
        }else{
            current=word[i];
        }
        
    }
    
    printf("%d",sum);
    return 0;
}
