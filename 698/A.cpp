//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 13/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;
#define true 1
#define false 0
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
int a[101],DP[101][2][2],n;
int dp(int i,int contest, int gym){
	if(i>=n)
		return 0;
	if(DP[i][contest][gym]!=-1)
		return DP[i][contest][gym];
	if(a[i]==0)
		return DP[i][contest][gym]=dp(i+1,false,false);
	if(a[i]==1 && !contest )
		return DP[i][contest][gym]=1+dp(i+1,true,false);
	if(a[i]==2 && !gym)
		return DP[i][contest][gym]=1+dp(i+1,false,true);
	if(a[i]==3 && !contest && !gym)
		return DP[i][contest][gym]=1+max(dp(i+1,true,false),dp(i+1,false,true));
	if(a[i]==3 && contest && !gym)
		return DP[i][contest][gym]=1+dp(i+1,false,true);
	if(a[i]==3 && !contest && gym)
		return DP[i][contest][gym]=1+dp(i+1,true,false);
	return DP[i][contest][gym]=dp(i+1,false,false);
}


int main() {
    JadedBeast();
    cin >>n;
    for(int i=0 ;i<n ;i++)
    	cin >> a[i];
    memset(DP,-1,sizeof(DP));
    cout << n-dp(0,false,false)<<endl;
 

    return 0;
}
