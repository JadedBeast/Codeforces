//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 5/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main(void){
    JadedBeast();
    int k2,k3,k5,k6;
    cin >> k2 >>k3 >>k5 >>k6;

    cout << 256*min(k2,min(k5,k6))+32*min(k2-min(k2,min(k5,k6)),k3)<<endl;
    
   return 0;
}
