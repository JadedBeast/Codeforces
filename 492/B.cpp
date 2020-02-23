//       In the name of         ˜”*°•.˜”*°•                      God                     •°*”˜.•°*”˜
 
/*  
 
            JadedBeast                                             ~~Morocco~~
 
*/
#include <iostream> 
#include <vector> 
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(void){
    int n;
    long long l,a;
    vector<long long> lanterns;
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>a;
        lanterns.push_back(a);
    }
    sort(lanterns.begin(),lanterns.end());
    double result=max(lanterns[0],l-lanterns[n-1]);
    double sub;
    for(int i=0;i<n-1;i++){
        sub=(double)(lanterns[i+1]-lanterns[i])/2;
        if(sub>result){
            result=sub;
        }
    }
    
    printf("%.10f",result);
    
    return 0;
}
