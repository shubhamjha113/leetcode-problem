class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> ans;
        if(n==0) return ans;
        int i=0;
        while(i<n){
            int start=i;
            while(i+1<n && nums[i+1] ==nums[i]+1){
                i++;
            }

            if(start==i){
                ans.push_back(to_string(nums[start]));
            }
            else{
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
            i++;
        }
        return ans;
    }
};