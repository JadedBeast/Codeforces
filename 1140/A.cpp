//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e9
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main(void) {
    JadedBeast();
    int n,ans=0;
    cin  >> n;
    int a[n+1];
    for(int i=1 ;i<=n ;i++)
        cin >>a[i];
    int temp=0;
    for(int i=1;i<=n ;i++){
        if(temp>=i){
            temp=max(temp,a[i]);
            continue;    
        }
        temp=max(temp,a[i]);
        ans++;

    }
    cout << ans<< endl;
    return 0;
    
}





    
