//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    int position,marge=5,n=0,first;
    scanf("%d",&position);
    while(marge<position){
        marge+=pow(2,n)*10;
        n++;
    }
    first=marge-pow(2,n-1)*10;
    if(position<=first+pow(2,n)){
        printf("Sheldon"); 
    }
    else if(position<=first+2*pow(2,n)){
        printf("Leonard");
    }
    else if(position<=first+3*pow(2,n)){
        printf("Penny");
    }
    else if(position<=first+4*pow(2,n)){
        printf("Rajesh");
    }
    else if (position<=first+5*pow(2,n)){
        printf("Howard");
    }
    
    return 0;
}
