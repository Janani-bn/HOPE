//CHECK IF A CHARECTERS OF A STRING CAN FORM PALINDROME OR NOT

 #include<iostream>
using namespace std;
int main()
{
   int flag=0;
   char str[100];
   cin >> str;
   for(int i=0;str[i];i++){
      flag = flag ^ (1 << (str[i] - 'a'));
   }
   if((flag == 0) || (flag & (flag-1)) == 0 ){
      cout << "yes";
   }else{
      cout << "no";
   }
   return 0;
} 