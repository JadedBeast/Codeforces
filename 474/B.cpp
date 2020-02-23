//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 08/11/2019

*/

#include <bits/stdc++.h>

using namespace std;
#define oo 1e17
#define ll long long 
#define mp make_pair
#define debug(x) cout<<"Mayday Mayday : "<<(x)<<endl;
#define debugg(x) cout<<"-----Mayday Mayday : "<<(x)<<endl;
inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
const int MAX =1e6+1;

int main() {
    JadedBeast();
    int n,m,q;
    vector <int> v,vr,vInd;
    cin >> n;
    int a[n+55];
    a[0]=0;
    for(int i=1;i<=n;i++){
    	cin >>a[i];
    	v.push_back(a[i-1]+1);
    	a[i]+=a[i-1];
    }

    cin >> m;
    while(m--){
    	cin >> q;
    	auto it=lower_bound(v.begin(),v.end(),q);

    	if(*it==q)
    		cout<<it-v.begin()+1<<endl;
    	else
    		cout<<(--it)-v.begin()+1<<endl;
    }



    return 0;
    	
        
}
