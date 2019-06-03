//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 26/3/2019
	
*/

#include <bits/stdc++.h>

using namespace std;

inline void JadedBeast() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int MAX=2e5+1;

int main(void) {
	JadedBeast();
	int x1,y1,x2,y2,x,y,a;
	set<pair<int,int>> s;
	cin >> x1 >> y1 >> x2 >> y2;
	s.insert(make_pair(x1,y1));
	s.insert(make_pair(x2,y2));

	x=abs(x1-x2);
	y=abs(y1-y2);
	a=max(x,y);
	int xc[4]={0,a,a,0};
	int yc[4]={a,0,a,0};

	if(x!=0 && y!=0 && x!=y)
		cout << -1 ;
	else if(x==0 || y==0 || x==y){
			x=min(x1,x2);
			y=min(y1,y2);
			for(int i=0 ; i<4;i++){
				auto p=make_pair(x+xc[i],y+yc[i]);
				if(s.find(p)==s.end())
					cout << x+xc[i]<<" "<<y+yc[i]<<" ";
				s.insert(p);
			}
		}

}
