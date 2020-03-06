//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 06/03/2020
    
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
const int MAX = 1e6+9;

 
int main(void) {
    JadedBeast();
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    bool flag=true;

    for(int i=0;i<n;i++){
        if(a[i]&1 && flag){
            flag=false;
        }
        else if(a[i]&1 && !flag){
            flag=true;
        }
        else if(a[i]==0 && !flag){
            break;
        }

    }

    cout<<(flag?"YES":"NO");
    return 0;      
}
