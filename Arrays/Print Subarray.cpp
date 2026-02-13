//PRINT THE SUBARRAY WITH MAXIMUM SUM

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,sum=0,start=-1,end=-1,val;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(sum == 0) val = i;
        sum = sum + arr[i];
        if(sum > max){
            max = sum;
            start = val;
            end = i;
        }
        if(sum < 0) sum = 0;
    }
   cout << max << endl;
   for(int i=start;i<=end;i++) cout << arr[i] << " ";
}

