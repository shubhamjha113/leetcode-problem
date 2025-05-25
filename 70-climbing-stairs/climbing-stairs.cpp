class Solution {
public:
//memoization
    // int f(int n ,vector<int> &dp){
    //     if(n<=0) return n==0?1:0;
    //     if(dp[n]!= -1) return dp[n];
    //     return dp[n]=f(n-1,dp)+f(n-2,dp);
    // }

    // int climbStairs(int n) {
    //     vector<int> dp(n+1,-1);
    //     return f(n,dp);
    // }


//TABULATION 
    // int climbStairs(int n) {
    // if (n == 1) return 1; // Base case 
    
    // vector<int> dp(n + 1, 0);
    // dp[0] = 1; // Base case: One way to stay at step 0
    // dp[1] = 1; // One way to reach step 1 (taking a single step)

    // for (int i = 2; i <= n; i++) {
    //     dp[i] = dp[i - 1] + dp[i - 2]; 
    // }

    // return dp[n];

//SPACE OPTIMIZATIONN
int climbStairs(int n) {
    if (n == 1) return 1; 
    
   
    int prev = 1; // Base case: One way to stay at step 0
    int prev2 = 1; // One way to reach step 1 (taking a single step)
    int curr;
    for (int i = 2; i <= n; i++) {
        curr = prev+prev2; 
        prev2 = prev;
        prev = curr;   
    }
    return prev;
   

}
};