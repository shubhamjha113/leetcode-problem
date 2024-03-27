class Solution {

           
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> answer(2,-1);
        int n= nums.size();
       if(n==0) return answer;
       int leftIndex=lower_bound(nums.begin(),nums.end(),target) - nums.begin();
       int rightIndex= upper_bound(nums.begin(),nums.end(),target) - nums.begin();
       if(leftIndex==rightIndex) return answer;
       answer[0]=leftIndex;
       answer[1]=rightIndex-1;
       return answer;
    }
    
};