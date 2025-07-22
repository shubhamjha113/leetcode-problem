class Solution {
public:
    int n,m;
    void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid){
        vis[row][col] =1;
        queue<pair<int,int>> q;
        q.push({row,col});
        while(!q.empty()){
            int r=q.front().first;
            int c =q.front().second;
            q.pop();
            for(int drow =-1;drow<=1;drow++){
                for(int dcol=-1;dcol<=1;dcol++){
                    int nrow = r + drow;
                    int ncol = c + dcol;
                    if (abs(drow) + abs(dcol) != 1) continue;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol] =='1'){
                        q.push({nrow,ncol});
                        vis[nrow][ncol] =1;
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int count =0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col =0;col<m;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    bfs(row,col,vis,grid);
                   count++;   
                }
            }
        }
        return count;
    }
};