/* Leader of an array -  When every element on the right side of the array is smaller 
Note : Last element will always be a leader because there is nothing on the right */

//BRUTE FORCE - O(n^2)

#include<iostream>
using namespace std;
int main(){
  int n,j;
  cin >> n;
  vector<int> nums(n);
  vector<int> ans;
  for(int i=0;i<n;i++) cin >> nums[i];
  for(int i=0;i<n;i++){
    bool leader = true;
    for(j=i+1;j<n;j++){
        if(nums[j] > nums[i]){
            leader = false;
            break;
        }
    }
    if(leader) ans.push_back(nums[i]);
  }
  for(int x : ans) cout << x << " ";
}

//OPTIMAL SOLUTION
/* If the element is greater than the maximum element present amoung the right elements then it is a leader*/

#include<iostream>
using namespace std;
int main(){
    int n,j,maxVal = 0;
  cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++) cin >> nums[i];
  for(int i=0;i<n-1;i++){
    int val = i+1;
    maxVal = max(maxVal,nums[val]);
  }
  cout << maxVal;
}