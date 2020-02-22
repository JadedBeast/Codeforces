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
	int k,a[12];

	cin >> k;

	for(int i=0; i<12 ; i++)
		cin >> a[i];
	sort(a,a+12,greater<int>());
	int counter=0,i=0;
	while(k>0 && i<12){
		k-=a[i];
		i++;
		counter++;
	}
	cout <<((i==12 && k>0)?-1:counter) <<endl;
	
}
