//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 8/3/2019

*/

#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,result=0;
    cin >> n;
    int v[5]={100,20,10,5,1};
    for(int i=0;i<5;i++)
    	result+=n/v[i],n%=v[i];
    
    cout<<result<<endl;

    return 0;
}
