//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 16/11/2019
    
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
#define debugg(x) cout<<"----Mayday Mayday : "<<x<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int mod = 1e9+7;
const int MAX = 1e6+9;
 
int main(void) {
    JadedBeast();
    ll n,k;cin >>n>>k;
 
    if((n/k)&1)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;      
}
