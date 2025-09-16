class Solution {
public:
    int mod = 1e9 + 7;
    int fRev(int x){
        string num = to_string(x);
        reverse(begin(num),end(num));
        return stoi(num);
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        //if(n==1) return 0;
        for(int i=0;i<n;i++){
            nums[i] = nums[i] - fRev(nums[i]);
        }
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            ans = (ans + mp[nums[i]])%mod;
            mp[nums[i]]++;
        }
        return ans;
    }
};