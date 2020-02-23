//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 11/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;
int DP[151][151];
inline void Boost() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int dp(int a ,int b){
	if(a<=0 || b<=0 || (a==1 && b==1))
		return 0;
	if(DP[a][b]!=-1)
		return DP[a][b];

	return DP[a][b]=1+max(dp(a+1,b-2),dp(a-2,b+1));

}


int main() {
    Boost();
    int a1,a2;
    cin >>a1 >> a2;
 	memset(DP,-1,sizeof(DP));
	cout << dp(a1,a2)<<endl;    
    return 0;
}
