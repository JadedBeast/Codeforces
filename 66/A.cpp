//       In the name of         ****                      God                     ****
 
/*
 
Copyright (C)          JadedBeast
 
                                   Morocco
 
created : 27/10/2019
 
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
int compare(string a, string b){
	if(a.length()>b.length())
		return 0;
	else if(a.length()<b.length())
		return 1;
	else{
		for(int i=0;i<a.length();i++)
			if(a[i]>b[i])
				return 0;
			else if(a[i]<b[i])
				return 1;
	}
	return 1;
}

int main() {
    JadedBeast();
 	int n;
 	string s;
 	cin >> s;
 	n=s.length();
 	if(s[0]=='-'){
 		if(n<=4 && compare(s,"-128"))
 		cout<<"byte";
 		else if(n<=6 && compare(s,"-32768"))
 		cout<<"short";
 	 	else if(n<=11 && compare(s,"-2147483648"))
 		cout<<"int";
 	 	else if(n<=20 && compare(s,"-9223372036854775808"))
 		cout<<"long";
 	 	else 
 		cout<<"BigInteger";

 	}
 		
    else
 		if(n<=3 && compare(s,"127"))
 		cout<<"byte";
 		else if(n<=5 && compare(s,"32767"))
 		cout<<"short";
 	 	else if(n<=10 && compare(s,"2147483647"))
 		cout<<"int";
 	 	else if(n<=19 && compare(s,"9223372036854775807"))
 		cout<<"long";
 	 	else 
 		cout<<"BigInteger";
 	
}
