#include <bits/stdc++.h>

using namespace std;

int main(void){
	int k,r,result=1;
	cin >> k >> r;

	while((result*k-r)%10!=0 && (result*k)%10!=0 )
		result++;
	cout<< result<<endl;

	return 0;
}
