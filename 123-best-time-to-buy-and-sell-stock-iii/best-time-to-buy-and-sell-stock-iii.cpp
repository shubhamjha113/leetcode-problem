class Solution {
public:
   int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(5,0));
        for(int ind = n-1;ind>=0;ind--){
            for(int tran_no = 3;tran_no>=0;tran_no--){
                if(tran_no%2==0)
                     dp[ind][tran_no] = max(-prices[ind]+dp[ind+1][tran_no+1],dp[ind+1][tran_no]);
                else
                     dp[ind][tran_no] = max(prices[ind]+dp[ind+1][tran_no+1],dp[ind+1][tran_no]);
            }
        }
        return dp[0][0];
    }
};