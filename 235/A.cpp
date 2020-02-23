//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 27/10/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e6
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+5;
int main() {
    JadedBeast();
    JadedBeast();
	int n;
	cin >> n;
	if(n==1 || n==2)
		cout<<n;
	else if(n==3)
		cout <<6;
	else if(n&1)
		cout << 1LL*n*(n-1)*(n-2);
	else if(n%3==0)
		cout << 1LL*(n-1)*(n-2)*(n-3);
	else
		cout << 1LL*n*(n-1)*(n-3);
}

