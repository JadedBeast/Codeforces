//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/11/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=2e3+5;
const double pi = 3.14159265358979323846;

int main() {
    JadedBeast();
    cout.precision(10);
   	int n;
    cin >>n;
    double r[n];
    for(int i=0;i<n;i++)
    	cin >>r[i];
    sort(r,r+n);
    double ans=0;
    int j=0;
    for(int i=n-1;i>=0;i--){
    	ans +=pi*r[i]*r[i]*pow(-1,j++);
    }
    cout <<ans;


	return 0;
}		

