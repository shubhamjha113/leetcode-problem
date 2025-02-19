class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       int row =nums.size();
       int col = nums[0].size();
       
        for(int i = 0; i < row; i++) {
            sort(nums[i].rbegin(), nums[i].rend());
        }
        int sum=0;

        for(int j = 0; j < col; j++) {
        int maxElement = 0;
        for(int i = 0; i < row; i++) {
            maxElement = max(maxElement, nums[i][j]);
        }
        sum += maxElement;
    }


      return sum;  
    }
};