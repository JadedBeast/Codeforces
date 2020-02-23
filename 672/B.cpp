//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 08/11/2019

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
const int MAX =1e5+1;


int main() {
    JadedBeast();
    int n;
    string s;
    cin >>n;
    if(n>26){
    	puts("-1");
    	return 0;
    }
    int occ[26];
    memset(occ,0,sizeof(occ));
   
    cin >> s;

    for(int i=0;i<n;i++)
    	occ[s[i]-'a']++;
    
    int ans=0;
    for(int i=0;i<26;i++){
    	if(occ[i])
    		ans+=occ[i]-1;
    }	
    cout <<ans;

    return 0;
        
}
