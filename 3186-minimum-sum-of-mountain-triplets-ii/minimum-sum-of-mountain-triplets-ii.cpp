class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,INT_MAX);
        vector<int> right(n,INT_MAX);
        int minL = nums[0],minR = nums[n-1];
        for(int i=1;i<n;i++){
            minL = min(minL,nums[i-1]);
            left[i]= minL;
        }
        for(int i=n-2;i>=0;i--){
            minR = min(minR,nums[i+1]);
            right[i]= minR;
        }
        int ans = 1e9;
        for(int j=1;j<n-1;j++){
            if(nums[j]>left[j]&& nums[j]>right[j]){
                ans = min(ans,nums[j]+left[j]+right[j]);
            }
        }
        return (ans==1e9) ? -1 : ans;
    }
};