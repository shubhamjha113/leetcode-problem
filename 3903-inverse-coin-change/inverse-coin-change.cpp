class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        int n = numWays.size();
        vector<int> coins;
        vector<int> dp(n+1,0);
        dp[0] = 1;
        for(int i=0;i<n;i++){
            int x = numWays[i]-dp[i+1];
            if(x>1 || x<0) return {};//pehla baar me  1 se jada ways nhi aa skta h pehle koi n koi hona chahiye 
            if(x==0) continue;

            coins.push_back(i+1);  // x 1 hai to push kr dennge answer me 
            for(int j = i+1;j<=n;j++){
                dp[j] += dp[j-(i+1)];
            }  
        } 
        return coins;   
    }
};