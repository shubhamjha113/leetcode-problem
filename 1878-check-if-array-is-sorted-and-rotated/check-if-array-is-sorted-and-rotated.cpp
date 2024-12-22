class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int orderBreak=0;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                orderBreak++;
            }
        }
        if(nums[n-1] > nums[0]){
            orderBreak++;
        }
        return orderBreak<=1;
    }
};