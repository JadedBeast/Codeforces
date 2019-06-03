//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 03/6/2019

*/

#include <bits/stdc++.h>
using namespace std;

const int mod= 1e9+7;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
inline int modulo(int a, int b) {
  const int result = a % b;
  return result >= 0 ? result : result + b;
}

int main() {
    int n,x,y,a[3];
    cin >> x >>y;
    a[0]=x;
    a[1]=y;
    a[2]=y-x;
      cin >> n;
      if(((n-1)/3)&1)
        if(n%3)
          cout <<modulo(-a[n%3-1],mod)<<endl;
        else
          cout << modulo(-a[2],mod)<<endl;
      else
        if(n%3)
          cout <<modulo(a[n%3-1],mod)<<endl;
        else
          cout << modulo(a[2],mod)<<endl;


    

    return 0;
}
