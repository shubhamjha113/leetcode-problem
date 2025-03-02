class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
         int i=0,j=1;
        for(int k=0;k<n;k++){
            if(nums[k]&1){
                ans[j]=nums[k];
                j=j+2;
            }
            else{
                ans[i]=nums[k];
                i=i+2;
            }
        }
        return ans;
    }
};