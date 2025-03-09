class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n-1,-1);
        stack<int> st;
        nums.insert(nums.end(),nums.begin(),nums.end());
        for(int i=0;i<2*n-1;i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                ans[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        ans.erase(ans.begin()+ n,ans.begin()+(2*n-1));
        return ans;
    }
};