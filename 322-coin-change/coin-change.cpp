class Solution {
public:
int f(int ind,vector<int> &coins,  int target,vector<vector<int>>& dp){
	//base case
	if(ind == 0){
		if(target% coins[0]==0) return target / coins[0];
		
		return 1e9;
	}
	if(dp[ind][target]!=-1) return dp[ind][target];


	int notTake = f(ind-1,coins,target,dp);
	int take = INT_MAX;
	if(coins[ind] <= target) take = 1+ f(ind,coins,target - coins[ind],dp);

	return dp[ind][target] =  min(take,notTake);

}

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
	    int ans = f(n - 1, coins, amount, dp);
        return (ans >= 1e9) ? -1 : ans;
    }
};