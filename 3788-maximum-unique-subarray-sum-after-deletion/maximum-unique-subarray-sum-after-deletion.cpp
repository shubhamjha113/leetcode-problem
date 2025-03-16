class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum =0;
        
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
              s.insert(nums[i]);
        }
        if(s.empty()){
            return *max_element(nums.begin(),nums.end());
            //return maxi;
        }
        else{
            for(auto num:s)
                sum+=num;
        }
        return sum;
    }
};