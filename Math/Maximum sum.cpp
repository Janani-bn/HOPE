//MAXIMUM SUM (02.02.25) (leetcode)

/*#include<iostream>
using namespace std;
int main()
{
    int len;
    cin >> len;
    vector<int> nums(len);
    for(int i : nums){
        cin >> nums[i];
    }
    int sum = 0;
        int max = nums[0];
        for(int ind = 0;ind < nums.size();ind++){
            sum = sum + nums[ind];
            if(sum > max){
                max = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
}*/