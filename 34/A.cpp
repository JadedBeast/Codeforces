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
const int MAX=2e3+1;
int mod=1e9+7;

int main(void) {
	JadedBeast();
	int n,dp[1001],x,y;
	cin >> n ;
	int a[n+1],minSub=1001;
	a[0]=-10000;
	for(int i=1 ; i<=n ;i++){
		cin >> a[i];
		if(abs(a[i]-a[i-1])<minSub){
			minSub=abs(a[i]-a[i-1]);
			x=i-1;
			y=i;
		}
	}
	if(abs(a[n]-a[1])<minSub)
		x=1,y=n;

	printf("%d %d",x,y);
		
}
