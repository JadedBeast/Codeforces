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
    int n,a,b,c,counter=0;
    cin >> n;
    for(a=1 ;a<=n; a++)
        for( b=1 ; b<=a  ;b++ ){
            int x=a*a+b*b;
            c=sqrt(x);
            if(c>n)
                continue;
            if(c*c==x )
                    counter++;
            }

    cout << counter;


    return 0;
}
