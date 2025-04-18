class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> countS(26,0);
        vector<int> countT(26,0);
        for(int i=0;i<s.size();i++){
            countS[s[i]-'a']++;
            countT[t[i]-'a']++;
        }
        // for(int i=0;i<t.size();i++){
        //     countT[t[i]-'a']++;
        // }
        for(int i=0;i<26;i++){
            if(countS[i]!=countT[i]){
                return false;
            }
        }
        return true;
    }
};