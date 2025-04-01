class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int l=0,r=0;
        while(r<nums.size()-1){
            int maxDist = 0;
            for(int i = l;i<=r;i++){
                maxDist = max(maxDist,i+nums[i]);
            }
            l=r+1;
            r = maxDist;
            ans++;
        }
        return ans;
    }
};