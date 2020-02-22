//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
int gcd(int a ,int b);
int main(void){
    int a,b,n,counter=1,current,x,flag=0;
    scanf("%d %d %d",&a,&b,&n);
    while(n>=0){
        x=counter%2!=0?a:b;
        current=gcd(x,n);
        if(current<=n){
            if(counter%2!=0){
                flag=0;
            }else{
            flag=1;
            }
        }
        n-=current;
        counter++;

    }
    printf("%d",flag?1:0); 
    return 0;
}
int gcd(int a , int b){
    int max=a>b?a:b;
    int min=a>b?b:a;
    if(a==0 || b==0){
        return max;
    }
    else if(max-min>=0){
        return gcd(min,max-min);
    }
    return 0;
}
