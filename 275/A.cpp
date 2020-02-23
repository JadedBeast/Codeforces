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
    int a,m[3][3]={1,1,1,1,1,1,1,1,1};

    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++){
            cin >> a;
            if(a%2!=0){
                m[i][j]^=1;
                if(i+1<3)
                    m[i+1][j]^=1;
                if(i-1>=0)
                    m[i-1][j]^=1;
                if(j+1<3)
                    m[i][j+1]^=1;
                if(j-1>=0)
                    m[i][j-1]^=1;
            }
        }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++)
            cout <<m[i][j];
        cout<< "\n";
    }


    return 0;
    
}
