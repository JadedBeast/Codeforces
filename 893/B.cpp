//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 20/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int cal(int k){
	return (pow(2,k)-1)*pow(2,k-1);
}
int main() {
	JadedBeast();
	int n,ans,k=1;

	cin >> n ;
	ans=cal(k);
	while(ans <n){
		k++;
		int x=cal(k);
		if(x>n)
			break;
		if(n%x==0)
			ans=x;
	}
	cout << ans;

    return 0;
}
