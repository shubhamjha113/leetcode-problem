class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<pair<int,int>> dp(n);
        for(auto &vec: grid){
            int sum = 0,flag = 0;
            for(int i=0;i<n;i++){
                if(vec[i]=='X'){
                    flag = 1;
                    sum++;
                }
                else if(vec[i]=='Y'){
                    sum--;
                }
                dp[i].first |= flag;
                dp[i].second += sum;
                if(dp[i].first && !dp[i].second){
                    ans++;
                }
            }
        }
        return ans;
    }
};