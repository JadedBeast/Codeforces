//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>

int main(void){
    int n,d;
    double a,b,x,delta;
    scanf("%d",&n);
    while(n--){
    scanf("%d",&d);
    if(d>=4 || d==0){
    x=d*d-4*d;
    delta=sqrt(x);
    b=(double)(d-delta)/2;
    a=d-b;
    printf("Y %.10f %.10f\n",a,b);
    }else{
        printf("N\n");
        }
    }
    return 0;
}
