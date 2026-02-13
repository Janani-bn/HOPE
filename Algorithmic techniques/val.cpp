#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int max = arr[0];
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;
    }
   cout << max;
}