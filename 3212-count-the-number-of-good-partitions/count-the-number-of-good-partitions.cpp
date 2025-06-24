class Solution {
int m = 1e9+7;
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }
        int i=0,j=0;
         j = max(j,mp[nums[i]]);
        int res = 1;
        while(i<n){
            if(i>j){
                res = (res*2)%m;
            }
            j = max(j,mp[nums[i]]);
            i++;
        }
        return res%m;
    }
};