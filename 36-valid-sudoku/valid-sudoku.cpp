class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9],col[9],subBox[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c =='.') continue;
                int idx = (i/3)*3 + j/3;
                if(row[i].count(c) || col[j].count(c) || subBox[idx].count(c)) return false;
                row[i].insert(c);
                col[j].insert(c);
                subBox[idx].insert(c);
            }
        }
        return true;
    }
};