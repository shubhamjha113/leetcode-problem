class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0,maxi=-1,n=nums.size();
        int l=0,r=0;
        while(r<n){
            mp[nums[r]]++;
            while(mp[nums[r]] >1){
                sum -=nums[l];
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            if(mp[nums[r]] <=1){
                sum +=nums[r];
            }
           
            maxi = max(maxi,sum);
            r++;           
        }
        return maxi;
    }
};