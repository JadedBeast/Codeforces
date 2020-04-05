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
    int n,a;
    cin >>n;
    int occ[9999];
    memset(occ,0,sizeof(occ));
    for(int i=0;i<n;i++){
        cin >>a;
        occ[a]++;
    }

    int ans=0;
    for(int i=1;i<=9000;i++){

        if(occ[i]>1){
            occ[i+1]+=occ[i]-1;
            ans+=occ[i]-1;
        } 
    }


    cout<<ans;

    return 0;
}
