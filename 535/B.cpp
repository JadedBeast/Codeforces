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
const int MAX=1e9;
vector <int> v;
void generate(ll n){
    if(n>MAX)
        return ;
    v.push_back(n);
    generate(n*10+4);
    generate(n*10+7);

}

int main(void) {
    JadedBeast();
    int n;
    cin >>n;
    generate(0);
    sort(v.begin(),v.end());
    cout<<distance(v.begin(),find(v.begin(),v.end(),n))<<endl;
    return 0;      
}
