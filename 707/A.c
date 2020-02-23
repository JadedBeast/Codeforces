//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n,m,flag=0;
    char color;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf(" %c",&color);
            if(color!='W' && color!='B' && color!='G'){
                flag++;
                break;
            }
        }
    }
    printf("%s",flag?"#Color":"#Black&White");
   
   
    return 0;
}
