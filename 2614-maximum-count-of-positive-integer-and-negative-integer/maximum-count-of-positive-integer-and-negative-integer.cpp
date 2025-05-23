class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0,ans=0;
        for(auto i:nums){
            if(i<0){
                neg++;
            }
            else if(i>0){
                pos++;
            }
            else{
                continue;
            }
            ans = max(pos,neg);
        }
        return ans;
    }
};