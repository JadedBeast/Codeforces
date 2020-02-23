//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int min(int a,int b) {return a<b?a:b;}
int max(int a,int b) {return a>b?a:b;}
int main(void){
    int n,sum=0;
    scanf("%d",&n);
    char *disk1=(char *)malloc((n+1)*sizeof(char));
    char *disk2=(char *)malloc((n+1)*sizeof(char));
    scanf("%s",disk1);
    scanf("%s",disk2);
    for(int i=0;i<n;i++){
        sum+=min(abs(disk1[i]-disk2[i]),abs(9-max(disk2[i],disk1[i])+min(disk2[i],disk1[i]))+1);
    }
    printf("%d",sum);
    return 0;
}
