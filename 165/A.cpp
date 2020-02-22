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
const int MAX=2e3+1;
int mod=1e9+7;
bool dp[MAX][MAX];

int main(void) {
	JadedBeast();
	memset(dp,false,sizeof(dp));

	int n,x,y,counter=0,maxX=-1,maxY=-1;

	cin >> n ;
	for(int i=1 ; i<=n ; i++){
		cin >> x >> y;
		maxX=max(x+1000,maxX);
		maxY=max(y+1000,maxY);
		dp[x+1000][y+1000]=true;
	}
	int maxK=max(maxX,maxY);

	for(int i=0 ;i<=maxX ; i++)
		for(int j=0 ; j<=maxY ;j++)
			if(dp[i][j]){
				bool flagUp=false,flagDown=false,flagRight=false,flagLeft=false;
				for(int k=1 ; k<=maxK ;k++){
					if(i+k<=maxX && !flagUp)
						if(dp[i][j]==dp[i+k][j])
							flagUp=true;
					if(i-k>=0 && !flagDown)
						if(dp[i][j]==dp[i-k][j])
							flagDown=true;
					if(j+k<=maxY && !flagRight)
						if(dp[i][j]==dp[i][j+k])
							flagRight=true;
					if(j-k>=0 && !flagLeft)
						if(dp[i][j]==dp[i][j-k])
							flagLeft=true;
				}
				if(flagUp && flagDown && flagLeft && flagRight)
					counter++;

			}
					
    //NODAWANOD
    
	cout <<counter <<endl;
}
