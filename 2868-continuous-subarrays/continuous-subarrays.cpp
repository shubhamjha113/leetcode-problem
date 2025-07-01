class Solution {
    typedef long long LL;
public:
    long long continuousSubarrays(vector<int>& nums) {
        multiset<LL> st;
        LL ans = 0;
        int l=0,r=0;
        while(r<nums.size()){
            st.insert(nums[r]);
            while( !st.empty() && abs(*st.rbegin()-*st.begin()) >2){
                st.erase(st.find(nums[l]));
                l++;
            }
            
            ans += r-l+1;
            r++;
        }
        return ans;
    }
};