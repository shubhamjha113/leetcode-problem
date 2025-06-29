class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 1;
        vector<int> ans(n-k+1,-1);
        for(int i=1;i<k;i++){
            if(nums[i]==nums[i-1]+1) count++;
            else count =1;
        }
        if(count==k) ans[0] = nums[k-1];
        int l=1,r=k;
        while(r<n){
            if(nums[r]==nums[r-1]+1) count++;
            else count=1;
            
            if(count>=k) ans[l] = nums[r] ;

            r++,l++;
        }
        return ans;
    }
};