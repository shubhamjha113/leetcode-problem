class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int b =0,a = n-1,m=n-2;
        while(b<m){
            ans += piles[m];
            a-=2,m-=2,b+=1;
        }
        return ans;
    }
};