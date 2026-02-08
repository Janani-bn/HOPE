//REVERSE ONLY LETTERS IN A STRING (06.02.26)

/*#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int ind = 0;
    int itr = len-1;
    while(ind < itr){
        if(!(isalpha(s[ind]))){
            ind++;
        }else if(!(isalpha(s[itr]))){
            itr--;
        }else{
            char temp = s[ind];
            s[ind] = s[itr];
            s[itr] = temp;
            ind++;
            itr--;
        }
    }
    cout << s;
}*/
