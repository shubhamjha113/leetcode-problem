class Solution {
public:
bool cheak(int n,int i,vector<string> &board,int j){
    //upper left diagonal cheak
    int row=i,col=j;
    while(row>-1 && col >-1){
        if(board[row][col]=='Q'){
            return 0;
        }
        row--,col--;
    }

    //upper right
    row =i,col=j;
    while(row>-1 && col <n){
        if(board[row][col]=='Q'){
            return 0;
        }
        row--,col++;
    }
    return 1;

}
void find(int row,int n,vector<vector<string>> &ans,vector<string> &board,vector<int> &column){
    //base case 
    if(row == n){
        ans.push_back(board);
        return;
    }

    for(int j=0;j<n;j++){
        if(column[j] == 0 && cheak(n,row,board,j)){
            column[j]=1;
            board[row][j]='Q';
            find(row+1,n,ans,board,column);
            column[j]=0;
            board[row][j]='.';
        }
    }
}


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i].push_back('.');
            }
        }

        vector<int> column(n,0);
        find(0,n,ans,board,column);
        return ans;
    }
};