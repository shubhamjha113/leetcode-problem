class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>> mp;
        vector<int> ans;
        int m = mat.size(),n= mat[0].size();    
        for(int i=0;i<m;i++){
            for(int j = 0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
      
        for(auto &it: mp){
            vector<int> temp(it.second);
                if(it.first %2 ==0){
                    reverse(temp.begin(),temp.end());
                }
                ans.insert(ans.end(), temp.begin(),temp.end());
                   
        }
        return ans;
    }
};