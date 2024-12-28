class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans;
        map<int,int> count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(auto i :  count){
            if(i.second > n/2){
                 ans = i.first;
            }
        }
        return ans;
    }
};