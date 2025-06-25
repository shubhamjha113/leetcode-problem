class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> count(n*m+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                count[grid[i][j]]++;
            }
        }
        vector<int> ans(2);
        for(int i=1;i<count.size();i++){
            if(count[i]==2){
                ans[0] = i;
            }
            if(count[i]==0 ){
                ans[1] = i;
            }
        }
        return ans;
    }
};