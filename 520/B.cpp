//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 11/11/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e17
#define ll long long 
#define pi pair<int,int>
#define mp make_pair
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
#define debugg(x) cout<<"-----Mayday Mayday : "<<(x)<<endl;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =2e5+5;
const int MAXN =2e4+5;

int main() {
    JadedBeast();
    int n,m;
    int counter=0;
    cin >>n >>m;
    while(n!=m){
    	if(m<n){
    		counter+=n-m;
    		break;
    	}
    	else{
    		if(m&1)
    			m++;
    		else
    			m/=2;
    		counter++;
    	}
    }
    cout <<counter;
    return 0;
}
