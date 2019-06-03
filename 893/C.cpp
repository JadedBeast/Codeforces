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
long long sum=0,minWeight;
int n,m,x,y;
vector <int> v[MAX];
bool used[MAX];
long long a[MAX];


void addEdge(int x , int y){
	v[x].push_back(y);
	v[y].push_back(x);
}
void dfs(int s){
	used[s]=true;
	for( int x : v[s]){
		if(!used[x]){
			minWeight=min(minWeight,a[x]);
			dfs(x);
		}
	}
}
int main() {
	JadedBeast();
	memset(used,false,sizeof(used));

	cin >> n >> m;

	for(int i=1 ; i<=n ;i++)
		cin >> a[i];
	
	for(int i=0 ; i<m ;i++){
		cin >>x >> y;
		addEdge(x,y);
	}

	for(int i=1 ; i<=n ; i++)
		if(!used[i]){
			minWeight=a[i];
			dfs(i);
			sum+=minWeight;
		}


	cout <<sum<<endl;

    return 0;
}
