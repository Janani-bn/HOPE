//DIFF BETWEEN SUM OF ELE AND SUM OF DIGITS OF ELE (01.02.25)

/*#include<iostream>
using namespace std;
int main(){
    int size,sum=0,num,add=0,i=0;
    cin >> size;
    int nums[size];
    for(int i=0;i<size;i++){
        cin >> nums[i];
    }
    for(int i=0;i<size;i++){
        sum = sum + nums[i];
    }
    while(i<size){
        num = nums[i];//num=1 num=15 num=6 num=3
        while(num > 0){
            int digit = num % 10;//d=1 d=5 d=1 d=6 d=3
            add = add + digit;//add=1 add=6 add=7 add=13 add=16
            num /= 10;//num=1
        }
        i++;
    }
    cout << abs(sum-add);
}*/