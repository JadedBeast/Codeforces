//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 07/4/2019
	
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const long long MAX=3e3+1;
ll dp(ll a, ll b){
	if(a==0 or b==0)
		return 0;
	if(b>a)
		return dp(b,a);
	else
		return a/b+dp(a%b,b);
}
int main(void) {
	JadedBeast();
	ll a,b;
	cin >> a >> b;
	cout << dp(a,b);

}
