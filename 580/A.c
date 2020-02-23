//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
   int rep,counter=1,maxCounter=1,number;
   scanf("%d",&rep);
   rep--;
   scanf("%d",&number);
   int past=number;
   while(rep--){
   scanf("%d",&number);
   if(past<=number){
       counter++;
   }else{
       counter=1;
   }
   if(counter>maxCounter){
       maxCounter=counter;
   }
   past=number;
   }
   printf("%d",maxCounter);
    return 0;
}
