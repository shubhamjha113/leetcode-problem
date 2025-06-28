class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long l=0,r=0,count=0;
        unordered_map<long long,long long> mp;
        long long maxi = *max_element(nums.begin(),nums.end());
        int countMax=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            if(nums[r]==maxi){
                countMax++;
            }
            while( countMax>=k){
                count += nums.size() - r;
                if(nums[l]==maxi){
                    countMax--;
                }
                l++;
            }
            r++;
        }
        return count;
    }
};