class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<int, priority_queue<int>> Dmp;
        unordered_map<int, priority_queue<int,vector<int>, greater<int>>> Imp;

        int m = grid.size(),n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i-j<0){
                    Imp[i-j].push(grid[i][j]);
                }
                else{
                    Dmp[i-j].push(grid[i][j]);
                }              
            }
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                if(i-j<0){
                    temp.push_back(Imp[i-j].top());
                    Imp[i-j].pop();
                }
                else{
                    temp.push_back(Dmp[i-j].top());
                    Dmp[i-j].pop();
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};