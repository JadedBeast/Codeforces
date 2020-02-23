//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t,n,k;
    cin >> t;
    while(t--){
        string s="";
        cin >> n >> k;
        while(s.length()<n){
            char x='a';
            for (int i=0 ;i<k && s.length()<n ;i++){
                s+=x;
                x++;
            }
        }
        cout << s<< endl;
    }


    return 0;
}
