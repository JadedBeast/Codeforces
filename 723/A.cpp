//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 12/2/2019

*/


#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))-min(a,min(b,c))<<endl;

    return 0;
}
