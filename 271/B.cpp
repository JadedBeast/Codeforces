//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 07/03/2020
    
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n"
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<x<<endl;
#define debugg(x) cout<<"----Mayday Mayday : "<<x<<endl;
#define debuggg(x) cout<<"****Mayday Mayday : "<<x<<endl; 
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX = 1e5+9;
bool primes[MAX];
vector <int> pr;
void sieve(){
    memset(primes,true,sizeof(primes));
    primes[0]=false,primes[1]=false;
    int rcn=sqrt(MAX);
    for(int i=2;i<=rcn;i++)
        if(primes[i])
            for(int j=2;j*i<MAX;j++)
                primes[i*j]=false;

    for(int i=2;i<MAX;i++)
        if(primes[i])
            pr.push_back(i);
}
 
int main(void) {
    JadedBeast();
    sieve();
    int n,m;
    cin >> n >>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> mat[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            int curr=mat[i][j];
            auto lw=lower_bound(pr.begin(),pr.end(),curr);
            auto up=upper_bound(pr.begin(),pr.end(),curr);
            mat[i][j]=min(abs(*lw-curr),abs(*up-curr));
        }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=mat[i][j];
        }
        ans=min(ans,sum);
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=mat[j][i];
        }
        ans=min(ans,sum);
    }
    cout <<ans;
    return 0;      
}
