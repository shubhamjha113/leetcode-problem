class Solution {
public:
int n;
    int solve(int idx,vector<int>& nums, int t,vector<vector<int>> &dp){
        if(t == 0) return 1;
        if(idx>=n || t<0) return 0;
        if(dp[idx][t] != -1) return dp[idx][t];
        int take = solve(0,nums,t-nums[idx],dp);
        int notake=solve(idx+1,nums,t,dp);
        return dp[idx][t] = take+notake;
    }

    int combinationSum4(vector<int>& nums, int target) {
        n = nums.size();
        vector<vector<int>> dp(201,vector<int>(1001,-1));
        return solve(0,nums,target,dp);
    }
};