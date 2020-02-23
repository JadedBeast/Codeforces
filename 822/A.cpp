//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 11/2/2019

*/
unsigned long long facto(long long a){
    if(a==1) return 1;
    else return a*facto(a-1);
}

#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long a,b;
    cin>>a>>b;
    cout<< facto(min(a,b))<<endl;
    return 0;
}
