// DYNAMIC PROGRAMMING - MAXIMUM PATH SUM (T0P AND RIGHT)

 #include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row,col,i,j;
    cin >> row >> col;
    vector<vector<int>> mat(row ,vector<int>(col));
    vector<vector<int>> dp(row ,vector<int>(col));
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin >> mat[i][j];
        }
    }
    dp[row-1][0] = mat[row-1][0];
    //cout << dp[row-1][0];
    for(i=1;i<col;i++){
        dp[row-1][i] = mat[row-1][i] + dp[row-1][i-1];
    }
    for(i=row-2;i>=0;i--){
        dp[i][0] = mat[i][0] + dp[i+1][0];
    }
    for(i=row-2;i>=0;i--){
        for(j=1;j<col;j++){
            dp[i][j] = mat[i][j] + max(dp[i][j-1],dp[i+1][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout << " " << dp[i][j];
        }
        cout << "\n";
    }
    cout << dp[0][col-1];
}