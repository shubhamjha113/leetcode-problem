class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = nums[0],prev2 = 0;
        for(int i=1;i<nums.size();i++){
            int pick = nums[i];
            if(i>1) pick+=prev2;
            int notPick = prev;
            int curr = max(pick , notPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};