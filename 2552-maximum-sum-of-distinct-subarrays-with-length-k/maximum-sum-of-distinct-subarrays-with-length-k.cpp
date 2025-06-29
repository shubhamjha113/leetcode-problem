class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0,r=0;
        long long sum=0,maxSum =0;
        unordered_set<long long> st;
        while(r<nums.size()){
            while(st.count(nums[r])){
                sum-= nums[l];
                st.erase(nums[l]);
                l++;
            }  
            st.insert(nums[r]);
            sum += nums[r];
            if(r-l+1 == k ){
                maxSum = max(maxSum,sum);
                //shrink window 
                sum -= nums[l];
                st.erase(nums[l]);
                l++;
            } 
            r++;      
        }
        return maxSum;
    }
};