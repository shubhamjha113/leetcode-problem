class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
         map<int , int> count;
         for(int i=0;i<n;i++){
            count[nums[i]]++;
         }
         for(auto j : count){
            if(j.second > n/3){
                ans.push_back(j.first);
            }
         } 
        return ans;
    }
};