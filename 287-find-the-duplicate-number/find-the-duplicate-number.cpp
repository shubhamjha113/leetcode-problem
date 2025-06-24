class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l =1 , r = nums.size()-1;
        while(l<r){
            int mid = l + (r-l)/2;
            int count = 0;
            for(int &x:nums){
                if(x<=mid) count++;
            }

            if(count>mid) r = mid;
            else l = mid+1;
        }
        return l;
    }
};