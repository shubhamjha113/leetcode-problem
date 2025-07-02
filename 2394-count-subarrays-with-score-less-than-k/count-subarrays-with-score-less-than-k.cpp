class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l=0,r=0;
        long long sum = 0,ans = 0;
        while(r<nums.size()){
            sum += nums[r];
            while(l<=r && sum*(r-l+1) >= k) {
                sum -= nums[l];
                l++;
            }
            ans += r-l+1;
            r++;
        }
        return ans;
    }
};