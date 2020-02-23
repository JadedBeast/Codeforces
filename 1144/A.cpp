//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 31/3/2019

*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}


int main() {
    JadedBeast();
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	sort(s.begin(), s.end());
    	bool adja=true,repeat=false;
    	for(int i=0 ;i<(int)s.length()-1;i++){
    		char test=(s[i+1]-'0')-1+'0';
    		if(s[i]!=test)
    			adja=false;
    	}

    	
    	for(int i=0 ;i<(int)s.length(); i++)
    		if(s[i]==s[i+1])
    			repeat=true;

    	if(adja and !repeat)
    		cout <<"Yes"<<endl;
    	else
    		cout <<"No"<<endl;;
    	
    }



    }





    
