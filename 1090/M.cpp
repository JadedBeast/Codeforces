//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n,k,sum=1,result=1;
    cin >> n >> k;
    vector <int> v(n);
    for(int i=0 ;i <n ;i++)
        cin >> v[i];
    int i=0;
    while(i<n-1){
        while(v[i]!=v[i+1] && i<n-1){
            sum++;
            i++;
        }
        i++;
        result=max(result,sum);
        sum=1;
    }
    cout << result;

    return 0;
}
