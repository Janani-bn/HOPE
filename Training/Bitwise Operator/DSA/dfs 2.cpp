//DFS - RABBIT WILL MEET OR NOT

#include<iostream>
using namespace std;
int flag = 0;
int rdiff[8] = {-1,0,1,0,-1,-1,1,1,};
int cdiff[8] = {0,1,0,-1,-1,1,-1,1};
void dfs(int st_row,int st_col,int row,int col,vector<vector<int>>&grid){
    for(int i=0;i<8;i++){
        int ar = st_row+rdiff[i];
        int ac = st_col+cdiff[i];
        if(grid[ar][ac] == 3){
            flag = 1;
            break;
        }else if(grid[ar][ac] != 0){
            grid[ar][ac] = 0;
        }
    }
    if(flag)
    cout << "yes";
    else
    cout << "no";
}
int main()
{
    int row,col,st_row,st_col;
    cin >> row >> col;
    vector<vector<int>>grid(row,vector<int>(col));
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cin >> grid[r][c];
            if(grid[r][c] == 2){
                st_row = row;
                st_col = col;
            }
            dfs(st_row,st_col,row,col,grid);
        }
    }
    return 0;
}