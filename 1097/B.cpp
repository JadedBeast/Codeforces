//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 08/11/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
#define debugg(x) cout<<"-----Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e6+1;
int a[20],n;
int dp(int i,int sum){
	if(i>=n)
		return 0;
	if(i==n-1 && abs(sum)%360==0 )
		return 1;
	if(i<n-1)
		return (dp(i+1,sum+a[i+1]) | dp(i+1,sum-a[i+1]));
	return 0;
}
int main() {
    JadedBeast();
    cin >>n;
    for(int i=0;i<n;i++)
    	cin >>a[i];

    if(dp(0,a[0]) || dp(0,-a[0]))
    	cout<<"YES";
    else
    	cout<<"NO";


    return 0;
        
}
