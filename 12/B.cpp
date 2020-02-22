//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 04/01/2020
    
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
    string s,t;
	cin >> s>>t;
	int occ[10];
	memset(occ,0,sizeof(occ));
	for(int i=0;s[i];i++){
		occ[s[i]-'0']++;
	}
	string ans;
	for(int i=1;i<10;i++)
		if(occ[i]){
			ans+=char(i+'0');
			occ[i]--;
			break;
		}
	while(occ[0]--)
		ans+=char('0');
	for(int i=1;i<10;i++)
		while(occ[i]--){
			ans+=char('0'+i);
		}
	if(ans==t)
		cout<<"OK";
	else
		cout<<"WRONG_ANSWER";
}
