//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/01/2020
    
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
const int mod = 1e9+7;
const int MAX = 1e6+9;

 
int main(void) {
    JadedBeast();
    int n,m;
    cin >> n >>m;
    char mat[n][m];
    int temp=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
            if(mat[i][j]=='*')
                temp++;
        }

    int cl[m]={0},rw[n]={0};
    //memset(cl,0,sizeof(cl));
    //memset(rw,0,sizeof(rw));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(mat[i][j]=='*'){
                rw[i]++;
            }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(mat[j][i]=='*'){
                cl[i]++;
            }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(mat[i][j]=='*'){
                if(rw[i]+cl[j]==temp+1){
                    cout <<"YES"<<endl;
                    cout <<i+1 <<" "<<j+1;
                    return 0;
                }
            }
            else
                if(rw[i]+cl[j]==temp){
                    cout<<"YES"<<endl;
                    cout <<i+1 <<" "<<j+1;
                    return 0;
                }
        }


        cout <<"NO";
    return 0;      
    
//https://codeforces.com/problemset/problem/699/B
}
