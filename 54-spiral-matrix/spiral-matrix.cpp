class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size(),col = matrix[0].size();
        int count =0,total = row*col;
        //index initialisation 
        int startingRow =0,startingCol =0;
        int endingRow = row-1,endingCol = col-1;

        while(count < total){
            //print starting row
            for(int index = startingCol; count<total && index<= endingCol;index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //print ending col
            for(int index = startingRow; count<total && index<= endingRow;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //print endingrow
            for(int index = endingCol; count<total && index>=startingCol;index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print startingcol
            for(int index = endingRow; count<total && index>=startingRow ;index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;


        }
        return ans;
    }
};