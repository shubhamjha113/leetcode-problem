class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<int> next(2*k+1,0),curr(2*k+1,0);
        for(int ind = n-1;ind>=0;ind--){
            for(int tran_no = 2*k-1;tran_no>=0;tran_no--){
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