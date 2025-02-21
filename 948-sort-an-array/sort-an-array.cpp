class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return nums; 
        
        
        int maxi =nums[0];
        int mini = nums[0];
        for (int num : nums) {
            if (num < mini) mini = num;
            if (num > maxi) maxi = num;
        }
    
    
     vector<int> freq(maxi - mini + 1, 0);

   
    for (int num : nums) {
        freq[num - mini]++;
    }


        int index = 0;
    for (int num = mini; num <= maxi; num++) {
        while (freq[num - mini]-- > 0) {
            nums[index++] = num;
        }
    }




        return nums;
    }
};