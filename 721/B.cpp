//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 2/11/2019
 
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
	int n,k;
	string s;
	int arr[101];
	memset(arr,0,sizeof(arr));
	cin >> n >>k;
	for(int i=0;i<n;i++){
		cin>>s;
		arr[s.length()]++;
	}
	cin >> s;
	int len=s.length();
	int tempB=0;
	for(int i=1;i<=len;i++){
		if(i==len)
			tempB++;
		else
			tempB+=arr[i];
	}



	cout<< tempB+5*((tempB-1)/k)<<" ";
	cout<<tempB+arr[len]-1+5*((tempB+arr[len]-2)/k);

	return 0;
}		

