//DYNAMIC PROGRAMMING - MAXIMUM PATH SUM (TOP AND LEFT)

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
    dp[row-1][col-1] = mat[row-1][col-1];
    for(i=col-2;i>=0;i--){
        dp[row-1][i] = mat[row-1][i] + dp[row-1][i+1];
    }
    for(i=row-2;i>=0;i--){
        dp[i][col-1] = mat[i][col-1] + dp[i+1][col-1];
    }
    
    for(i=row-2;i>=0;i--){
        for(j=col-2;j>=0;j--){
            dp[i][j] = mat[i][j] + max(dp[i][j+1],dp[i+1][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << " " << dp[i][j];
        }
        cout << "\n";
    }
    cout << dp[0][0];
}