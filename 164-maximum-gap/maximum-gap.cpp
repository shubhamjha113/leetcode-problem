class Solution {
public:
    int maximumGap(vector<int>& nums) {
       if(nums.size()==1) return 0;
       int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            int diff = nums[i]-nums[i-1];
            if(diff>maxi){
                maxi = diff;
            }
        }
        return maxi;
    }
};