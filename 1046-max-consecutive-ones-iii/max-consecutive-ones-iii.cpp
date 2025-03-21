class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0,maxsum = 0,zero=0;
        while(r<n){
            if(nums[r]==0) zero++;
            if(zero>k){
                if(nums[l]==0){
                    zero--;
                }
                l++;
            }
            maxsum=max(maxsum , r-l+1);
            r++;
        }
        return maxsum;
    }
};