class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==0) return nums[0];

        if(n==1 && k&1 ) return -1;
        int i=0,maxi=0;
        while(i<n && i<k-1){
            maxi = max(maxi,nums[i]);
            i++;
        }
        int ans =0;
        if(k<n) ans = nums[k];
        return max(ans, maxi);
    }
};