class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(char ch : stones){
            mp[ch]++;
        }

        int ans=0;
        for(char ch: jewels){
            ans += mp[ch];
        }
        return ans;
    }
};