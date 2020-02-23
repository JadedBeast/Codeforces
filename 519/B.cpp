//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 1/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main() {
    unsigned long long n,a=0,b=0,c=0,number;
    cin >> n ;
    for(int i=0; i<n ;i++ ){
        cin >> number;
        a+=number;
    }
    for(int i=0; i<n-1 ;i++ ){
        cin >> number;
        b+=number;
    }
    for(int i=0; i<n-2 ;i++ ){
        cin >> number;
        c+=number;
    }
    cout << a-b<<"\n"<<b-c;
    return 0;
}
