class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long perimeter = 0,remainingSum =0;
        sort(begin(nums),end(nums));
        for(int i=0;i<n;i++){
            if(nums[i] < remainingSum){
                perimeter = remainingSum + nums[i];
            }
            remainingSum += nums[i];
        }
        return perimeter==0 ? -1 : perimeter;
    }
};