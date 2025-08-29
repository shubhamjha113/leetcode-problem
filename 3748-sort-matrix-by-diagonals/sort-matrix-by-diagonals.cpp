class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<int, vector<int>> mp;  

        int m = grid.size(),n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                mp[i-j].push_back(grid[i][j]);
            }
        }
        for(auto &it:mp){
            if(it.first <0){
                sort(rbegin(it.second),rend(it.second));
            }
            else{
                sort(begin(it.second),end(it.second));
            }
        }
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                grid[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }  
        return grid;
    }
};