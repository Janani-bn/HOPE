//DYNMAIC PROGRAMMING (BOTTOM AND RIGHT)

 #include<iostream>
using namespace std;
int main()
{
    int row,col,i,j,c,r;
    cin >> row >> col;
    int mat[row][col],dp[row][col];
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            cin >> mat[r][c];
        }
    }
    dp[0][0] = mat[0][0];
    //processing the first row
    for(c=1;c<col;c++){
        dp[0][c] = dp[0][c-1] + mat[0][c];
        cout << dp[0][c];
        cout << " ";
    }
    //processing first col
    for(r=1;r<row;r++){
        dp[r][0] = dp[r-1][0] + mat[r][0];
        cout << dp[r][0];
        cout << " ";
    }
    for(r=1;r<row;r++){
        for(c=1;c<col;c++){
            dp[r][c] = max(dp[r-1][c], dp[r][c-1]) + mat[r][c];
            //cout << " " << dp[r][c];
        }
        //cout << "\n";
    }
    cout << "\n" << dp[r-1][c-1];
} 