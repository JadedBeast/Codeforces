//       In the name of         ****                      God                     ****

/*

Copyright (C)          JadedBeast

                                   Morocco

created : 4/3/2019

*/

#include <bits/stdc++.h>

using namespace std;


#include <bits/stdc++.h>
using namespace std;
inline void Boost() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

vector <int> zAlgo(string word){
   int n = (int) word.length();
       vector<int> z(n);
       for(int i=1,l=0,r=0; i <n ;i++){
           if(i<=r)
               z[i]=min(z[i-l],r-i+1);

               while(i+z[i]<n && word[z[i]]==word[i+z[i]])
                   z[i]++;
               if(i+z[i]-1>r){
                   l=i;
                   r=i+z[i]-1;
               }

       }
       return z;
}



int main() {
    Boost();
    
   vector <int> z;
   string word;
   cin >> word;

   z=zAlgo(word);
   int n = (int) word.length();
   set<int , greater<int>> s;
   for(int i=0; i<n ;i++)
       if(z[i]+i==n)
           s.insert(z[i]);

    auto  it=max_element(z.begin(),z.end());
    if(count(z.begin(),z.end(),*it)<2 && *it==*s.begin() )
        s.erase(*s.begin());


    bool legend=true;
    int x=*s.begin();
    if( !s.empty() && !(word.substr(0,x).compare(word.substr(n-x))) ){
         cout<<word.substr(0,x)<< endl;
         legend=false;
         }

    if(legend)
       cout << "Just a legend"<<endl;

   return 0;
}
