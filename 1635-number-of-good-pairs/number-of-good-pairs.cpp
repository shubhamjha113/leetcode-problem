class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            count+=mp[nums[i]];
            mp[nums[i]]++;            
        }
        return count;
    }
};