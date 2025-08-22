class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int minR = m,maxR = -1, minC = n,maxC = -1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    minR = min(minR, i);
                    maxR = max(maxR, i);
                    minC = min(minC, j);
                    maxC = max(maxC , j);
                }
            }
        }
        
        return (maxC-minC+1)*(maxR-minR+1);
    }
};