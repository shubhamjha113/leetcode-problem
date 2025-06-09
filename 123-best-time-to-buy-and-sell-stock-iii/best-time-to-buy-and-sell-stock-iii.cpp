class Solution {
public:
   int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> next(5,0),curr(5,0);
        for(int ind = n-1;ind>=0;ind--){
            for(int tran_no = 3;tran_no>=0;tran_no--){
                if(tran_no%2==0)
                     curr[tran_no] = max(-prices[ind]+next[tran_no+1],next[tran_no]);
                else
                     curr[tran_no] = max(prices[ind]+next[tran_no+1],next[tran_no]);
            }
            next = curr;
        }
        return curr[0];
    }
};