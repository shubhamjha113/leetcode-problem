class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st;
        for(int &i:nums){
            st.insert(i);
        }
        int dif = st.size();
        unordered_map<int,int> mp;
        int l=0,r=0,ans=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(mp.size()==dif){
                ans += nums.size()-r;
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};