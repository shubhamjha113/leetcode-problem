class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l=0,r=0, len=0;
        unordered_map<int,int> mpp;
        int culprit=0;
        while(r<nums.size()){
            mpp[nums[r]]++;
            if(mpp[nums[r]]==k+1) culprit++;
            if(culprit>0){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==k) culprit--;
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};