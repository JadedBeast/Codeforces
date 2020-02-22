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
double time(double dp,double vp, double vd){
    return dp/(vd-vp);
}
 
int main(void) {
    JadedBeast();
    double vp,vd,t,f,c,dp;
    cin >> vp >>vd >> t >>f >>c ;
    dp=t*vp;
    int bijoux=0;
    double intersection;
    if(vp>=vd){
        cout<<0;
        return 0;
    }
    while(dp<c){
        intersection=time(dp,vp,vd);
        if(intersection*vp+dp<c){
            bijoux++;
        }
        dp+=(f+2*intersection)*vp;

    }
    cout <<bijoux;
       


    return 0;      
}
