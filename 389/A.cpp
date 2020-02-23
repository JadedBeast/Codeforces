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

inline int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void) {
    JadedBeast();
    int n;cin >>n;
    int a[n];
    int ans=0;
    for(int i=0;i<n;i++){
      cin >> a[i];
      ans=gcd(ans,a[i]);
    }
    cout<<n*ans;
    
    return 0;      
}
