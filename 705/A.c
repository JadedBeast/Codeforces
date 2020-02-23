//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    char love[]="I love ";
    char hate[]="I hate ";
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%s",hate);
        }else{
            printf("%s",love);
        }
        if(i<n){
            printf("that ");
        }
    }
   printf("it");
    return 0;
}
