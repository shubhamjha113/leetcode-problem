class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count++;
        }
        if(count>1) return ans;

        int index=0;
        int product=1;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
            index=i;
            continue;
           }
           else{
            product *= nums[i];
           }
        }

        if(count==1){
            ans[index]=product;
            return ans;
        }
        for(int i=0;i<n;i++){
            ans[i]=product/nums[i]; 
        }
        return ans;
    }
};