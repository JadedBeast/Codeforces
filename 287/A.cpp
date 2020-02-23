//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 27/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

char m[4][4];
int main(void) {
	JadedBeast();
	bool flag=false;
	int xc[3]={1,0,1};
	int yc[3]={0,1,1};
	for(int i=0 ;i<4 ;i++)
		for(int j=0 ; j<4 ;j++)
			cin >> m[i][j];

	for(int i=0 ;i<3 ;i++)
		for(int j=0 ; j<3 ;j++){
			int counter=0;
			for(int k=0;k<3;k++){
				if(i+xc[k]<4 && j+yc[k]<4)
					if(m[i][j]!=m[i+xc[k]][j+yc[k]])
						counter++;
			}
			if(counter==3 || counter<=1){
				flag=true;
				break;
			}

		}

	cout<<(flag?"YES":"NO");

}
