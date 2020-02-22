#include <stdio.h>
#include <math.h>

int main(void){
    unsigned long long n,m,a,counterM=0,counterN=0;
    scanf("%I64u %I64u %I64u",&n,&m,&a);
    counterM=ceil((double)m/a);
    counterN=ceil((double)n/a);
    printf("%I64u",counterM*counterN); 
    return 0;
}
