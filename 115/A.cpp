//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/11/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=2e3+5;
int ans=0;
vector<int> adj[MAX];
bool used[MAX];
int d[MAX];
void bfs(int s){
    memset(used,false,sizeof(used));
    memset(d,0,sizeof(d));
    used[s]=true;
    queue <int> q;
    q.push(s);

    while(!q.empty()){
        s=q.front();
        q.pop();
        for(auto x : adj[s])
            if(!used[x]){
                q.push(x);
                used[x]=true;
                d[x]=d[s]+1;
                ans=max(ans,d[x]);
            }
    }
}
void addEdge(int x, int y){
	adj[x].push_back(y);
}

int main() {
    JadedBeast();
	int n,a ;
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >> a;
		if(a!=-1)
			addEdge(a,i);
	}
	for(int i=1;i<=n;i++)
		bfs(i);
 	cout<<ans+1;
	return 0;
}		

