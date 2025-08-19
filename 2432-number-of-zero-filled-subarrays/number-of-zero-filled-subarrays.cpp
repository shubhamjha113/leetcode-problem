class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long prevZero = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                prevZero++;
                ans += prevZero;
            }
            else{
                prevZero = 0;
            }
        }
        return ans;
    }
};