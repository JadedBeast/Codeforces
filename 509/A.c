//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
    int n;
    scanf("%d",&n);
    int M[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        M[i][j]=1;
        }
    }
    for(int i=1;i<n;i++){
     for(int j=1;j<n;j++){
        M[i][j]=M[i-1][j]+M[i][j-1];
        }
    }
    printf("%d",M[n-1][n-1]);
    return 0;
}
