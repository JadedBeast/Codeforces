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
    int n,m,l,r;
    cin >> n ;
    int cl[n],cr[n];
    for(int i=0;i<n;i++){
    	cin >> cl[i] >> cr[i];
    }
    cin >> m ;
    int pl[m],pr[m];
    for(int i=0;i<m;i++){
    	cin >> pl[i] >> pr[i];
    }
    int r1=*min_element(cr,cr+n);
    int l2=*max_element(pl,pl+m);

    int x=l2-r1;

    int r2=*min_element(pr,pr+m);
    int l1=*max_element(cl,cl+n);  
    int y=l1-r2;

    if(y>=0 || x>=0)
    	cout<<max(x,y);
    else
    	cout<<"0";
	return 0;
    	
}		

