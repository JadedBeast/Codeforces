//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 12/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
inline void Boost() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main() {
    Boost();
    int n;
    cin >> n;
    int dp[n],values[n],m=1;
    for (int i = 0; i < n; i++)
    	cin >> values[i],dp[i]=1;
    

    for (int i = 1; i < n; i++)
    	if(values[i]>=values[i-1]){
    		dp[i]=dp[i-1]+1;
    		m=max(m,dp[i]);
    	}

    
    cout<<m<<endl;

    return 0;
}
