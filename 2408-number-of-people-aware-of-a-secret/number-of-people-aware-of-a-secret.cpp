class Solution {
public:
    const int mod = 1e9 + 7;
    int f(int day,int n,int delay,int forget,vector<int> &dp){
        if(day>=n) return 1;
        if(dp[day] != -1) return dp[day];
        int ans = 1;
        for(int j=day+delay;j<=min(day+forget,n);j++){
            if(j == day + forget){
                ans--;
                break;
            }
            ans = (ans + f(j,n,delay,forget,dp))%mod;
        }
        return dp[day] = ans;
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> dp(n+1,-1);
        return f(1,n,delay,forget,dp);
    }
};