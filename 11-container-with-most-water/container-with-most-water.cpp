class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r=height.size()-1;
        int maxi =0;
        while(l<r){
            int lh=height[l];
            int rh = height[r];
            int minimum = min(lh,rh);
            maxi = max(maxi,minimum*(r-l));

            if(lh < rh) {
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
    }
};