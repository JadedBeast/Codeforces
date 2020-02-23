//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 9/2/2019

*/

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    int s,n,j;
    cin>>s>>n;
    vector <pair<int,int>> dragons;
    bool result=true;
    j=n;
    while(j--){
        int x,y;
        cin>>x>>y;
        dragons.push_back(make_pair(x,y));
    }
    sort(dragons.begin(),dragons.end());
    for(int i=0;i<n;i++){
        if(s-dragons[i].first<=0){
            result=false;
            break;
        }
        s+=dragons[i].second;
    }
    cout<<(result?"YES":"NO")<<endl;
    return 0;
}
