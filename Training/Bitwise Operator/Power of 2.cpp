// CHECK IF AN INTERGER IS A POWER OF 2 OR NOT

#include<iostream>
using namespace std;
int  main()
{
   int num;
   cin >> num;
   if((num & (num-1)) == 0)
   cout << "yes";
   else
   cout << "no";
}