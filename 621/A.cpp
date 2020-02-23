//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 19/01/2020
    
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
const int MOD = 1e9+7;
const int MAX = 1e5+9;

int main(void) {
    JadedBeast();
    int n,a;
    ll ans=0;
    cin >> n ;
    vector<int> odd;
    for(int i= 0 ;i<n;i++){
    	cin >> a;
    	if(a&1)
    		odd.push_back(a);
    	else
    		ans+=1ll*a;
    }
    sort(odd.begin(),odd.end(),greater<int>());
    int sz=odd.size();
    if(sz&1)
    	sz--;
    for(int i=0;i<sz;i++)
    	ans+=1ll*odd[i];
    cout <<ans;
}
