class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return {};
        set<int> s(arr.begin(),arr.end());
        int rank = 1;
        unordered_map<int,int> mp;
        for(auto it:s){
            mp[it]=rank++;
        }

        vector<int> ans;
        for(auto i : arr){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};