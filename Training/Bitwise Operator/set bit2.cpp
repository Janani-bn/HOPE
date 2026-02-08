//FINDING IF A BIT IS SET OR NOT (USING RIGHT SHIFT)

 #include<iostream>
using namespace std;
int main()
{
   int n,k,num;
   cin>>n>>k;
   if( (n >> (k-1)) % 10){
      cout << "Bit is set";
   }else{
      cout << "Bit is not set";
   }

}
