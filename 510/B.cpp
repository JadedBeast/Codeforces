//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/11/2019

*/

#include <bits/stdc++.h>
using namespace std;
#define  ll long long
const ll mod= 1e9+7;
const int MAX=50*50+5;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n ,m;
int ranks[MAX], parent[MAX];
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    ranks[v] = 0;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ranks[a] < ranks[b])
            swap(a, b);
        parent[b] = a;
        if (ranks[a] == ranks[b])
            ranks[a]++;
    }
}
int hashing(int i ,int j){
	return i*m+j;
}
int xc[2]={1,0};
int yc[]={0,1};
int main() {
    JadedBeast();

    cin >>n >>m;
    char mat[n][m];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++){
    		cin >> mat[i][j];
    		make_set(hashing(i,j));
    	}
	    	
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++){	
    		for(int k=0;k<2;k++)
    			if(i+xc[k]>=0 && i+xc[k]<n && j+yc[k]>=0 && j+yc[k]<m){
    				if(mat[i][j]==mat[i+xc[k]][j+yc[k]]){
    					if(find_set(hashing(i,j))==find_set(hashing(i+xc[k],j+yc[k]))){
    						cout<<"Yes";
    						return 0;
    					}else
    						union_sets(hashing(i,j),hashing(i+xc[k],j+yc[k]));
    					}
    			}				
    	}
    cout<<"No";
    return 0;
}
