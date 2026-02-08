//SWAP ONLY THE ODD NUMBERS IN AN ARRAY

 #include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;

    while(l < r) {
        // move left to next odd
        while(l < r && arr[l] % 2 == 0) l++;
        // move right to previous odd
        while(l < r && arr[r] % 2 == 0) r--;

        if(l < r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }

    // output
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} 
