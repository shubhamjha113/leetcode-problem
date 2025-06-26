class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==0) return nums;
        vector<int> ans(n,-1);
        if(n< 2*k +1) return ans;
        int l=0,r=2*k,total=2*k+1;
        long long  sum =0;
        for(int i=l;i<=r;i++){
            sum += nums[i];
        }
        ans[k] = sum/total;
        r++;
        int i = k+1;
        while(r<n){
            int gone = nums[l];
            int come = nums[r];
            sum +=(come-gone);
            ans[i]=sum/total;
            i++;
            l++;
            r++;
        }
        return ans;
    }
};