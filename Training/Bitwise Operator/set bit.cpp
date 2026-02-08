//FINDING IF A BIT IS SET OR NOT (USING LEFT SHIFT)

 #include<iostream>
using namespace std;
int main()
{
   int n,k;
   cin >> n >> k;
   if( n & (1 << (k-1) ) ){
      cout << "Bit is set";
   }else{
      cout << "Bit is not set";
   }
   return 0;
}
