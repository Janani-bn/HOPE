// DYNAMIC PROGRAMMING - MAXIMUM PATH SUM (BOTTOM AND LEFT)

#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cin >> row >> col;
    int mat[row][col],dp[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin >> mat[i][j];
        }
    }
    dp[0][col-1] = mat[0][col-1];
    for(i=col-2;i>=0;i--){
        dp[0][i] = mat[0][i] + dp[0][i+1];
    }
    for(i=1;i<=row;i++){
        dp[i][col-1] = mat[i][col-1] + dp[i-1][col-1];
    }
    
    for(i=1;i<row;i++){
        for(j=col-2;j>=0;j--){
            dp[i][j] = mat[i][j] + max(dp[i][j+1],dp[i-1][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << " " << dp[i][j];
        }
        cout << "\n";
    }
    cout << dp[row-1][0];
}