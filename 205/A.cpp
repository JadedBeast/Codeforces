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
const int MAX=2e3+1;
int mod=1e9+7;

int main(void) {
	JadedBeast();
	int n,a;
	scanf("%d",&n) ;
	vector < pair<int,int> > v;
	for(int i=1 ; i<=n ;i++){
		scanf("%d",&a);
		v.push_back(make_pair(a,i));
	}

	sort(v.begin(),v.end());
	if(v[0].first==v[1].first)
		printf("Still Rozdil");
	else
		printf("%d",v[0].second);
	
}
