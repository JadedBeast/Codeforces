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
    int n;
    cin>>n;
    bool flag=true;
    while(flag){
        n++;
        string target=to_string(n);

        sort(target.begin(),target.end());

            if(target[0]!=target[1] && target[1]!=target[2] && target[2]!=target[3]){
               flag=false;
        }
    }
    cout<<n<<endl;
    return 0;
}
