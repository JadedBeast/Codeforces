//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 09/11/2019
 
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
const int MAX=2e5+5;
const double pi = 3.14159265358979323846;


int main() {
    JadedBeast();
    int n,k;
    cin >>n >>k;
    int a[n];
    for(int i=0;i<n;i++)
    	cin >> a[i];

    if(k==1)
    	cout<<*min_element(a,a+n);
    else if(k==2)
    	cout<<max(a[0],a[n-1]);
    else
    	cout<< *max_element(a,a+n);
	return 0;
    	
}		

