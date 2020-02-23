//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/11/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+5;
int main() {
    JadedBeast();
	int n ,t;
	cin >>n >>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	int ans=0,j=0,sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		while(t<sum){
			sum-=a[j];
			j++;
		}
		ans=max(ans,i-j+1);
	}
	cout << ans;
	return 0;
}		

