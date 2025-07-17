class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0,ans=0;
        while(i<costs.size() && coins>0){
            if(costs[i] <= coins){
                coins-= costs[i];
                ans++;
            }
            i++;
        }
        return ans;
    }
};