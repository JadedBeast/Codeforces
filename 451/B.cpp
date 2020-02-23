//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 07/11/2019

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
const int MAX =1e5+1;


int main() {
    JadedBeast();
    int n,x=1,y=1;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
    }
    if(is_sorted(a,a+n))
    	cout<<"yes\n"<<x<<" "<<y;
    else{

    	for(int i=1;i<n;i++){
    		if(a[i]<=a[i-1] ){
    			x=i-1;
    			break;
    		}
    	}
    	for(int i=n-1;i>=1;i--){
    		if(a[i]<=a[i-1] ){
    			y=i;
    			break;
    		}
    	}

    	reverse(a+x,a+y+1);
    	if(is_sorted(a,a+n))
    		cout<<"yes\n"<<x+1<<" "<<y+1;
    	else
    		cout<<"no";

    }

    return 0;
        
}
