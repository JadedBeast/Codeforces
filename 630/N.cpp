//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 05/11/2019
 
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
const int MAX=2e3+5;


int main() {
    JadedBeast();
    int a ,b ,c;
    cin >> a >> b  >> c;
    double delta=sqrt(b*b-4*a*c);
    double first=(-b+delta)/(2*a);
    double second=(-b-delta)/(2*a);
    cout.precision(12);
    if(first<second)
    	swap(first,second);
	cout<< first<<endl<<second;
    

	return 0;
}		

