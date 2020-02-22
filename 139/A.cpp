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
	int n,dp[8];

	cin >> n ;
	for(int i=1 ; i<=7 ;i++)
		cin >> dp[i];

	while(n>0){
		for(int i=1 ; i<=7 ;i++){
			n-=dp[i];
			if(n<=0){
				cout << i << endl;
				break;
			}
		}
	}
}
