//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    char matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]='#';
        }
    }
    int flag=0,magic;
    for(int i=1;i<n;i+=2){
        magic=flag^1;
        for(int j=flag;j<m-magic;j++){
            matrix[i][j]='.';
        }
        flag=flag==1?0:1;
    }
    for(int i=0;i<n;i++){
        for(int j=0 ;j<m;j++){
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;            
}
