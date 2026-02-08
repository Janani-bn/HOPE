//REMOVE ADJACENT EQUAL ELEMENTS IN AN ARRAY USING STACK

/* #include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int n,i,val;
    cin >> n;
    stack<int> stk;
    for(i=1;i<=n;i++){
        cin >> val;
        if(!stk.empty() && stk.top() == val){
            stk.pop();
            continue;
        }
        stk.push(val);
    }
    cout << stk.size();
}*/