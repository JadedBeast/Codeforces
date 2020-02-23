//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 7/2/2019

*/

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    int n,price,quality,mini;
    cin>>n;
    bool result=false;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
            cin>>price>>quality;
            v.push_back(make_pair(price,quality));
    }
    sort(v.begin(),v.end());
    mini=v[0].second;
    for(int i=1;i<n;i++){
        if(v[i].second<=mini && v[i].first!=v[i-1].first){
            result=true;//Happy Alex
            break;
        }
        mini=v[i].second;
    }
    cout<<(result?"Happy Alex":"Poor Alex")<<endl;
    return 0;
}
