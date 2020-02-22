//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 06/01/2020
    
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
int sum(string s,int len){
    int sm=0;
    for(int i=0;i<len;i++)
        sm+=(s[i]-'0');
    return sm;
}
 
int main(void) {
    JadedBeast();
    string s;
    cin >> s;
    if(s.length()==1){
        cout<<0;
        return 0;
    }
    int cnt=0;
    int sm=0;
    bool flag=true;
    while(flag){
        int len=s.length();
        sm=sum(s,len);
        cnt++;
        if(sm>9){
            s=to_string(sm);
        }
        else
            flag=false;
    }  
    cout<< cnt;
    return 0;      
    

}
