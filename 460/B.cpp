//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/11/2019

*/

#include <bits/stdc++.h>
using namespace std;
#define  ll long long
const ll mod= 1e9+7;
const ll MAX=1e9;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
ll sum(ll x){
    ll ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}

int main() {
    JadedBeast();
    ll a , b ,c;
    cin >> a >> b >> c;
    set<ll> s;
    for(ll sx=1;sx<=81;sx++){
        ll x=b*pow(sx,a)+c;
        if(x>MAX)
            break;
        if(sum(x)==sx)
            s.insert(x);

    }
    cout<<s.size()<<endl;
    for(ll x : s)
        cout<<x<<" ";
    return 0;
}
