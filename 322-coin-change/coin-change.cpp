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
	if(coins[ind] <= target) take = 1+ f(ind,coins,target - coins[ind],dp);//index doesnot reduce here 

	return dp[ind][target] =  min(take,notTake);

}

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int tar = 0;tar<= amount;tar++){
            if(tar%coins[0]==0){
                dp[0][tar] = tar/coins[0];
            }
            else
                dp[0][tar]= 1e9;
        }
        for(int ind = 1;ind<n;ind++){
            for(int tar = 0;tar<= amount;tar++){
                int notTake = dp[ind-1][tar];
                int take = INT_MAX;
                if(coins[ind] <= tar) take = 1+ dp[ind][tar - coins[ind]];
                 dp[ind][tar] =  min(take,notTake);
            }
        }


	    int ans = dp[n - 1][amount];
        return (ans >= 1e9) ? -1 : ans;
    }
};