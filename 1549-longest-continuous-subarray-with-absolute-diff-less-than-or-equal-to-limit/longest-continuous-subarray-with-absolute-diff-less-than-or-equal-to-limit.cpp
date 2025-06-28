class Solution {
public:

    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> st;
        int l=0,r=0,len = 0;
        while(r<nums.size()){
            st.insert(nums[r]);
            while(*st.rbegin() - *st.begin() > limit){
                st.erase(st.find(nums[l]));
                l++;
            }
            len = max(len,r-l+1);
            r++;
        }
        return len;
    }
};