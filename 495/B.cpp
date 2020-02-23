//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/11/2019

*/

#include <bits/stdc++.h>
using namespace std;
#define  ll long long
const ll mod= 1e9+7;
const int MAX=1e5+5;
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main() {
    JadedBeast();
    int  a ,b,x;

    cin >> a >> b ;
    if(a==b){
        cout <<"infinity";
        return 0;
    }
    x=a-b;

    int counter=0,rcn=sqrt(x);
    for(int i=1;i<=rcn;i++)
        if(x%i==0){
            if(x/i==i && i>b)
                counter++;
            else{
                if((x/i)>b)
                    counter++;
                if(i>b)
                    counter++;
            }
           } 

    cout <<counter;

    return 0;
}
