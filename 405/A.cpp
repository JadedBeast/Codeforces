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
    int n;
    cin>>n;
    int T[n];
    for(int i=0;i<n;i++){
        cin>>T[i];
    }
    sort(T,T+n);
    for(int x : T){
        cout<<x<<' ';
    }


    return 0;
}
