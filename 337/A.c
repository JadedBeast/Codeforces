//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void*b){
    return *(int *)a-*(int *)b;
}
int main(void){
    int n,m,min=1001;
    scanf("%d %d",&n,&m);
    int T[m];
    for(int i=0;i<m;i++){
        scanf("%d",&T[i]);
    }
    qsort(T,m,sizeof(int),compare);
    for(int i=0;i+n-1<m;i++){
        int test=T[i+n-1]-T[i];
        if(test<min){
            min=test;
        }
    }
    printf("%d",min);
    
    
    return 0;
}


