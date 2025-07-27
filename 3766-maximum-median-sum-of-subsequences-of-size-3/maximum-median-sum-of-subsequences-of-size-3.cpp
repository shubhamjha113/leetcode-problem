class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long ans = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0,j=n-2;
        while( i<j){
            
            ans +=nums[j];
            i++,j-=2;
        }
        return ans;
    }
};