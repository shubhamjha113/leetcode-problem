class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        vector<int> lose0;
        vector<int> lose1;
        for(int i=0;i<matches.size();i++){
            int winner = matches[i][0];
            int looser = matches[i][1];

            if(mp.find(winner)==mp.end()){
                lose0.push_back(winner);
                mp[winner]=2;
            }

            if(mp[looser]==1){
                lose1.push_back(looser);
            }
        }
        sort(begin(lose0),end(lose0));
        sort(begin(lose1),end(lose1));
        return {lose0,lose1};
    }
};