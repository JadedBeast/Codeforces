//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 18/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	JadedBeast();
	long long n,p,q,r;

	cin >> n >> p >> q >> r;
	long long a[n],dp[n][3];
	for(int i=0; i<n ;i++)
		cin >>a[i];
	dp[0][0]=a[0]*p;
	dp[0][1]=a[0]*(p+q);
	dp[0][2]=a[0]*(p+q+r);
	for(int i=1; i<n ;i++){
		dp[i][0]=max(dp[i-1][0],a[i]*p);
		dp[i][1]=max(dp[i-1][1],dp[i][0]+a[i]*q);
		dp[i][2]=max(dp[i-1][2],dp[i][1]+a[i]*r);
	}

	cout << dp[n-1][2]<<endl;
    return 0;
}
