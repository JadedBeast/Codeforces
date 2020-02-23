//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 07/01/2020
    
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
ll gcd(ll a , ll b){
	return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b){
	return b*(a/gcd(a,b));
}
bool naenae(ll a ,ll b){
	if(a%b!=0)
		return false;
	ll num= a/b;
	while(num%2==0){
		num/=2;
	}
	while(num%3==0){
		num/=3;
	}
	if(num==1)
		return true;

	return false;
}
int main(void) {
    JadedBeast();
    int n,m,teams=0;
    cin >> n >>m;
    int x=min(n/2,m);
   	for(int i=0;i<=n;i++){
   		teams=max(teams,i+min(m-2*i,(n-i)/2));
   	}


    cout<<teams; 
   	

}
