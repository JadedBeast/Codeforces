//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 14/4/2019

*/


#include <bits/stdc++.h>
using namespace std;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

const int MAX=3e6; 

int trie[MAX][2];     
int occ[MAX];
int nodeNumber=0;

void insert(int n){
    int next =0;
    for(int i=30 ; i>=0 ;i--){
        int x=(n>>i)&1;
        if(trie[next][x]==-1)
            trie[next][x]=++nodeNumber;
        next=trie[next][x];
        occ[next]++;
    }
}

/*bool searchIt(int n){
    int next =0;
    for(int i=30 ; i>=0; i--){
        int x=(n>>i)&1;
        if(trie[next][x]==-1 || occ[trie[next][x]]==0)
            return false;
        next=trie[next][x];
    }
    return true;
}*/

void deleteIt(int n){
    int next =0;
    for(int i=30 ; i>=0 ;i--){
        int x=(n>>i)&1;
        if(trie[next][x]==-1)
             trie[next][x]=++nodeNumber;

    next=trie[next][x];
    occ[next]--;
    }
}
int xorMax(int n){
    int next =0;
    int ans=0;
    for(int i=30 ; i>=0 ;i--){
        int x=(n>>i)&1;
        if(trie[next][x^1]!=-1 && occ[trie[next][x^1]]){
            ans+=1<<i;
            next=trie[next][x^1];
        }
        else{
            //ans+=x*pow(2,i);
            next=trie[next][x];
        }
        

    }
    return ans;
}
int main() {
    memset(trie,-1,sizeof(trie));
    memset(occ,0,sizeof(occ));
    //JadedBeast();
    insert(0);
    int n,q;
    char cmd;
    scanf("%d",&q);   
    while(q--){
        scanf(" %c %d",&cmd,&n);
        if(cmd=='+')
            insert(n);
        else if(cmd=='-')
            deleteIt(n);
        else
            printf("%d\n",xorMax(n));
    }

    return 0;
}
