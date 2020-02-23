//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 19/01/2020
    
*/
 
#include <bits/stdc++.h>
 
using namespace std;

#define endl "\n"
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
#define debugg(x) cout<<"----Mayday Mayday : "<<x<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MOD = 1e9+7;
const int MAX = 1e5+9;
vector<int> adj[MAX];
bool used[MAX];
map<pair<int,int>,int> weight;
void addEdge(int x , int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}
int main(void) {
    JadedBeast();
    int n,m,k;
    int u,v,l;
    memset(used,false,sizeof(used));
    cin >> n >>m >>k;
    for(int i=0;i<m;i++){
    	cin >> u >> v >>l;
    	addEdge(u,v);
    	if(weight.find({u,v})==weight.end()){
    		weight.insert({{u,v},l});
    		weight.insert({{v,u},l});
    	}
    	else{
    		int temp=weight[{u,v}];
    		weight[{u,v}]=min(l,temp);
    		weight[{v,u}]=min(l,temp);
    	}

    }
    for(int i=0;i<k;i++){
    	cin >> u;
    	used[u]=true;
    }
    int ans=2e9;
	for(int u=1;u<=n;u++){
		if(used[u]){
			for(int v: adj[u]){
				if(!used[v]){
					ans=min(weight[{u,v}],ans);
				}
			}
		}  	
	}
	if(ans==2e9)
		cout<<"-1";
	else
		cout<<ans;

}
