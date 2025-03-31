class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,vector<int>>> p;
        for(auto it : points){
            int dist = it[0]*it[0] + it[1]*it[1];
            p.push({dist,it});
            if(p.size()>k){
                p.pop();
            }
        }
        while(!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};