
class Solution {

 int m = 1e9+7;   
public:

    int numSubseq(vector<int>& nums, int target) {
        int  n = nums.size(),l = 0,r = n-1;
        int ans=0;
        sort(nums.begin(),nums.end());
        vector<int> pow2(n+1,1);
        for(int i=1;i<=n;i++){
            pow2[i] = (pow2[i-1]*2)%m;
        }
        while(l<=r){
            if(nums[l]+nums[r] <= target){
                ans  = (ans + pow2[r-l])%m;
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};

//power TLE dega 