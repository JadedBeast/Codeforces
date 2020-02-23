//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 17/3/2019

*/

#include <bits/stdc++.h>

using namespace std;
const int mod= 1e9+7;
const int MAX=1e5+1;
inline void Boost() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}




int main() {
	Boost();
	string n;
	cin >> n;
	reverse(n.begin(),n.end());
	for(char x : n)
		switch( x ){
			case '0': cout <<"O-|-OOOO"<<endl;break;
			case '1': cout <<"O-|O-OOO"<<endl;break;
			case '2': cout <<"O-|OO-OO"<<endl;break;
			case '3': cout <<"O-|OOO-O"<<endl;break;
			case '4': cout <<"O-|OOOO-"<<endl;break;
			case '5': cout <<"-O|-OOOO"<<endl;break;
			case '6': cout <<"-O|O-OOO"<<endl;break;
			case '7': cout <<"-O|OO-OO"<<endl;break;
			case '8': cout <<"-O|OOO-O"<<endl;break;
			case '9': cout <<"-O|OOOO-"<<endl;break;

		}


    return 0;
}
