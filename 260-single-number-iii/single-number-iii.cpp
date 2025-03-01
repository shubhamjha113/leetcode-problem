class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return  nums;
        vector<int> ans;
        int m = nums.size()/2 +2;
        unordered_map<int,int> freq(m);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it :freq){
            if(it.second == 1){
                ans.push_back(it.first);            }
        }
        return ans;
    }
};