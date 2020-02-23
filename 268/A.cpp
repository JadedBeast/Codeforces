//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 11/2/2019

*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>> n;
    
    vector <pair<int,int>> games;
    int sum=0;
    for(int i=0;i<n;i++){
        int h,a;
        cin>>h>>a;
        games.push_back(make_pair(h,a));

    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(games[i].first==games[j].second){
            sum++;
            }
        }
    }


    cout<<sum<<endl;
    return 0;
}
