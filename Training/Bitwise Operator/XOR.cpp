// EXOR 

#include<iostream>
using namespace std;
int main()
{
   int n,xorval=0,curr;
   cin >> n;
   for(int ctr=1;ctr<=n;ctr++){
      cin >> curr;
      xorval = xorval ^ curr;
      cout << "\n";
      cout <<  xorval;
   }
   cout << xorval;
}