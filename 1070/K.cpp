
//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 4/3/2019

*/

#include <bits/stdc++.h>

using namespace std;



int main(void){
    int n,k;
    long long result=0;
    cin >> n >>k;
    int answer[k];
    memset(answer,0,k*sizeof(int));
    vector <int> v(n);
    for(int i=0 ; i<n ;i++){
        cin >> v[i];
        result+=v[i];
    }
    if(result%k!=0){
        cout << "No"<<endl;
    }else{
        long long sum=0,counter=0;
        int j=0;
        for(int i=0 ; i<n ;i++){
            sum+=v[i];
            counter++;
            if(sum==result/k){
                answer[j]=counter;
                j++;
                counter=0;
                sum=0;
            }
        }
        sum=0;
        for (int i=0;i<k ;i++)
            sum+=answer[i];
        if(sum==n){
            cout << "Yes" <<endl;
            for (int i=0;i<k ;i++)
                cout<< answer[i] <<" ";
        }else{
            cout << "No"<<endl;
        }
    }

   return 0;
}
