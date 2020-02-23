//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 1/3/2019

*/

#include <bits/stdc++.h>

using namespace std;



int main() {
    int n,sumT=0,sumRandom,a,rank=1;
    cin >> n;
    for (int i=0 ;i <4; i++){
        cin >> a;
        sumT+=a;
    }


     for(int i=0;i<n-1; i++ ){
         sumRandom=0;
         for (int j=0 ;j <4; j++){
             cin >> a;
             sumRandom+=a;
          }
         if(sumRandom>sumT)
             rank++;
      }
     cout<< rank<<endl;

    return 0;
}
