//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/06/2019

*/

#include <bits/stdc++.h>
using namespace std;
#define  ll long long
const ll mod= 1e9+7;
const int MAX=1e5+1;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main() {
    JadedBeast();
    int n,x;
   	bool p[4];
   	p[1]=true,p[2]=true,p[3]=false;
   	cin >> n;
   	while(n--){
   		cin >>x;
   		if(!p[x]){
   			cout <<"NO";
   			return 0;
   		}
   		for(int i=1 ; i < 4; i++)
   			p[i]=!p[i];

   		p[x]=true;

   	}

   	cout <<"YES";
}
