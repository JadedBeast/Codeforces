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
const int MAX=1e7+1;
int mod=1e9+7;
int dp[MAX][4],n;


int main(void) {
	JadedBeast();
	memset(dp,0,sizeof(dp));
	cin >> n;
	dp[1][0]=1,dp[1][1]=1,dp[1][2]=1;
	int i ,j ,k;
	for(i=2 ;i<=n ;i++)
		for(j=0 ; j<4 ;j++)
			for(k=0 ; k<4 ;k++)
				if(j!=k)
					dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;

	cout <<dp[n][3]<<endl;
}
