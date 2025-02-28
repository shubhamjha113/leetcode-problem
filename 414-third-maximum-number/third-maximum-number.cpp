class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n =nums.size();
        if(n<3) return *max_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());
        int maxi=nums[n-1];
        int count =1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=nums[i+1]){
                count++;
            }
            if(count==3){
                return nums[i];
            }
        }

        return maxi;
    }
};