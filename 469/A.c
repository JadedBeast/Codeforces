//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,p,q,x,flag=1;
    scanf("%d",&n);
    int *result=(int *)malloc((n+1)*sizeof(int));
    for(int i=0;i<=n;i++){
        result[i]=0;
    }

    scanf("%d",&p);
    for(int i=0;i<p;i++){
    scanf("%d",&x);
    result[x]++;
    }
    
    scanf("%d",&q);
    for(int i=0;i<q;i++){
    scanf("%d",&x);
    result[x]++;
    }
    for(int i=1;i<=n;i++){
        if(result[i]==0){
            flag=0;
        }
    }

    printf("%s",flag?"I become the guy.":"Oh, my keyboard!");
    
    return 0;
}


