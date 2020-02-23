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
const int mod = 1e9+7;
const int MAX = 1e6+9;

int main(void) {
    JadedBeast();
    int n,a;
    int x=0b11101011;
    int y=~x;

    cin >>n;
    while(n--){
    	cin >> a;
    	if(a>1){
    		if(!(a&1)){
    			x=~x;
    		}
    	}
    	if(x==y)
    		cout<<"1"<<endl;
    	else
    		cout<<"2"<<endl;
    }

   	

}
