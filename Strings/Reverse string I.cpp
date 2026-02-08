//REVERSE LETTERS FIRST , THEN CHARACTERS (07.02.26)

/*#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int ind = 0;
    int itr = len - 1;
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
    ind = 0;
    itr = len - 1;
    while(ind < itr){
        if(!((s[ind]>=32&&s[ind]<=47)||(s[ind]>=58&&s[ind]<=64)||(s[ind]>=91&&s[ind]<=96)||s[ind]>=123&&s[ind]<=126)){
            ind++;
        }else if(!((s[itr]>=32&&s[itr]<=47)||(s[itr]>=58&&s[itr]<=67)||(s[itr]>=91&&s[itr]<=96)||s[itr]>=121&&s[itr]<=126)){
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
