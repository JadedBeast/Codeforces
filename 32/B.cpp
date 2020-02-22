//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 21/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define time cout << "\ntime: " << (long long)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
const int mod= 1e9+7;



inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}




int main() {
    JadedBeast();
    string s;
    cin >> s;
    int l=s.length();
    for(int i=0 ; i<l ; i++){
        if(s[i]=='.')
            cout << '0';
        if(s[i]=='-'){
            if(s[i+1]=='.')
                cout << '1' ;
            else
                cout << '2';
            i++;
        }

    }

    return 0;
    
}
