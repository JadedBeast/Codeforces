//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 04/01/2020
    
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
    int n,m;
    cin >>n >>m;
    string s,t;
    map<string,string> ab;
    map<string,int> alen,blen;
    for(int i=0;i<m;i++){
        cin >> s>>t;
        ab.insert(make_pair(s,t));
        alen.insert(make_pair(s,(int)s.length()));
        blen.insert(make_pair(t,(int)t.length()));
    }
    for(int i=0;i<n;i++){
        cin >>s;
        if(alen[s]>blen[ab[s]])
            cout<<ab[s]<<" ";
        else
            cout<<s<<" ";
    }
       


    return 0;      
}
