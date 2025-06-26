class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minInd=-1,maxInd=-1,culpritInd =-1;
        long long ans =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==minK) minInd = i;
            if(nums[i]==maxK) maxInd = i;
            if(nums[i]>maxK || nums[i]<minK) culpritInd=i;
            int small = min(minInd,maxInd);
            int temp = small-culpritInd;
            ans +=  temp <= 0 ? (long long)0 : (long long)temp;
        }
        return ans ;
    }
};