class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &a:arr){
            mp[a]++;
        }
        unordered_set<int> st;
        for(auto &it:mp){
            int freq = it.second;
            if(st.find(freq) != st.end()){
                return false;
            }

            st.insert(freq);
        }
        return true;
    }
};