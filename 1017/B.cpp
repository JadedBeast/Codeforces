//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 1/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

// I don't know why this is correct , It's  a simple spell but quite remarkable

int main() {
    long long n,result=0,num0=0,num1=0 ;
    string bin1, bin2;
    cin >> n >> bin1 >> bin2;
    for(long long i=0 ; i<n ;i++){
        if(bin1[i]=='0')
            num0++;
        else
            num1++;

    }
    for(long long  i=0 ; i<n ;i++){
        if((bin1[i]=='0' && bin2[i]=='0')){
                result+=num1;
                num0--;
        }
        else if((bin1[i]=='1' && bin2[i]=='0')){
             result+=num0;
             num1--;
        }
    }
    cout << result;

    return 0;
}
