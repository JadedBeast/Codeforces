
 #include <stdio.h>



int main(void){
    char input[4];
    int rep,i=0,x=0;
    scanf("%d",&rep);
    while(i++<rep){
        scanf("%s",input);
        if(input[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
