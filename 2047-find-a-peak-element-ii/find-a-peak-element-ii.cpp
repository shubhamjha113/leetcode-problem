class Solution {
public:

    int maxi(vector<vector<int>>& mat,int row,int col,int mid){
        int maxVal = INT_MIN,index = -1;
        for(int i=0;i<row;i++){
            if(mat[i][mid] > maxVal){
                maxVal = mat[i][mid];
                index =i;
            }
        }
        return index;
    }


    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int s=0;
        int e = col-1;

        while(s<=e){
            int mid = s + (e-s)/2;
            int maxRowNo= maxi(mat,row,col,mid); // find max row 

            int left = (mid-1>=0) ? mat[maxRowNo][mid-1]:-1;
            int right = (mid+1 < col) ? mat[maxRowNo][mid+1] :-1;

            if(mat[maxRowNo][mid] > left && mat[maxRowNo][mid] > right){
                return {maxRowNo,mid};
            }

            else if(mat[maxRowNo][mid] < left){
                e = mid-1;
            } 
            else{
                s = mid+1;
            }
        }
        return {-1,-1};
    }
};