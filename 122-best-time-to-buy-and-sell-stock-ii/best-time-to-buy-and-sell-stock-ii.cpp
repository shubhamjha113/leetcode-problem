class Solution {
public:
      int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> next(2,0),curr(2,0);
        
        
        for(int ind = n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy){
                    curr[buy] = max(-prices[ind]+ next[0],next[1]);
                }
                else{
                    curr[buy] = max(prices[ind]+ next[1],next[0]);
                }
                 
            }
            next= curr;
        }
        return next[1];
    }
};