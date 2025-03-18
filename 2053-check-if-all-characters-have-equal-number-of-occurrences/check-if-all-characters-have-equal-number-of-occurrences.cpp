class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        int cnt=mp[s[0]];
        for(auto it:mp){
            if(it.second !=cnt) return false;
        }
        return true;
    }
};