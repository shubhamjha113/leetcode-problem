class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans = 0;
        unordered_map<char,int> mp;
        for(int i = 0 ;i<s.size();i++){
            char ch = s[i];
            if(ch==c){
                mp[s[i]]++;
                ans+= mp[s[i]];
            } 
        }
        return ans;
    }
};