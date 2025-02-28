class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        unordered_map<int,string> mpp;
        vector<int> temp(score);
        sort(temp.rbegin(),temp.rend());
        if (temp.size() > 0) mpp[temp[0]] = "Gold Medal";
        if (temp.size() > 1) mpp[temp[1]] = "Silver Medal";
        if (temp.size() > 2) mpp[temp[2]] = "Bronze Medal";
        for(int i=3;i<temp.size();i++){
            mpp[temp[i]] = to_string(i+1);
        }
        for(int num : score){
            ans.push_back(mpp[num]);
        }
        return ans;

    }
};