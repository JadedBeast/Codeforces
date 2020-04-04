//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 04/04/2020
    
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
    string s;
    cin >>s;
    int sz=s.length();
    if(sz==1)
        if(s=="4" || s=="8" || s=="0")
            cout<<"4";
        else
            cout << "0";
    else{
        int n=(s[sz-2]-'0')*10+(s[sz-1]-'0');
        if(n%4==0)
            cout <<"4";
        else 
            cout<<"0";
    }
    return 0;
}
