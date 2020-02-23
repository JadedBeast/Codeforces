//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 27/10/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e5+1;


int main() {
    JadedBeast();
    int power[10];
    power[0]=1;
    for(int i=1;i<10;i++)
    	power[i]=10*power[i-1];

    ll n,powa=0;
    ll ans=0;
    cin >>n;
    ll temp=n;
    while(temp/10){
        powa++;
        temp/=10;
    }
    for(ll i=powa;i>=0;i--){
        ans+=(n-(power[i]-1))*(i+1);
        n=(power[i]-1);
    }
    cout <<ans;
    return 0;
        
}
