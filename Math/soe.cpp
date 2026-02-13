#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=0;
        vector<bool> isPrime(n,true);
        if(n > 0) isPrime[0] = false;
        if(n > 1) isPrime[1] = false;
        for(int i = 2;i * i< n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<n;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        for(int ind=2;ind<n;ind++){
            if(isPrime[ind]){
                count++;
            }
        }
        cout << count;
    }