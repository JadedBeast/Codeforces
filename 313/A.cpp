//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 10/2/2019

*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
    string n;
     cin>>n;
     if(n[0]!='-'){
         cout<<n<<endl;
     }else{
         unsigned long long l=n.length();
         int digg1=n[l-1]-'0';
         int digg2=n[l-2]-'0';
         int diff=digg1-digg2;
         if(diff>0){
             n.erase(l-1);
         }else{
             n.erase(n.begin()+l-2);
             if(n[1]=='0'){
                 n.erase(n.begin());
             }
         }

         cout<<n<<endl;
     }

    return 0;
}
