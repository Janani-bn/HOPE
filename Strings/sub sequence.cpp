// SUB SEQUENCE IN A STRING WHICH ARE PALINDROME

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> lt(26,0),rt(26,0);//0 - value to be filled (0 starting)
    for(char ch:s){
        rt[ch-'a']++;
    }
    long long count =0LL;
    for(int i=0;i<s.size();i++){
        rt[s[i] - 'a']--;
        for(int alp=0;alp<26;alp++){
            count += (lt[alp] * rt[alp]);
        }
        lt[s[i] - 'a']++;
    }
    cout << count;
}