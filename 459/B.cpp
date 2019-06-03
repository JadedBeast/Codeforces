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
const int MAX=2e5+1;
int a[MAX];
int main(void) {
	JadedBeast();
	int n;

	cin >> n;


	for(int i=0; i<n ; i++)
		cin >>a[i];

	sort(a,a+n);

	int maxSum=a[n-1]-a[0],counterMin=0,counterMax=0;

	for(int i=0; i<n ; i++){
		if(a[i]==a[0])
			counterMin++;
		if(a[n-i-1]==a[n-1])
			counterMax++;
	}
	if(a[0]==a[n-1])
		cout << maxSum << " " <<1ll*(counterMax-1)*counterMax/2;
	else
		cout << maxSum<< " "<< 1ll*counterMin*counterMax;

}
