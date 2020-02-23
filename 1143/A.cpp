//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =2e5+1;
int a[MAX];
int main() {
    JadedBeast();
    int n,c1=0,c0=0,counter0=0,counter1=0,ans,counter=0;
    cin >> n;
    for(int i=0 ; i<n ;i++){
    	cin >> a[i];
    	if(a[i])
    		c1++;
    	else
    		c0++;

    }
     for(int i=0 ; i<n ;i++){
     	counter++;
     	if(a[i])
     		counter1++;
     	else
     		counter0++;
     	if(counter0==c0 || counter1==c1){
     		ans=counter;
     		break;
     	}


     }
     cout << ans ;
    return 0;
    
}
