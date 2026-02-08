//DYNAMIC PROGRAMMING (IMMEDIET BELOW ELEMENT CANNOT BE ACCESSED)

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    
    int row,col,c,r;
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    vector<vector<int>> dp(r, vector<int>(c));
    //int mat[r][c];
    //dp[r][c];
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            cin >> mat[row][col];
            if(row == 0){
                dp[row][col] = mat[row][col];
            }
        }
    }
    auto fsmax=[&](int row){
        int fmax = -1,smax = -1;
        for(int col=0;col<c;col++){
            if(dp[row][col] > fmax){
                smax = fmax;
                fmax = dp[row][col];
            }else{
                smax = max(smax,dp[row][col]);
            }
        }
        return make_pair(fmax,smax);
    };
    for(row=1;row<r;row++){
        auto p=fsmax(row-1);
        for(col=0;col<c;col++){
            if(dp[row-1][col] == p.first){
                dp[row][col] = p.second + mat[row][col];
            }else{
                dp[row][col] = p.first + mat[row][col];
            }
        }
    }
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            cout << " " << dp[r][c];
        }
        cout << "\n";
    }
    auto p = fsmax(r-1);
    cout << p.first;
}
