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
	int n,m,a[101],b[101],v;

	cin >> n >> m;

	for(int i=0 ; i<n ;i++)
		cin >> a[i];
	for(int i=0 ;i<m ;i++)
		cin >> b[i];

	sort(a,a+n);
	sort(b,b+m);

	v=max(2*a[0],a[n-1]);

	if(b[0]<=v)
		cout << -1 <<endl;
	else
		cout << v <<endl;

}
