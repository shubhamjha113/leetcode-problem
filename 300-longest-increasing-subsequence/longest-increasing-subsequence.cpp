class Solution {
public:
     int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>next(n+1,0),curr(n+1,0);
        for(int ind = n-1;ind>=0;ind--){
            for(int prev_ind = n-1;prev_ind>=-1;prev_ind--){
                int len = 0+next[prev_ind+1];//not Take
                if(prev_ind==-1 || nums[ind]>nums[prev_ind]){
                    len = max(len,1+next[ind+1]);
                }
                curr[prev_ind+1] = len;
            }
            next = curr;
        }

        return curr[-1+1];
    }
};

//shifting of prev_ind by +1 so that escape from  out of bound 