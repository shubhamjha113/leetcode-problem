class Solution {
public:
    int count(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int l=0,r=0,sum=0,cnt=0;
        while(r<nums.size()){
            sum += nums[r]%2;
            while(sum>goal){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {
         return count(nums,k)-count(nums,k-1);
    }
};