//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 1/3/2019

*/

#include <bits/stdc++.h>

using namespace std;




int main() {
    map <char ,int> vKey;
    vKey.insert(make_pair('q',9));
    vKey.insert(make_pair('Q',9));
    vKey.insert(make_pair('r',5));
    vKey.insert(make_pair('R',5));
    vKey.insert(make_pair('b',3));
    vKey.insert(make_pair('B',3));
    vKey.insert(make_pair('n',3));
    vKey.insert(make_pair('N',3));
    vKey.insert(make_pair('p',1));
    vKey.insert(make_pair('P',1));
    int sumW=0,sumB=0;
    string line;

    for(int i=0; i<8 ;i++){
        cin>> line;
        for( char x : line){
            if(x!='.' && x<='Z'){
                sumW+=vKey[x];
            }else if(x!='.' && x<='z') {
                sumB+=vKey[x];
            }
        }
    }
    if(sumW==sumB) cout<<"Draw";
    else
    cout << (sumW>sumB?"White":"Black");
    return 0;
}
