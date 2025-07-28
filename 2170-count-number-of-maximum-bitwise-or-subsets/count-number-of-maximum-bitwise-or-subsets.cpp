class Solution {
public:
   int countSubset(int idx,int currOR,vector<int> &nums,int maxOR,vector<vector<int>> &dp){
    if(idx == nums.size()){
        if(currOR==maxOR) return 1;
        return 0;
    }
    if(dp[idx][currOR] != -1) return dp[idx][currOR];
    int take = countSubset(idx+1,currOR | nums[idx],nums,maxOR,dp);
    int notTake = countSubset(idx+1,currOR,nums,maxOR,dp);
    return dp[idx][currOR] =  take + notTake;
   }


    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR = 0;
        for(int &num:nums){
            maxOR |= num;
        }
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(maxOR+1 , -1));
        int currOR = 0;
        return countSubset(0,currOR,nums,maxOR,dp);
    }
};