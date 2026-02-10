#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    unordered_map<int,int> freq;
        for(int x : nums){
            if(x%2==0) freq[x]++;
        }
        if(freq.empty()) return -1;
        int max = 0;
        int ans=-1;
        for(auto &p : freq){
            int num = p.first;//n=0 n=1 n=2 n=4
            int count = p.second;//c=2 c=2 c=2 c=2
            if((count > max)||(count == max && num < ans)){
                max = count;//m=1 m=2
                ans = num;//a=0 a=1
            }
        }
        cout << ans;
}