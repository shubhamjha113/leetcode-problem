class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int x=1,y=1;
        for(int j=0;j<col;j++){
            if(matrix[0][j] == 0) x=0;
        }
        for(int i=0;i<row;i++){
            if(matrix[i][0] == 0) y=0;
        }
        
        for(int j=1;j<col;j++){
            for(int i=1;i<row;i++){
                if(matrix[i][j]==0){
                    matrix[i][0] =0;
                    matrix[0][j] =0;
                }
            }
        }

        for(int j=1;j<col;j++){
            if(matrix[0][j] ==0){
                for(int i=1;i<row;i++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i=1;i<row;i++){
            if(matrix[i][0] ==0){
                for(int j=0;j<col;j++){
                    matrix[i][j] = 0;
                }
            }
        }

        if(y==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
        if(x==0){
            for(int j=0;j<col;j++){
                matrix[0][j]=0;
            }
        }

    }
};