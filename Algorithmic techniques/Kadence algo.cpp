//MAXIMUM SUM SUBARRAY - KADENCE ALGORITHM

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

//MAXIMUM SUM SUBARRAY - BRUTE FORCE

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,prod=1;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int currMax = arr[0],currMin = arr[0],ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < 0) swap(currMax,currMin);
        currMax = max(arr[i],currMax*arr[i]);
        currMin = max(arr[i],currMin*arr[i]);
        ans = max(ans,currMax);
    }
    cout << ans;
}

//PRINTING SUBARRAY WHICH GIVES MAXIMUM SUM - KADENCE 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,sum=0,val,start=-1,end=-1;
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
   for(int i=start;i<=end;i++) cout << arr[i] << " ";
}

//PRINTING SUBARRAY WHICH GIVES MAXIMUM PRODUCT

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,prod=1;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int currMax = arr[0],currMin = arr[0],ans = arr[0],start=0,startIndex=0,endIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i] < 0) swap(currMax,currMin);
        if(arr[i] > arr[i]*currMax){
            currMax = arr[i];
            start = i;
        }else{
            currMax = currMax * arr[i];
        }
        if(currMax > ans){
            ans = currMax;
            startIndex = start;
            endIndex = i;
        }
    }
    for(int i=startIndex;i<=endIndex;i++) cout << arr[i] << " ";

}