class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        result[0]=1;
        for(int i=1;i<n;i++){
            result[i]=nums[i-1]*result[i-1];
        }

        int rightProduct = 1;
        for(int i=n-1;i>=0;i--){
            result[i]=result[i]*rightProduct;
            rightProduct*=nums[i];
        }
        return result;
    }
};