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

int h[MAX],t[MAX];

int main() {
    JadedBeast();
    memset(h,0,sizeof(h));
    int n , x , y , tmp ;
    cin >> n;
    for(int i=0 ;i < n ;i++){
    	cin >> x >> y;
    	h[x]++;
    	t[i]=y;
    }
    for(int i=0 ; i < n ; i++){
    	if(h[t[i]])
    		tmp=h[t[i]];
    	else
    		tmp=0;
    	cout << (n-1)+tmp <<" "<<(n-1)-tmp<<endl;
    }

}
