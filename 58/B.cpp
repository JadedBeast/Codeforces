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

int div(int n){
	int rcn=sqrt(n);
	for(int i=2;i<=rcn;i++){
		if(n%i==0){
			return n/i;
		}
	}
	return 1;
}

int main() {
    JadedBeast();
   	int n;
    cin >>n;
    cout<<n<<" ";
    while(n>1){
    	cout <<(n=div(n))<<" ";
    }
    

	return 0;
}		

