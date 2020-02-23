//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 7/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

void calSumStud(int k, vector <int> c , int &sumStuLeft , int &sumStuRight){
	int m=c.size();
	sumStuRight=0,sumStuLeft=0;
   	for (int i=1 ; i<k ;i++)
   		sumStuRight+=c[i];
   	for (int i=k ; i<m ;i++)
   		sumStuLeft+=c[i];	


}

int main() {

	long long m,x,y,k=1;
	cin >> m ;
   	vector <int> c(m+1);
   	c[0]=-696969;
   	for (int i=1 ; i<m+1 ;i++){
   		cin >> c[i];
   	}
   	cin >> x >> y;


   	int sumStuLeft=0,sumStuRight=0;
   	bool impossible=true;
   	while(k<m+1){		
   		calSumStud(k,c, sumStuLeft, sumStuRight);
   		if(sumStuRight>=x && sumStuRight <=y && sumStuLeft >=x && sumStuLeft<= y){
   			cout << k;
   			impossible=false;
   			break;
   		}
   		k++;
   	}

   	if(impossible)
   		cout << 0 ;

   return 0;
}
