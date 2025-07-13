class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size(),sum=0 , mini=1e9;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[j] >nums[i] && nums[k] < nums[j]  ){
                        sum = sum + nums[i]+nums[j]+nums[k];
                        mini = min(mini,sum);
                        sum=0;
                    }
                }
            }
        }
        if(mini == 1e9) return -1;
        return mini;
    }
};