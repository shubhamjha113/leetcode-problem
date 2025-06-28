class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0,r=0,count=0,an = 0;
        while(r<nums.size()){
            while((an & nums[r]) !=0){
                an ^=nums[l];
                l++;
            }
            an |= nums[r];
            count = max(count,r-l+1);
            r++;
        }
        return count;
    }
};