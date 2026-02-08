//CHECKING IF A STRING CONTAINS ALPHABETS  FROM a to z USING BITWISE OPERATOR

 #include<iostream>
using namespace std;
int main()
{
   int flag=0;
   char str[100];
   cin >> str;
   for(int i=0;str[i]!='\0';i++){
      flag = flag | (1 << (str[i]-'a') );
   }
   if(flag == (1 << 26) - 1)
   cout << "yes";
   else
   cout << "no";
}