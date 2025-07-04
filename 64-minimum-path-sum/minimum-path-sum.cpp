class Solution {
public:
    int f(int i,int j , vector<vector<int>> &dp,vector<vector<int>>& grid ){
        if(i==0 && j==0) return grid[0][0];
        if(dp[i][j]!=-1) return dp[i][j];

        int up = 1e9, left = 1e9;
        if(i > 0) up = grid[i][j] + f(i - 1, j, dp, grid);
        if(j > 0) left = grid[i][j] + f(i, j - 1, dp, grid);
        return dp[i][j] = min(up,left);
    }


    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp,grid);
    }
};