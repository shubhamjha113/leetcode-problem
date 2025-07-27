class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0,left=0,n=nums.size();
        for(int i=1;i<n-1;i++){
            if(nums[i] != nums[i+1]){
                if(nums[i]>nums[left] && nums[i]>nums[i+1] || nums[i]<nums[left] && nums[i]<nums[i+1]){
                    count++;
                }
                left = i;
            }
        }
        return count;
    }
};