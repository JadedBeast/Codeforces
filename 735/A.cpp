//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 16/11/2019
 
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
const int MAX=2e5+5;
const double pi = 3.14159265358979323846;


int main() {
    JadedBeast();
    //("shit.txt","r",stdin);
    int n,k;
    int inG,inT;
    cin >>n >>k;
    string s;
    cin >>s;
    for(int i=0;s[i];i++){
    	if(s[i]=='T')
    		inT=i;
    	if(s[i]=='G')
    		inG=i;
    }
    if(inT<inG){
    	swap(s[inT],s[inG]);
    	swap(inT,inG);
    }
    int sz=s.length();
    for(int i=inG;i<sz;i+=k){
    	if(s[i]=='#'){
    		cout<<"NO";
    		return 0;
    	}
    	if(s[i]=='T'){
    		cout<<"YES";
    		return 0;
    	}
    	
   	}
   	cout<<"NO";

	return 0;
    	
}		

