class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        int mini = INT_MAX;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(cost[i] < mini){
                mini = cost[i];
            }
            ans[i] = mini;
        } 
        return ans;
    }
};