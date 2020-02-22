//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 08/4/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e15
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e5+1;
int xc[4]={1,0,0,-1};
int yc[4]={0,1,-1,0};

vector<pair<int,int>> adj[MAX];
//bool used[MAX*MAX];
long long d[MAX];
int parent[MAX];


void dijkstra(int s){
	d[s]=0;
   	set<pair<long long, int>> q;
   	q.insert({0, s});

    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());
        for (auto edge : adj[v]) {
            long long len = 1ll*edge.second;
            int to=edge.first;
            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                parent[to]=v;
                q.insert({d[to], to});
            	}
        	}
    	}
}

void addEdge(int x , int y ,int w ){
	adj[x].push_back({y,w});
	adj[y].push_back({x,w});
}

int main() {
    //JadedBeast();

    int n,m,a,b,w;
    memset(parent,-1,sizeof(parent));
    fill(d+1,d+MAX,oo);

    scanf("%d %d",&n,&m);

    for(int i=0 ; i<m ;i++){
    		scanf("%d %d %d",&a,&b,&w);
    		addEdge(a,b,w);
    	}
 	
    dijkstra(1);

    if(d[n]==oo)
    	printf("-1");
    else{
    	vector <int> v;
    	for(int i=n ; parent[i]!=-1; i=parent[i] )
    		v.push_back(i);
    	v.push_back(1);
    	reverse(v.begin(),v.end());
    	for(int x : v)
    		printf("%d ",x);
    }



    return 0;
    
}
