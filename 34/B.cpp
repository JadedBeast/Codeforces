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
	int n,m,sum=0,a[101];
	cin >> n >> m;

	for(int i=0 ; i<n ;i++)
		cin >> a[i];

	sort(a,a+n);
	for(int i=0 ; i<m && a[i]<0;i++)
		sum+=a[i];

	cout << -sum <<endl;

}
