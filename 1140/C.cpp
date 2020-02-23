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

const int MAX=2e3+1;
int mod=1e9+7;

int main(void) {
	//JadedBeast();
	int n,k;

	scanf("%d %d",&n,&k);
	pair<int,int> v[n];

	for(int i=0 ; i<n ;i++)
		scanf("%d %d",&v[i].second,&v[i].first);
		
	

	sort(v,v+n);
	long long ans=0 , sum=0;
	set<pair<int,int>> s;

	for(int i=n-1 ; i>=0 ; i--){
		s.insert(make_pair(v[i].second,i));
		sum+=v[i].second;
		if((int)s.size()>k){
			int x=(*s.begin()).first;
			sum-=x;
			s.erase(s.begin());
		}
		ans=max(ans,v[i].first*sum);


	}

	printf("%I64d",ans);

}
