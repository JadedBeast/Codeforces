#include <stdio.h>
#include <stdlib.h>

int main(void){
     int n,k,counter=0;
     scanf("%d %d",&n,&k);
     int *score=(int *)malloc(n*sizeof(int));
     for(int i=0;i<n;i++){
         scanf("%d",&score[i]);
     }
     int average=score[k-1];
    for (int i=0;i<n;i++){
      if(score[i]==0 || score[i]<average){
          break;
      }else{
            counter++;
        }
      }
    printf("%d",counter);
    free(score);
     
    return 0;
}
