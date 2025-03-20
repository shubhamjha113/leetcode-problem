class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mini = INT_MAX;
        if(k==1) return 0;
        sort(begin(nums),end(nums));
        int i=0;
        while(i<=nums.size()-k){
            int diff = nums[i+k-1]-nums[i];
            mini = min(mini,diff);
            i++;
        }
        return mini;
    }
};