class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;
        for(int j=0;j<n;j++){
            if(dq.size()==k) dq.pop_front();
            if(!dq.empty() && dq.back() != nums[j]-1) dq.clear();

            dq.push_back(nums[j]);
            if(j>=k-1){
                if(dq.size()==k) ans.push_back(dq.back());
                else ans.push_back(-1);
            }
        }
        return ans;
    }
};