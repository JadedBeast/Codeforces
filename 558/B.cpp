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
   	int n,maxi=0;
   	map <int,int> occ;
   	cin >>n;
   	int arr[n];
   	for(int i=0;i<n;i++){
   		cin >>arr[i];
   		if(occ.find(arr[i])==occ.end())
   			occ.insert(make_pair(arr[i],1));
   		else
   			occ[arr[i]]++;
   		if(maxi<occ[arr[i]]){
   			maxi=occ[arr[i]];
   		}
   	}
   	int l=1,r=n,x,y;
   	vector<int> v;
   	for(auto m :occ){
   		if(m.second==maxi)
   			v.push_back(m.first);
   	}
   	int sz=v.size();

   	for(int i=0;i<sz && maxi>1;i++){

   		for(int j=0;j<n;j++){
   			if(arr[j]==v[i]){
   				x=j;
   				int k=n-1;
   				while(true){
   					if(arr[k]==v[i]){
   						y=k;
   						break;
   					}
   					k--;
   				}
   				break;
   			}   			
   		}
   		if(r-l>=y-x){
   			r=y;
   			l=x;
   		}
   	}
   if(maxi==1)
   	cout<<"1 1";
   else
   	cout<<++l <<" "<<++r;

}
