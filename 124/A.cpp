//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 24/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}


int main(void) {
	JadedBeast();
	int n,a,b,counter=0;

	cin >> n >> a >> b;
	for(int i=1 ; i<=n ; i++){
		if(a<i && n-b<=i){
			counter++;
		}
	}
	cout << counter<<endl;
}
