//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                    Morocco

created : 11/2/2019

*/

#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long friends,books,sum;
    cin>>friends>>books;
    // 2 red  5 green 8 blue  notebook 1 color k sheets
    long r=2,g=5,b=8;
    // 1-> 2*r+8*b+5*g
    sum= ceil((double)(friends*r)/books)+ ceil((double)(friends*g)/books)+ceil((double)(friends*b)/books);
    cout<< sum<<endl;
    return 0;
}
