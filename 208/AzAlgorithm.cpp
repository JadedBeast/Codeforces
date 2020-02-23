
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
vector <int> zAlgo(string word){
    int n =(int) word.length();
    vector <int > z(n);
    for(int i=1,l=0,r=0 ;i<n ;i++){
        if(i<=r)
            z[i]=min(z[i-l],r-i+1);
        while(word[z[i]]==word[i+z[i]] && i+z[i]<n)
            z[i]++;
        if(z[i]+i-1>r){
            l=i;
            r=z[i]+i-1;
        }
    }
 return z;
}

int main(void){
    string s;
    cin >>s;
    s="WUB$WUB"+s+"WUB";
    vector <int> v=zAlgo(s);
    int vSize=(int) v.size();
    vector <int> occ;

    for(int i=0;i<vSize ;i++)
        if(v[i]==3)
            occ.push_back(i);

    int occSize=occ.size();
    for(int i=0 ; i<occSize-1 ; i++){
        if(int x=occ[i+1]-occ[i]-3!=0)
        cout <<s.substr(occ[i]+3,occ[i+1]-occ[i]-3) <<" ";
    }


   return 0;
}
