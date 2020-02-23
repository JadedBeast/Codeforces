//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 21/2/2019

*/

#include <bits/stdc++.h>


using namespace std;

int main(void)
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int result=min((n/m)*b+(n%m)*a,min(n*a,(n/m)*b+(n%m!=0?b:0)));
    cout << result << endl;

    return 0;
}
