//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 22/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define time cout << "\ntime: " << (long long)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
const int mod= 1e9+7;



inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}




int main(void) {
    JadedBeast();
    int n,l,r,left1=0,left0=0,right1=0,right0=0;
    cin >> n ;
    for (int i= 0 ;i <n ;i++){
        cin >>l >> r;
        if(l)
            left1++;
        else
            left0++;
        if(r)
            right1++;
        else
            right0++;
    }
    cout << min(left0,left1)+min(right0,right1)<< endl;

    return 0;
}
