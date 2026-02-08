//GOOGLE QUESTION

#include<iostream>
#include<map>
using namespace std;
int main()
{
   int n,zc=0,pt=0;
   map<int,int> omap;
   cin >> n;
   string s;
   for(int ctr=1;ctr <= n;ctr++){
      cin >> s;
      int flag =0;
      for(char ch:s){
         flag = flag ^ (1<<(ch-'a'));
      }
      if(flag == 0) 
      zc++;
      else{
         pt++;
         omap[flag]++;
      }
   }
   long long  count = 0LL;
   count += zc*(zc-1)/2;
   count += (zc*pt);
   for(int pow=0;pow<=25;pow++){
      int ocnt =omap[1<<pow];
      count += (ocnt * (ocnt-1))/2;
   }
   cout << count;
}