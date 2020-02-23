//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 20/01/2020                 BLESSED
    
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

int main(void) {
    JadedBeast();
    int n;
    cin >> n;
    char mat[n][n];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin >>mat[i][j];
    unsigned char c=mat[0][0];
    unsigned char cc=mat[0][1];
    if(c==cc){
    	cout<<"NO";
    	return 0;
    }
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++){
    		if(i==j || i==n-j-1){
    			if(c!=mat[i][j]){
    				cout<<"NO";
    				return 0;
    			}
    		}		
    		else{
    			if(cc!=mat[i][j]){
    				cout<<"NO";
    				return 0;
    			}
    		}
    	}
    cout<<"YES";
}
