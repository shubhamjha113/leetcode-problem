class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &i:nums){
            mp[i]++;
        }
        int ans =0;
        for(auto it:mp){
            int count = it.second;
            if(count ==1){
                return -1;
            }
            ans += ceil((double)count/3);
        }
        return ans;
    }
};