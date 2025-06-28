class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long n = nums.size(),l=0,r=0,maxF=0,sum=0;
        sort(nums.begin(),nums.end());
        while(r<n){
            sum +=nums[r];
            while((nums[r]*(r-l+1)) > sum+k){
                sum -= nums[l];
                l++;
            }
            maxF  = max(maxF,r-l+1);
            r++;
        }
        return maxF;
    }
};