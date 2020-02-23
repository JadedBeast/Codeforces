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
const int MAX=1e5+1;





int main() {
	JadedBeast();
	int n, u;
	double ans=-1;
	cin >> n >> u;
	int E[n];

	for(int i=0 ;i<n ;i++)
		cin >> E[i];

	int i=0,j=1,k=2;
	bool flag =false;
	while(i<j && j<k && k<n){
		while(E[k]-E[i]<u && k<n)
			k++;
		if(((E[k]-E[i]>u) && j+1<k ) || k>=n)
			k--;
		double x=(double)(E[k]-E[j])/(E[k]-E[i]);
		if(E[k]-E[i]<=u && i<j && j<k && k<n ){
			flag=true;
			ans=max(x,ans);
		}
		i++,j++;
		if(j==k)
			k++;
	}
	cout.precision(22);
	cout <<ans;
    return 0;
}
