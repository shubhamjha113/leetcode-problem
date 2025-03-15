class Solution {
public:
    int trap(vector<int>& height) {
        int Lmax=0,Rmax=0,total = 0;
        int l=0,r=height.size()-1;
        while(l<r){
            if(height[l] <= height[r]){
                if(Lmax > height[l]){
                    total += Lmax-height[l];
                }
                else{
                    Lmax = height[l];
                }
                l++;
            }
            else{
                if(Rmax > height[r]){
                    total += Rmax-height[r];
                }
                else{
                    Rmax = height[r];
                }
                r--;
            }    
        }
        return total;
    }
};