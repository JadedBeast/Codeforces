//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 9/2/2019

*/

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    string  first,second,third,target;
    bool result=true;
    cin>>first>>second>>third;
    target=first+second;
    if(target.length()!=third.length()){
        result=false;
    }else{
       sort(target.begin(),target.end());
       sort(third.begin(),third.end());
       for(int i=0;i<target.length();i++){
           if(target[i]!=third[i]){
               result=false;
               break;
           }
       }
    }

    cout<<(result?"YES":"NO");
    return 0;
}
