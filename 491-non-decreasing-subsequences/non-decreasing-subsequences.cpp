class Solution {
public:
    int n ;
    void f(vector<int> &nums,int idx,vector<vector<int>> &ans ,vector<int> &temp ){
        if(temp.size()>=2){
             ans.push_back(temp);
        }
        unordered_set<int> st;
        for(int i=idx;i<n;i++){
            if((temp.empty() || temp.back()<=nums[i]) && st.find(nums[i]) == st.end()){
                temp.push_back(nums[i]);
                f(nums,i+1,ans,temp);
                temp.pop_back();
                st.insert(nums[i]);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        f(nums,0,ans,temp);
        return ans;
    }
};