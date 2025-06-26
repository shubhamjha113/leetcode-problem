class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = 0;
        int i=0 , zero =0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) zero++;

            while(zero>1){
                if(nums[i]==0) zero--;
                i++;
            }
            maxi = max(maxi,j-i);
        }
        return maxi;
    }
};