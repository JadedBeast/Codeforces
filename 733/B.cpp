//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/04/2020
    
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
    cin >> n;
    int l[n],r[n],lSum=0,rSum=0;
    for(int i =0 ;i<n;i++){
        cin >> l[i]>>r[i];
        lSum+=l[i];
        rSum+=r[i];
    }
    int ans=abs(lSum-rSum),index=0;
    for(int i=0;i<n;i++){
        int x=abs(lSum-l[i]+r[i]-(rSum-r[i]+l[i]));
        if(ans<x){
            index=i+1;
            ans=x;
        }
    }
    cout <<index;
    return 0;
}
