//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 1/3/2019

*/

#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,result=0,sum=0 ;
    string dominoes;
    bool R=false;
    cin >> n >> dominoes;
    for(int i=0 ; i<n ;i++){
        if(dominoes[i]=='R')
            R=true;
        else if(dominoes[i]=='L' && !R)
            result=0;
        else if(dominoes[i]=='.' && !R)
            result++;
        else if(dominoes[i]=='.' && R )
            sum++;
        else if(dominoes[i]=='L' && R){
            result+=sum%2;
            sum=0;
            R=false;
        }


    }

    cout << result;

    return 0;
}
