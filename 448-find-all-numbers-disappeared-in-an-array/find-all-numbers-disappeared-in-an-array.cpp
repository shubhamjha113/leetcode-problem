class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i;
        int n = nums.size();
        vector<int> count(n+1,0);
        for( i=0;i<n;i++){
            count[nums[i]]++;
        }
        for( i=1;i<n+1;i++){
            if(count[i]==0){
                ans.push_back(i);
            }
        }


        return ans;
    }
};