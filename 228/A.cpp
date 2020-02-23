//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 22/2/2019

*/
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int T[4],result=0;
    cin>> T[0] >> T[1] >> T[2] >> T[3];
    sort(T,T+4);
    for(int i=0;i<3;i++){
        if(T[i]==T[i+1]){
            result++;
        }
    }
    cout<< result << endl ;
    return 0;
}
