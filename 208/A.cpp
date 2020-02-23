
//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 4/3/2019

*/

#include <bits/stdc++.h>

using namespace std;


#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >>s;

    int len=s.length();
    bool flag=false;
    for(int i=0 ;i<len; i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            if(flag){
                cout <<" ";
                flag=false;
            }
            i+=2;

        }else{
            cout <<s[i];
            flag=true;
        }

    }
   return 0;
}
