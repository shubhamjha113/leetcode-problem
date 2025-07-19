class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int &i:nums){
            mp[i]++;
        }
        int ans =0;
        for(auto it:mp){
            int count = it.second;
            if(count ==1){
                return -1;
            }
            else if(count %3==0){
                ans += count/3;
            }
            else if(count%3==1){
                count -=4;
                ans += 2+ count/3;
            }
            else{
                count -=2;
                ans += 1+ count/3;
            }
        }
        return ans;
    }
};