#include <stdio.h>
#include <stdlib.h>
int main(void){
    
    int lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n,flag=0;
    scanf("%d",&n);
    int length=(int) (sizeof(lucky)/sizeof(lucky[0]));
    for(int i=0; i<length;i++){
        if(n%lucky[i]==0){
            flag++;
            break;
        }
    }
    printf("%s",flag?"YES":"NO");
    
    return 0;
    
}
