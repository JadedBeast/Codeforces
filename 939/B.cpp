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
    ll n ,a,mini=1e18+18,r=1e18+18;
    int k,index;

    cin >> n >>k;
    for(int i=0;i<k;i++){
    	cin >> a;
    	long long x=n%a;
    	if(r>x){
    		r=x;
    		mini=a;
    		index=i;
    	}

    }

    cout<<++index<<" "<<n/mini;
}
