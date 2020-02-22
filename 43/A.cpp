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

int fib[100];
set <int> s;

int main(void) {
	JadedBeast();
	int n,sum,x=5;
	cin >> n;
	string a[n];
	for(int i=0 ; i<n ; i++)
		cin >> a[i];

	sort(a,a+n);
	sum=1;
	for(int i=0 ; i<n-1 ;i++){
		if(a[i]==a[i+1])
			sum++;
		else{
			x=sum;
			sum=1;
			}
		}
		if(x>sum)
			cout << a[0]<<endl;
		else
			cout << a[n-1]<<endl;
}
