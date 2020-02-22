//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <math.h>
int main(void){
    int s[5]={-1,0,0,0,0};

    int n,number,minTaxi=0,minS31;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        s[number]++;
    }
    minTaxi+=s[4];
    if(s[3]>0){
     minS31=s[3]>s[1]?s[1]:s[3];
     minTaxi+=s[3];
     s[1]-=minS31;   
    }
    minTaxi+=ceil((float)(s[1]+2*s[2])/4);
    printf("%d",minTaxi);
    return 0;
}


