class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int  n = nums.size();
        vector<int> rightMax(n);
        rightMax[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            rightMax[i] = max(rightMax[i+1],nums[i]);
        }
        int ramp = 0,i=0,j=0;
        while(j<n){
            while(i<j && nums[i]>rightMax[j]) i++;

            ramp  = max(ramp,j-i);
            if(j==n-1) break;
            j++;
        }
        return ramp;
    }
};