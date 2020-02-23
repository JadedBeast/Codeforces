//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 06/01/2020
    
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long 
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

int main(void) {
    JadedBeast();
    string s;
    cin >> s;
    string first="heavy",second="metal";
    vector<int> zFirst=z_function(first+"$"+s);
    vector<int> zSecond=z_function(second+"$"+s);
    vector<int> fIndex,sIndex;
    int szf=zFirst.size(),szs=zSecond.size();
    for(int i=0;i<szf; i++)
        if(zFirst[i]==5)
            fIndex.push_back(i);

    for(int i=0;i<szs; i++)
        if(zSecond[i]==5)
            sIndex.push_back(i); 
    int j= 0,sz1=fIndex.size(),sz2=sIndex.size();
    long long counter=0;  
    for(int i=0;i<sz1 && j<sz2;i++){
        while(fIndex[i]>sIndex[j] && j<sz2){
            j++;
        }
        if(j<sz2)
            counter+=sz2-j;
        else
            break;
    }
    cout <<counter;
}
