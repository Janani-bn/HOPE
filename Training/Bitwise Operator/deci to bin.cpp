// DECIMAL TO BINARY

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int val;
   cin >> val;
   vector<int> bits;
   while(val)
   {
      bits.push_back(val%2);
      val /= 2;
   }
   for(int i=bits.size()-1;i>=0;i--){
      cout << bits[i];
   }
   return 0;
}