//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 26/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;

int main(void) {
	JadedBeast();
	string s;

	cin >> s;
	int n=s.length(),counter=0;
	for(int i=0; i<n/2 ; i++){
		if(s[i]!=s[n-i-1])
			counter++;
	}

	cout << ((counter==1 || (counter==0 && n%2!=0) )?"YES":"NO")<<endl;
}
