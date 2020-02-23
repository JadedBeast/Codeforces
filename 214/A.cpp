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
	int n,m,a,b,counter=0;

	cin >> n >> m;

	for(a=0 ; a<=sqrt(n) ;a++){
		b=n-a*a;
		if(a+b*b==m)
			counter++;
	}

	cout << counter<<endl;

	

}
