//1D PREFIX SUM ALGORITHM

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n-1],presum[n-1];
    for(int i=1;i<=n;i++){
       cin >> arr[i];
    }
    presum[0] = 0;
    for(int i=1;i<=n;i++){
       presum[i] = presum[i-1] + arr[i];
    }
    int q,st,end;
    cin >> q;
    while(q--){
       cin >> st >> end;
       printf("%d\n",presum[end] - presum[st-1]);
    }
}
