//TO FIND NON DUPLICATE NUMBER IN AN ARRAY

#include<iostream>
using namespace std;
int main()
{
    int numsSize;
    cin >> numsSize;
    vector<int> nums(numsSize);
    for(int i=0;i<numsSize;i++)
    cin >> nums[i];
    int result = 0;
    for(int i=0;i<numsSize;i++){
        result = result ^ nums[i];
    }
    cout << result;
}