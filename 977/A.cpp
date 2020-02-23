//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main(void){
    long long n,k;
    cin >>n >> k;
    while(k--){
        if(n%10!=0)
            n--;
        else
            n/=10;
    }
    cout << n<<endl;

    return 0;
}
