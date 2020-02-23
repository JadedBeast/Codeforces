//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 07/11/2019
 
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
const int MAX=2e3+5;
const double pi = 3.14159265358979323846;

int main() {
    JadedBeast();
   	ll n;

   	cin >>n ;

   	ll rcn=sqrt(n);
   	

   	vector <ll> v;
   	for(ll i=2;i<=rcn;i++){
   		if(n%i==0){
   			if(n/i==i)
   				v.push_back(i);
   			else{
   				v.push_back(n/i);
   				v.push_back(i);
   			}
   		}
   	}
   	ll ans;
   	if(v.size()==0){
   		cout<<n;
   	}
   	else{
   		ans=v[0];
   		for(ll x : v){
   			ans=__gcd(x,ans);
   		}
   		cout<<ans;
   	}

	return 0;
}		

