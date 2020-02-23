//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 27/10/2019
 
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define oo 1e17
#define ll long long 
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+5;
 vector<int> v ;
 bool prime[MAX];
void sieve(int n){
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    int rcn=sqrt(n);
    for(int i=2;i<=rcn;i++)
        if(prime[i]){
            v.push_back(i);
            for(int j=2;i*j<=n;j++)
                prime[i*j]=false;
        }
}
int main() {
    JadedBeast();
   	int n ,ans=1;
   	cin >>n;
   	sieve(n+1);

   	for(int i=2 ; i<=(n+1);i++)
   		if(!prime[i]){
   			ans=2;
   			break;
   		}

   	cout<<ans<<endl;
   	ans=1;
   	for(int i=2 ; i<=(n+1);i++)
   		if(!prime[i])
   			cout<<"2 ";
   		else
   			cout<<"1 ";
}
