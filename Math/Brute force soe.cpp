//BRUTE FORCE FOR SIEVE OF ERATOSTHENES ALGORITHM

/*
The Sieve of Eratosthenes is an efficient algorithm used to find all prime numbers up to a given number N.

Idea (simple)

Assume all numbers from 2 to N are prime.

Start with the first prime number 2.

Mark all multiples of 2 as not prime.

Move to the next unmarked number (3) and mark all its multiples.

Repeat until you reach √N.

The numbers left unmarked are prime numbers.

Example (N = 10)

Numbers: 2 3 4 5 6 7 8 9 10

Mark multiples of 2 → 4, 6, 8, 10

Mark multiples of 3 → 6, 9

Remaining primes:
2, 3, 5, 7

Time Complexity

O(N log log N) (very fast for large N)*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int val = 2,count=0;
        while(val < n){
        bool flag = true;
        int num = val;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                flag = false;
            }
        }
        if(flag) count++;
        val++;
    }
    cout << count;
}