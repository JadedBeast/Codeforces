//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 05/4/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;
pair<int,int> a[MAX];

int main(void) {
	JadedBeast();
	int n,avg;
	long long r,grade=0;
	cin >> n >> r >> avg;
	for(int i=0 ; i<n ; i++){
		cin >> a[i].second >> a[i].first;
		grade+=1ll*a[i].second;
		}
	sort(a,a+n);
	long long counter=1ll*n*avg-grade;
	long long ans=0;
	for(int i=0 ;i<n && counter>0;i++){
		long long x=min(r-1ll*a[i].second,counter);

		ans+=1ll*x*a[i].first;
		counter=counter-x;
	}

	cout <<ans;


}
