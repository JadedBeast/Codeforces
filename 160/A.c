//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    int *x=(int *)a;
    int *y=(int *)b;
    return -(*x-*y);
}
int main(void){
    int n,sum=0,i=0,coins=0;
    scanf("%d",&n);
    int T[n];
    while(i<n){
    scanf("%d",&T[i]);
    sum+=T[i];
    i++;
    }
    int x=sum/2;
    sum=0;
    qsort(T,n,sizeof(int),compare);
    for(int i=0;i<n;i++){
        if(sum<=x){
            sum+=T[i];
            coins++;
        }
    }
    printf("%d",coins);
    return 0;
}
