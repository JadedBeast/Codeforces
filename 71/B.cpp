//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/01/2020
    
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
const int mod = 1e9+7;
const int MAX = 1e6+9;

 
int main(void) {
    JadedBeast();
    int n,k,t;
    cin >> n >> k >>t;
    int rep=(n*k*t)/100;

    for(int i=0;i<rep/k;i++)
        cout << k<<" ";

    n-=rep/k;
    for(int i=0;i<n;i++){
        if(i==0)
            cout<<rep%k<<" ";
        else
            cout<<"0 ";
    }


    return 0;      

}
