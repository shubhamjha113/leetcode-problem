class Solution {
public:
    bool solve(vector<int> nums, int k,int target){
        int n = nums.size(),count = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i] != target){
                nums[i] = -nums[i];
                nums[i+1] = -nums[i+1];
                count++;
                if(count>k) return false;
            }
        }
        return nums[n-1]==target;
    }

    bool canMakeEqual(vector<int>& nums, int k) {
        return solve(nums,k,1) || solve(nums,k,-1);
    }
};