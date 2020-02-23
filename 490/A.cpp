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
    int n,t;
    cin >> n;
    vector <int> t1,t2,t3;
    for(int i=0; i<n ;i++){
        cin >> t;
        switch(t){
            case 1: t1.push_back(i+1);break;
            case 2: t2.push_back(i+1);break;
            case 3: t3.push_back(i+1);break;
        }
    }
    int result=min(t1.size(),min(t2.size(),t3.size()));
    cout<<result<<endl;
    if(result){
        for(int i=0; i<result ; i++){
            cout << t1[i]<< ' '<<t2[i] << ' ' << t3[i]<<endl;
        }
    }
    return 0;
}
