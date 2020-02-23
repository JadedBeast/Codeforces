
//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 8/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
static     int n,a,b,c;
int dp(int i,int *dP){
    if(i==n)
        return 0;
    if(i>n)
        return -69696;
    if(dP[i]!=-1)
        return dP[i];

    return dP[i]=max(dp(i+a,dP)+1,max(dp(i+b,dP)+1,dp(i+c,dP)+1));

}


int main(void){
    cin >> n >> a >> b >>c;
    int dP[n+1];
    memset(dP,-1,(n+1)*sizeof (int));

    int T[3]={a,b,c};
    sort(T,T+3);
    a=T[0],b=T[1],c=T[2];
    dp(0,dP);
    cout<<dP[0]<<endl;

   return 0;
}
