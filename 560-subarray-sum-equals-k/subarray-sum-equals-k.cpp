class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0,count =0;
        int n = nums.size();
        map<int,int> mpp;
        mpp[0] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int rem = sum -k;
            count += mpp[rem];
            mpp[sum] +=1;
        }
        return count;
    }
};