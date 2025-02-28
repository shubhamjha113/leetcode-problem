class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> greater;
        stack<int> st;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>st.top()){
                st.pop();
            }
            greater[nums2[i]]= st.empty()?-1: st.top();
            st.push(nums2[i]);
        }
        for(int num : nums1){
            ans.push_back(greater[num]);
        }

        return ans;
    }
};