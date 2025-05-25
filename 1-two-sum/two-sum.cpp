class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining],i};
            }
            mp[num] = i ;
        }
        return {-1,-1};
    }
};