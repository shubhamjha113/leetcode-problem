class Solution {
public:
    int mod = 1e9+7;
    int solve(int n ,int x, int num,vector<vector<int>> &dp){
        if(n<0) return 0;
        if(n==0) return 1;
        if(pow(num,x) > n) return 0;
        if(dp[n][num] != -1) return dp[n][num];
        int notTake = solve(n,x,num+1,dp);
        int take = solve(n - pow(num,x), x,num+1,dp);
        
        return dp[n][num] = (take+notTake)%mod;
    }
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(301,vector<int>(301,-1));
        return solve(n,x,1,dp);
    }
};