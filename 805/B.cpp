//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 08/03/2020
    
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
#define debugg(x) cout<<"----Mayday Mayday : "<<x<<endl;
#define debuggg(x) cout<<"****Mayday Mayday : "<<x<<endl; 
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


 
int main(void) {
    JadedBeast();
    int n;
    int m=2e5+5;
    string s;
    cin >>n;
    for(int i=0;i<m/4;i++)
        s+="bbaa";
    for(int i=0;i<n;i++)
        cout<<s[i];
    return 0;      
}
