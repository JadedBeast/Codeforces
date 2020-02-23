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
    int n;
    cin >>n;
    string t=to_string(n);
    bool occ[10];
    memset(occ,false,sizeof(occ));
    for(int i=0;t[i];i++)
        occ[t[i]-'0']=true;
    int rcn= sqrt(n);
    int ans=0;
    for(int i=1;i<=rcn;i++){
        if(n%i==0){
            int tmp=n/i;
            string s=to_string(i);
            for(int j=0;s[j];j++)
                if(occ[s[j]-'0']){
                    ans++;
                    break;
                }
            if(tmp!=i){
                s=to_string(tmp);
                for(int j=0;s[j];j++)
                    if(occ[s[j]-'0']){
                        ans++;
                        break;
                    }
            }

        }
    }
    cout<<ans;
}
