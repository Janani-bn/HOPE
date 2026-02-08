//REVERSE ONLY THE VOWELS IN A STRING (06.05.26)

/*#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
        int itr = 0;
        int ind = len-1;
        while(itr < ind){
            char c = tolower(s[itr]);
            char a = tolower(s[ind]);
            if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')){
                itr++;
            }else if(!(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')){
                ind--;
            }else{
                char temp = s[itr];
                s[itr] = s[ind];
                s[ind] = temp;
                itr++;
                ind--;
            }
        }
}*/
