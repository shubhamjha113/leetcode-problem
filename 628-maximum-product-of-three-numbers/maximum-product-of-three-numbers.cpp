class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.rbegin(),nums.rend());
        int maxi1 =nums[0]*nums[1]*nums[2]; 
        int maxi2 = nums[n]*nums[n-1]*nums[0];
        return max(maxi1,maxi2);
    }
};