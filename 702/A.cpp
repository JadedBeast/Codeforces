//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 9/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}



int main(void){
    JadedBeast();
    int n,m=1;
    cin >> n;
    int T[n],dp[n];
    for (int i=0 ; i<n ; i++){
        cin >>T[i];
        dp[i]=1;
    }

    for (int i=1 ; i<n ; i++)
        if(T[i]>T[i-1]){
            dp[i]=dp[i-1]+1;
            m=max(dp[i],m);
       }
    cout << m<<endl;
   return 0;
}
