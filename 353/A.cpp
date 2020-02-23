//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 30/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}


int main(void) {
	JadedBeast();
	int n,x,y,row1=0,row2=0,noSwitch=0;
	cin >> n;
	int t=n;
	while(t--){
		cin >> x >> y ;
		row1+=x;
		row2+=y;
		if((x&1)!=(y&1))
			noSwitch++;
	}

	if(!(row1&1) and !(row2&1))
		cout << 0;
	else if((row1&1 and row2&1) and (noSwitch==0 || n==1) )
		cout << -1;
	else if((row1&1)!=(row2&1))
		cout <<-1;
	else
		cout << 1 ;


}
