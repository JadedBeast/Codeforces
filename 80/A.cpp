//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 21/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define time cout << "\ntime: " << (long long)clock() * 1000 / CLOCKS_PER_SEC << " ms" << endl;
const int mod= 1e9+7;



inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
bool primes[51];

void sieve(){
    memset(primes,true,sizeof(primes));
    primes[0]=false,primes[1]=false;
    for(int i=2;i*i<51; i++)
        if(primes[i])
            for(int j=2; i*j<51 ; j++)
                primes[i*j]=false;
}



int main() {
    JadedBeast();
    sieve();
    int n,m,i;
    cin >> n >>m;
    if(!primes[m])
        cout << "NO";
    else{

        for(i=n+1;i<=m ;i++)
            if(primes[i])
                    break;  
        if(i==m)
            cout << "YES";
        else
            cout << "NO";         
        }
        
    return 0;
}
