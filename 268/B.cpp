//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 12/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;

inline void Boost() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}



int main() {
    Boost();
    int n,sum=0;
    cin >>n;
    for(int i=1 ;i<n ;i++)
    	sum+=i*(n-i);
    sum+=n;
	cout << sum<<endl;   

    return 0;
}
