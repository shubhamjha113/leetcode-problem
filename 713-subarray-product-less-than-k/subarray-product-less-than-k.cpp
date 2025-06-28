class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0,count=0;
        if(k<=1) return 0;
        int product=1;
        while(r<nums.size()){
            product *= nums[r];
            while(product>=k){
                product /=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
};