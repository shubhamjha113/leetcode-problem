class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n+2,vector<int>(2,0));
        for(int ind = n-1;ind>=0;ind--){
            dp[ind][1] = max(-prices[ind]-fee+dp[ind+1][0],dp[ind+1][1]);//buy
            dp[ind][0] = max(prices[ind] + dp[ind+1][1],dp[ind+1][0]);//sell
        }
        return dp[0][1];
    }
};