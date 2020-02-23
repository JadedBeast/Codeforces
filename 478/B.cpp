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
const int MAX=1e4+5;
const double pi = 3.14159265358979323846;

int main() {
    JadedBeast();
    ll n,m,x;
    cin >> n >> m;
    x=n-m;
    ll kmax=(x*(x+1))/2;
    x=n/m-1;
    ll kmin;
    if(n%m==0)
    	kmin=m*(x*(x+1))/2;
    else{
    	ll c=n/m;
    	ll y=n-c*m;
    	kmin=y*(c*(c+1))/2;
    	c--;
    	x=m-y;
    	kmin+=x*(c*(c+1))/2;
    }

    cout<< min(kmin,kmax) <<" "<<max(kmin,kmax);




	return 0;
    	
}		

