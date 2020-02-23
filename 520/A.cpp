//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 21/2/2019

*/

#include <bits/stdc++.h>


using namespace std;
bool pangram(string phrase,string test ){
    if(phrase.length()<26) return false;
    int s=0;
    for(int i=0; i<26 ; i++){
        for(int j=0; j < phrase.length() ; j++ ){
            if(test[i]==phrase[j]){
                s++;
                break;
            }
        }
    }
    if(s==26) return true;
    return false;
}
int main(void)
{
    int n;
    string phrase;
    cin>> n >> phrase;
    string test="abcdefghijklmnopqrstuvwxyz";
    for(char &x: phrase){
        x=tolower(x);
    }
    cout<< (pangram(phrase,test)?"YES":"NO") << endl;
    return 0;
}
