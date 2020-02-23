//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,counterA=0,counterD,i=0;
    scanf("%d",&n);
    char *word=(char *)malloc((n+1)*sizeof(char));
    scanf("%s",word);
    while(i<n){
        if(word[i++]=='A'){
            counterA++;
        }
    }
    counterD=n-counterA;
    if(counterA==counterD){
        printf("Friendship");
    }
    else {
        printf("%s",counterA>counterD?"Anton":"Danik");
    }
    return 0;
}


