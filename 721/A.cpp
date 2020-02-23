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
    int n;cin >>n;
    string s; cin >>s;
    int k=0,counter=0;
    vector<int> v;
    for(int i=0;s[i];i++){
        if(s[i]=='B'){
            k++;
            counter=0;
            while(s[i]=='B' && i<n){
                counter++;
                i++;
            }
            v.push_back(counter);
        }
    }
    cout<<k<<endl;
    for(int x: v)
        cout<<x<<" ";
 
    return 0;      
}
