//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 22/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;


int main() {
	JadedBeast();
	int n;
	cin >> n;
	if(n%2!=0)
		cout << -1;
	else{
		for(int i=1 ; i<=n ; i++)
			if(i%2 !=0)
				cout<<i+1<<" ";
			else
				cout << i-1 << " ";


	}

    return 0;
}



