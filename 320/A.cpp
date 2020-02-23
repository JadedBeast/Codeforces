//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 23/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=2e3+1;
int mod=1e9+7;

int main(void) {
	JadedBeast();
	string n;
	bool funny=true;
	cin >> n;	
	int l=n.length();
	for(int i=0 ; i<l ; i++){
		if(n[i]!='1' && n[i]!='4'){
				funny=false;
				break;
			}
		if(i+2<l)	
			if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4'){
				i+=2;
				continue;
			}
		if(i+1<l)
			if(n[i]=='1' && n[i+1]=='4'){
				i++;
				continue;
			}
		if(n[i]=='1')
			continue;
		if(n[i]=='4'){
			funny=false;
			break;
		}

	}
	
	cout << (funny?"YES":"NO")	<<endl;
	
}
