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

int main(void) {
	JadedBeast();
	int  n,a,b,temp,dp[101];
	dp[1]=0;
	cin >> n;
	for(int i=1 ; i<n ;i++){
		cin >> temp;
		dp[i+1]=dp[i]+temp;
	}
	cin >> a >> b;
	cout << dp[b]-dp[a]<<endl;
}
