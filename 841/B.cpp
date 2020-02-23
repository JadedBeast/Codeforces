//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 07/11/2019
 
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
const int MAX=1e4+5;
const double pi = 3.14159265358979323846;

int main() {
    JadedBeast();
    int n,a;
    cin >>n;
    for(int i=0;i<n;i++){
    	cin >> a;
    	if(a&1){
    		cout<<"First";
    		return 0;
    	}
    }
    cout<<"Second";
	return 0;
}		

