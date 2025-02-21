class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int &num:nums){
            mpp[num]++;
        }
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

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