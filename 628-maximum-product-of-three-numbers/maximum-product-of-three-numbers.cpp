class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int maxi1 =nums[0]*nums[1]*nums[n]; 
        int maxi2 = nums[n]*nums[n-1]*nums[n-2];
        return max(maxi1,maxi2);
    }
};