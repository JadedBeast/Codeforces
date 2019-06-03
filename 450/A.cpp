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
const int MAX=1e5+1;
int mod=1e9+7;


int main(void) {
	JadedBeast();
	int n,m,a,x,mmax=0;

	cin >> n >> m ;
	int last=n;
	for(int i=1 ; i<=n ; i++){
		cin >> a;
		x=(a+m-1)/m;
		if(x>1 && x>=mmax ){
			last=i;
			mmax=x;
		}
	}

	cout <<last <<endl;
}
