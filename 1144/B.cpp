//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =2e3+1;
int o[MAX],e[MAX];


int main() {
    JadedBeast();
    int n,odd=0,even=0,a,sum=0;
    cin >> n;
    for (int i=0 ; i<n ;i++){
        cin >>a;
        if(a&1){
            o[odd]=a;
            odd++;
        }
        else{
            e[even]=a;
            even++;
        }
        sum+=a;
    }

    sort(o,o+odd,greater<int>());
    sort(e,e+even,greater<int>());
    int x=sum;
    bool firstodd=true;
    if(odd<even)
        firstodd=false;
    int j=0,k=0;
    for(int i=0 ;i<=2*min(odd,even)+1;i++){
        if(firstodd && j<odd){
            x-=o[j];
            firstodd=false;
            j++;
        }
        if(!firstodd && k<even){         
            x-=e[k];
            firstodd=true;
            k++;
        }

    }

    cout << x;


    
}
