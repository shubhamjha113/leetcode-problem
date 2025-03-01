class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int m=n/3 +1;
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(auto num :count){
            if(num.second== 1){
                return num.first;
            }
        }
        return 0;
    }
};