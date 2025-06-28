class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int totalOne = 0,currOne =0,maxCount=0;
        int n = nums.size();
        for(int &i:nums){
            if(i==1) totalOne++;
        }
        
        int l=0,r=0;
        while(r<2*n){
            if(nums[r%n]==1) currOne++;
            while(r-l+1 > totalOne){
                currOne -= nums[l%n];
                l++;
            }
            maxCount = max(maxCount,currOne);
            r++;
        }
        return totalOne - maxCount;
    }
};