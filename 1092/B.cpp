//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n,a,result=0;
    vector <int> v;
    cin >> n;
    for (int i=0 ;i < n ; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0 ;i < n-1 ; i+=2)
        result+=v[i+1]-v[i];

    cout << result;

    return 0;
}
