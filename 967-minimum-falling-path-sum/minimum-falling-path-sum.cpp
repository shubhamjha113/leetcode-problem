class Solution {
public:
 



    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int j=0;j<n;j++){
            dp[0][j] = matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up = matrix[i][j] +dp[i-1][j];
                int ld,rd;
                if(j-1>=0) {
                     ld = matrix[i][j] +dp[i-1][j-1];
                }
                else ld = 1e8;
                if(j+1<n) {
                     rd = matrix[i][j] +dp[i-1][j+1];
                }
                else rd = 1e8;
                
               dp[i][j] = min(up , min(ld,rd));

            }
        }
        int mini = dp[n-1][0];
        for(int j=1;j<n;j++){
            mini = min(mini , dp[n-1][j]);
        }
        return mini;
    }
};