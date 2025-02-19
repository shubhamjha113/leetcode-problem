class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
       int row =nums.size();
       int col = nums[0].size();
       
        // for(int i = 0; i < row; i++) {
        //     sort(nums[i].rbegin(), nums[i].rend());
        // }

        for (auto& r : nums) {
        sort(r.rbegin(), r.rend());
    }

        
        
        int sum=0;
        

        for(int j = 0; j < col; j++) {
        int maxEle = 0;
        for(int i = 0; i < row; i++) {
            maxEle = max(maxEle, nums[i][j]);
        }
        sum += maxEle;
    }


      return sum;  
    }
};