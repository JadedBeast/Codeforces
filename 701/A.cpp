//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 03/04/2020
    
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
bool compare(pair <int,int> p1,pair<int,int> p2){
	return p1.first>p2.first;
}
int main() {
    JadedBeast();
    int n;
    cin >> n ;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i].first;
    	a[i].second=i;
    
    }

    sort(a,a+n,compare);

    for(int i=0;i<n/2;i++)
    	cout <<a[i].second+1<<" "<<a[n-i-1].second+1<<endl;


    return 0;
}
