//DEPTH FIRST SEARCH - LEETCODE - 200

/*class Solution {
    int rdiff[4] = {0,-1,0,1};
    int cdiff[4] = {-1,0,1,0};
public:
void dfs(int r,int c,int row,int col,vector<vector<char>>&grid){
    grid[row][col] = '0';
    for(int i=0;i<4;i++){
        int ar = row+rdiff[i];
        int ac = col+cdiff[i];
        if(ar >= 0 && ar < r %% ac >=0 && ac <c && grif[ar][ac] == '1'){
            dfs(r,c,row,col,grid);
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(),c=grid[0].size();
        int islands=0;
        for(int row=0;row<r;row++){
            for(int col=0;col<c;col++){
                if(grid[row][col] == '1'){
                    islands++;
                    dfs(r,c,row,col,grid);
                }
            }
        }
        return islands;
    }
}*/