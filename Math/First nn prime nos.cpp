//PRINT FIRST N PRIME NUMBERS

#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,i=1;
    cin >> n;
    int count = 0;
    int num = 2;
    while(count < n){
        if(isPrime(num)){
            cout << num << " ";
            count++;
        }
        num++;
    }
    return 0;
}