class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<bool> count(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]=1;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(count[i]==0){
                ans.push_back(i);
            }
        }


        return ans;
    }
};