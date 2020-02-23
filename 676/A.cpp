//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 18/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	JadedBeast();
	int n;

	cin >> n ;
	int a,minOcc,maxOcc;
	// vector <int> v1,vn; In case the ai are not distinct

	for(int i=1; i<=n ;i++){
		cin >>a;
		if(a==1)
			minOcc=i;
		if(a==n)
			maxOcc=i;
	}

	int x=abs(n-minOcc),y=abs(n-maxOcc);
	int w= abs(1-minOcc), z= abs(1-maxOcc);
	cout << max({x,y,w,z}) <<endl;
    return 0;
}
