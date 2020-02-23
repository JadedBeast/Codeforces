//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 10/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e9
inline void Boost() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	Boost();
	int n,k;
	cin >>n>>k;
	int a[n+1];
	int dp[n+1];
	dp[0]=0;
	for (int i = 1; i <= n; ++i){
		cin >>a[i];
		dp[i]=dp[i-1]+a[i];
	}
	int x=oo,result=1;
	for(int i=1 ;i<=n-k+1 ;i++){

		if(x>dp[i+k-1]-dp[i-1]){
			x=dp[i+k-1]-dp[i-1];
			result=i;
		}
	}

    cout <<result <<endl;

    return 0;
}
