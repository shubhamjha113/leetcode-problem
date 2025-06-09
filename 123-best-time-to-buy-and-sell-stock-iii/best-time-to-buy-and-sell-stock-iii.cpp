class Solution {
public:
   int f(int ind,int tran_no,vector<int>&prices,vector<vector<int>> &dp){
        int n=prices.size();
        if(ind==n || tran_no==4) return 0;
        if(dp[ind][tran_no]!= -1) return dp[ind][tran_no];
        if(tran_no%2==0){
            return dp[ind][tran_no] = max(-prices[ind]+f(ind+1,tran_no+1,prices,dp),f(ind+1,tran_no,prices,dp));
        }
        return dp[ind][tran_no] = max(prices[ind]+f(ind+1,tran_no+1,prices,dp),f(ind+1,tran_no,prices,dp));
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return f(0,0,prices,dp);
    }
};