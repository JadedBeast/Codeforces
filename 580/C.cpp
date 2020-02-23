//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 27/10/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e6
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+5;
vector<int> adj[MAX];
int child[MAX],parent[MAX];
int w[MAX],d[MAX];
bool used[MAX];
int n ,m;
void dfspc(int v,int c ){
	if(w[v]==1){
		c++;
	}
	if(c<=m){
		if(w[v]==0)
			c=0;
	}
	d[v]=c;
	used[v] = true;
    for (int u : adj[v]) {
        if (!used[u]){
        	child[v]=u;
        	parent[u]=v;
            dfspc(u,d[v]);
        }
    }	
}

 
void addEdge(int x , int y ){
	adj[x].push_back(y);
	adj[y].push_back(x);
}
int main() {
    JadedBeast();
    memset(child,-1,sizeof(child));
    memset(parent,-1,sizeof(child));
    memset(used,false,sizeof(used));
 	memset(d,-1,sizeof(d));
 	int x,y;
 	cin >> n >>m;

 	for(int i=1;i<=n;i++)
 		cin >> w[i];

 	for(int i=0;i<n-1;i++){
 		cin>>x>>y;
 		addEdge(x,y);
 	}
 	parent[1]=0;
 	d[0]=0;
 	for(int i=1;i<=n;i++)
 		if(!used[i])
 			dfspc(i,d[parent[i]]);

 	int counter=0;
 	for(int i=2;i<=n;i++)
 		if(child[i]==-1 && d[i]<=m)
 			counter++;
 	cout<< counter;
}
