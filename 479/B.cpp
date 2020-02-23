//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 08/11/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
#define debugg(x) cout<<"-----Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e6+1;

int main() {
    JadedBeast();
    //this problem statement is garbage 
    // the number m is ambigue 
    int n,k,diff,x,y,indx,indy;
    vector<int> v;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    	cin >>a[i];
    diff=*max_element(a,a+n)-*min_element(a,a+n);
    while(k-- && diff!=0){
    	x=*max_element(a,a+n);
    	y=*min_element(a,a+n);
    
    	indx=max_element(a,a+n)-a;
    	indy=min_element(a,a+n)-a;

    	v.push_back(indx+1);
    	v.push_back(indy+1);
    	
    	a[indx]--;
    	a[indy]++;

    	
    	x=*max_element(a,a+n);
    	y=*min_element(a,a+n);
    	diff=x-y;

    }
    int sz=v.size();
    cout<<diff<<" "<<sz/2<<endl;

    for(int i=0;i<sz;i+=2)
    	cout<<v[i]<<" "<<v[i+1]<<endl;

    return 0;
        
}
