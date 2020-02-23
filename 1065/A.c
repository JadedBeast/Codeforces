//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>

int main(void){
    unsigned long long n,s,a,b,c,x,y;
    scanf("%I64u",&n);
    while(n--){
    scanf("%I64u %I64u %I64u %I64u",&s,&a,&b,&c);
    x=s/c;
    y=x/a;
    printf("%I64u \n",x+y*b);
    }
    return 0;
}


