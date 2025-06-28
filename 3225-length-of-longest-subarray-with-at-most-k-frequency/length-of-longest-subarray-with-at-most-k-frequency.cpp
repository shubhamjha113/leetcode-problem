class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0, len=0;
        unordered_map<int,int> mpp;
        while(r<nums.size()){
            mpp[nums[r]]++;
            while(l<r && mpp[nums[r]]>k){
                mpp[nums[l]]--;
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};