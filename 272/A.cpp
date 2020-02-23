//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 23/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=1e5+1;
int mod=1e9+7;


int main(void) {
	JadedBeast();
	int n,sum=0,a,counter=0;
	cin >> n;
	for(int i=1 ; i<=n ; i++){
		cin >> a;
		sum+=a;
	}
	for(int i=1 ; i<=5 ; i++)
		if((sum+i-1)%(n+1)!=0){
			counter++;
		}
		cout <<counter <<endl;
}
