//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}


int main(void) {
	JadedBeast();
	string s;
	string a[5];
	cin >> s;
	bool heCan=false;
	for(int i=0 ; i<5; i++){
		cin >> a[i];
		if(a[i][0]==s[0] || a[i][1]==s[1])
			heCan=true;
	}

	if(heCan)
		cout << "YES";
	else
		cout <<"NO";



}
