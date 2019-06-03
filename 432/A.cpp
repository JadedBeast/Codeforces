//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/06/2019

*/

#include <bits/stdc++.h>
using namespace std;
#define  ll long long
const ll mod= 1e9+7;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}



int main() {
    JadedBeast();
    int n , k , tmp , counter=0;
    cin >> n >>k ;
    for(int i=0 ; i<n ;i++){
    	cin >> tmp;
    	if(5-tmp >= k)
    		counter++;
    }
    cout << counter/3;
}
