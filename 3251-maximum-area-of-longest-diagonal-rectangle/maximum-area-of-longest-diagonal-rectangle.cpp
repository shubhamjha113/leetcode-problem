class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi = 0,maxArea = 0;
        int i=-1,j=-1;
        for(auto &x:dimensions){
            int len = x[0];
            int wid = x[1];
            int area = len*wid;
            int diag = len*len + wid*wid;
            if(diag > maxi || (diag==maxi && area > maxArea)){
                i = len;
                j=wid;
                maxi = diag;
                maxArea = area;              
            }
        }
        return i*j;
    }
};