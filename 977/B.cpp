//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 3/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main(void){
    int n;
    string s,maxS,test;
    cin >>n >>s;;
    maxS=s.substr(0,2);
    int maxOcc=1;

    for (int i=0;i<n-1;i++){
        int occ=1;
        test=s.substr(i,2);
        for(int i=0 ; i<n-1 ;i++){
            if(s[i]==test[0] && s[i+1]==test[1])
                occ++;
        }
        if(occ>maxOcc){
            maxOcc=occ;
            maxS=test;
        }
    }


    cout << maxS<<endl;

    return 0;
}
