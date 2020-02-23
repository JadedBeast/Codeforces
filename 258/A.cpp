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
#define debugg(x) cout<<"-----Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e6+1;

int main() {
    JadedBeast();
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;s[i];i++)
    	if(s[i]=='0'){
    		ans=i;
    		break;
    	}

    for(int i=0;s[i] ;i++){
    	if(i!=ans)
    		cout<<s[i];
    }

    return 0;
    	
        
}
