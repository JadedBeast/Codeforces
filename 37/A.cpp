//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main(void){
    map <int ,int > m;
    int n,l;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> l;
        if(m.find(l)==m.end()){
            m.insert(make_pair(l,1));
        }else{
            m[l]++;
        }
    }
    int maxi=1;
    for (auto x : m)
        maxi=max(maxi,x.second);

    cout <<maxi <<" "<<m.size()<<endl;

    return 0;
}
