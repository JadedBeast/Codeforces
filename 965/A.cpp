//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 11/2/2019

*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
    int k,n,s,p;
    cin>>k>>n>>s>>p;
    int x=ceil((float)n/s);

    cout<< (int)ceil((float)x*k/p);


    return 0;
}
