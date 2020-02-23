//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 2/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main(void){
    int q,a,b;
    long long  n,result;
    cin >> q;

    for(int i=0 ; i<q ;i++){
        cin >> n >> a >> b;
        
        if(2*a<=b)
            result=n*a;
        else 
            result=b*(n/2)+(n%2)*a;

         cout<< result<<endl;
    }

    return 0;
}
