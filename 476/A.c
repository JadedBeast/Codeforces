//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    int n,m,result;
    scanf("%d %d",&n,&m);
    result=(n+1)/2;
    if(result%m!=0){
        result=(result+m)/m;
        result*=m;
    }
    printf("%d",n>=m?result:-1);
    return 0;
}

