class Solution {
public:
    int f(int i,int j, vector<int>&arr, vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int maxi = INT_MIN;
        for(int ind = i;ind<=j;ind++){
            int cost = arr[i-1]*arr[ind]* arr[j+1] + f(i,ind-1,arr,dp) + f(ind+1,j,arr,dp);
            maxi = max(maxi , cost);
        }
        return dp[i][j] = maxi;
    }



    int maxCoins(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> dp(n+2,vector<int>(n+2,-1));
    arr.push_back(1);
    arr.insert(arr.begin(),1);
    return f(1,n,arr,dp);
    }
};