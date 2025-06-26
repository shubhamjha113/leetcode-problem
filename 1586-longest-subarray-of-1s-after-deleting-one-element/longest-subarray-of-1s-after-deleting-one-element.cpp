class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        int i=0 , zeroInd =-1;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0  ) {
                i = zeroInd+1;
                zeroInd = j;
            }
            maxi = max(maxi,j-i);
        }
        return maxi;
    }
};