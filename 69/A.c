//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <stdio.h>
 
int main(void){
   int x,y,z,X=0,Y=0,Z=0,rep,flag=0;
   scanf("%d",&rep);
   while(rep--){
       scanf("%d %d %d",&x,&y,&z);
       X+=x;
       Y+=y;
       Z+=z;
   }
   if(X==0 && Y==0 && Z==0){
       flag=1;
   }
   printf("%s",flag?"YES":"NO");
    return 0;
}
