class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return {};
        set<int> s(arr.begin(),arr.end());
        int rank = 1;
        unordered_map<int,int> mp;
        for(auto &it:s){
            mp[it]=rank++;
        }

        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=mp[arr[i]];
        }
        return ans;
    }
};
// do same without using set .    take one vector arr and sort it and make a map for rank 