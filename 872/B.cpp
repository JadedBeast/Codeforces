//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 27/10/2019
	
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long 
const int MAX = 1e5+5;
inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

 
int main(void) {
	JadedBeast();
	int n,k,maxi=INT_MIN ,mini=INT_MAX;
	cin >> n >>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		maxi=max(maxi,arr[i]);
		mini=min(mini,arr[i]);
	}
	if(k==1)
		cout<<mini;
	else if(k==2)
		cout<<max(arr[0],arr[n-1]);
	else
		cout <<maxi;
 
 
 
 	return 0;
}
