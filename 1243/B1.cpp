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
const int MAX=2e3+5;
const double pi = 3.14159265358979323846;

int main() {
    JadedBeast();
   	int k,n;
   	string s,t;
   	cin >>k ;

   	while(k--){
   		int count=0;
   		vector <int> v;
   		cin >> n;
   		cin >> s >> t;
   		for(int i=0;i<n;i++){
   			if(s[i]!=t[i]){
   				count++;
   				v.push_back(i);
   			}
   			
   		}
   		if(count!=2)
   			cout<<"NO"<<endl;
   		else{
   			if(s[v[1]]==s[v[0]] && t[v[1]]==t[v[0]])
   				cout<<"YES"<<endl;
   			else
   				cout<<"NO"<<endl;
   		}

   	}


	return 0;
}		

