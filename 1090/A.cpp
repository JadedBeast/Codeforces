//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n,m;
    long long result,a;
    cin >> n ;
    vector <pair<long long ,int>> company;
    for (int i=0 ; i<n ;i++){
        result =-1;
        cin >>m;
        for (int j=0 ;j<m;j++){
            cin >> a;
            result = max(a, result);
        }

        company.push_back(make_pair(result,m));

    }
    sort(company.begin(),company.end());
    result=0;
    for(int i=0;i<n-1;i++){
        result+=(company[n-1].first-company[i].first)*company[i].second;
    }
    cout << result << endl;

    return 0;
}
