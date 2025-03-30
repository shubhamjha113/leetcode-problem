class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int k=0;
        for(auto it:nums){
            if(it<pivot){
                ans.push_back(it);
            }
            if(it==pivot){
                k++;
            }
        }
        while(k--){
            ans.push_back(pivot);
        }
        for(auto it:nums){
            if(it>pivot ){
                ans.push_back(it);
            }
        }
        return ans;
    }
};