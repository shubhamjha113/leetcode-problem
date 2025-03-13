class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t =0;
        int n = tickets.size();
        for(int i=0;i<=k;i++){
            t+=min(tickets[k],tickets[i]);
        }
        for(int i=k+1;i<n;i++){
            t+= min(tickets[k]-1,tickets[i]);
        }
        return t;
    }
};