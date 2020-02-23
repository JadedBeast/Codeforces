//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 21/2/2019

*/

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    long long n,x;
    cin >> n >> x ;
    int result=0;

    for (long long i=n;i>=ceil((double) x/n) && i>0;i--){
        if(x%i==0) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
