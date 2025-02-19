class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans(2,0);
        int row = mat.size();
        int col  = mat[0].size();
        int oneCount = INT_MIN;
        int rowNo = -1;
        for(int i=0;i<row;i++){
            int count =0;
            for(int j=0;j<col;j++){
                if(mat[i][j] == 1)
                count++;
            }
            if (count > oneCount) {
                oneCount = count;
                rowNo = i;
            }
        }
        ans[0]=rowNo;
        ans[1] =  oneCount;
        return ans;
    }
};