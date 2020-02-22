//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int k,l,m,n,d,harmedDragons=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    d++;
    int *result=(int *)calloc(d,sizeof(int));
    for(int i=k;i<d;i+=k){
        result[i]=1;
    }
    for(int i=l;i<d;i+=l){
        result[i]=1;
    }
    for(int i=m;i<d;i+=m){
        result[i]=1;
    }
    for(int i=n;i<d;i+=n){
        result[i]=1;
    }
    for(int i=1;i<d;i++){
        if(result[i]){
            harmedDragons++;
        }
    }
    printf("%d",harmedDragons);
    return 0;
}


