class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int &num:nums){
            mpp[num]++;
        }
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
        }


        int i=0;
        for(int num = mini;num<=maxi;num++){
            while(mpp[num]>0){
                nums[i] = num;
                i++;
                mpp[num]--;
            }
        }




        return nums;
    }
};