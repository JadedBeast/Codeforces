//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 23/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;
int mod=1e9+7;
int dp[MAX],i,n,m,a,x;
long long vasya=0,petya=0;

int main(void) {
	JadedBeast();

	cin >> n;
	for(i=1 ; i<=n ; i++){
		cin >> a;
		dp[a]=i;
	}
	cin >> m;
	while(m--){
		cin >> a;
		x=dp[a];
		vasya+=x;
		petya+=n-x+1;
	}
	cout << vasya << " "<<petya <<endl;
}
