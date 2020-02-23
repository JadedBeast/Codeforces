//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 3/11/2019
 
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
	string s;
	int occ[26];
	int counterOdd=0;
	memset(occ,0,sizeof(occ));
	cin >> s;
	for(char x : s)
		occ[x-'a']++;
	for(int i=0;i<26;i++){
		if(occ[i]&1)
			counterOdd++;
	}
//gevqgtaorjixsxnbcoybr
	if(counterOdd <=1 || counterOdd&1)
		cout<<"First";
	else{
		cout<<"Second";
	}
	return 0;
}		

