//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 05/4/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;
int counter[MAX];
long long dp[MAX];
int main(void) {
	JadedBeast();
	int n,a,ans=-1;
	cin >> n;
	memset(counter,0,sizeof(counter));
	for(int i=0 ; i<n; i++){
		cin >>a;
		counter[a]++;
		ans=max(ans,a); 
	}
	dp[0]=0;
	dp[1]=counter[1];
	for(int i=2;i<=ans ; i++){
		dp[i]=max(dp[i-1],dp[i-2]+1LL*counter[i]*i);
	}

	cout << dp[ans];

}
