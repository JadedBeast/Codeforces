//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 16/11/2019
    
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
    int n,a;cin >>n;
    set<int> s;
    int occ[101]={0};
    for(int i=0;i<n;i++){
        cin >>a;
        s.insert(a);
        occ[a]++;
    }
    if(s.size()!=2)
        cout<<"NO";
    else{
        int x=*s.begin();
        int y=*(--s.end());
        if(occ[x]==occ[y]){
            cout<<"YES"<<endl;
            for(int x : s)
                cout <<x<<" ";
        }
        else
            cout<<"NO";
    }
    return 0;      
}
