//2810 - REVERSE THE STRING UNTIL 'i' IS ENOUNTERED (07.02.26)

/*#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;//string
    int ind,len = s.length();//len=6
    for(int i=0;i<len;i++){
        if(s[i] == 'i'){
            ind = i+1;//ind=4
            for(int j=0;j<ind/2;j++){//i=0 0<1 1<4 
                char temp = s[j];//temp=s
                s[j] = s[ind-j-1];//s[0] = s[2]
                s[ind-j-1] = temp;//s[2] = s
            }
        }
    }
    for(int ind=0;ind<len;ind++){
        if(s[ind] == 'i'){
            s.erase(ind,1);
            ind--;
        }
    }
    cout << s;
}*/
