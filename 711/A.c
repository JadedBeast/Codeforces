//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    int n,flag=0;
    scanf("%d",&n);
    char m[n+1][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            scanf("%c",&m[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]=='O' && m[i][j+1]=='O'){
                flag=1;
                m[i][j]='+';
                m[i][j+1]='+';
                break;
            }
            if(flag)
            break;
        }
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<6;j++){
                printf("%c",m[i][j]);
            }
        }
    }else{
        printf("NO");
    }
    return 0;
}
