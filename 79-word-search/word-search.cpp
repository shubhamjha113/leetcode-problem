class Solution {
public:
    int n,m;
    vector<vector<int>> dir{{1,0},{-1,0},{0,1},{0,-1}};
    bool find(vector<vector<char>>& board,int i,int j,string &word,int idx){
        if(idx==word.length()) return true;
        if(i<0 || j<0 || i>=n || j>=m || board[i][j] != word[idx] || board[i][j]=='$') return false;
        char temp = board[i][j];
        board[i][j]= '$';
        for(auto &d:dir){
            int newi = i+d[0];
            int newj = j+d[1];
            if(find(board,newi,newj,word,idx+1)){
                return true;
            } 
        }
        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
         n = board.size(),m=board[0].size();
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && find(board,i,j,word,0)){
                    return true;
                }
            }
         }
         return false;
    }
};