//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 16/11/2019
    
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
#define debugg(x) cout<<"----Mayday Mayday : "<<x<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int mod = 1e9+7;
const int MAX = 1e6+9;


 
int main(void) {
    JadedBeast();
    int n,m;cin >>n >>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    sort(a,a+n);
    ll dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=n;i++)
        dp[i]+=1ll*a[i-1]+dp[i-1];
    for(int i=m+1;i<=n;i++){
       
        dp[i]=dp[i]+dp[i-m];
    }

    for(int k=1;k<=n;k++)
        cout<<dp[k]<<" ";
       


    return 0;      
}
