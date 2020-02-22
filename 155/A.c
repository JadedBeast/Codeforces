//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜

/*  

            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
#include <stdlib.h>

/*int max{
    return x>y?x:y;
}

int min{
    return x<y?x:y;
}*/

int main(void){
    int n,max,min,a,amazing=0;  
    scanf("%d",&n);
    scanf("%d",&a);
    max=a;
    min=a;
    n--;
    while(n--){
        scanf("%d",&a);
        if(a>max){
            max=a;
            amazing++;
        }
        if(a<min){
            min=a;
            amazing++;
        }
    }
    
    printf("%d",amazing);
    
    return 0;
}
